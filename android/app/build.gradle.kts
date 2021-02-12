plugins {
    id("com.android.application")
    kotlin("android")
}

val appName = "MateeCoreApp"

android {
    compileSdkVersion(Application.Sdk.compile)

    defaultConfig {
        applicationId = Application.id

        minSdkVersion(Application.Sdk.min)
        targetSdkVersion(Application.Sdk.target)

        versionCode = Application.Version.code
        versionName = Application.Version.name

        testInstrumentationRunner("androidx.test.runner.AndroidJUnitRunner")
    }

    signingConfigs {
        named("debug").configure {
            storeFile = file("../../other/keystore/debug.jks")
            storePassword = "android"
            keyAlias = "androiddebugkey"
            keyPassword = "android"
        }

        register("release") {
            storeFile = file("../../other/keystore/release.jks")
            storePassword = "android"
            keyAlias = "androiddebugkey"
            keyPassword = "android"
        }
    }

    buildTypes {
        getByName("debug") {
            isMinifyEnabled = false
            applicationIdSuffix = ".debug"
            signingConfig = signingConfigs.getByName("debug")
        }

        create("alpha") {
            initWith(getByName("release"))
            applicationIdSuffix = ".alpha"
            signingConfig = signingConfigs.getByName("debug")
        }

        getByName("release") {
            isMinifyEnabled = false
            signingConfig = signingConfigs.getByName("release")
        }
    }

    testBuildType = "debug"

    sourceSets {
        getByName("main").java.srcDirs("src/main/kotlin")
        getByName("test").java.srcDirs("src/test/kotlin")
        getByName("androidTest").java.srcDirs("src/androidTest/kotlin")
        getByName("release").java.srcDirs("src/release/kotlin")
    }

    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }

    buildFeatures {
        dataBinding = true
        compose = true

        lintOptions {
            lintConfig = File("lint.xml")
        }
    }

    composeOptions {
        kotlinCompilerVersion = kotlinVersion
        kotlinCompilerExtensionVersion = Dependency.Compose.version
    }

    applicationVariants.all {
        if (buildType.name != "release") {
            resValue("string", "app_name", "[${buildType.name.capitalize()}]$appName")
        } else {
            resValue("string", "app_name", appName)
        }
    }
}


dependencies {
    implementation(project(Project.shared))
    implementation(project(Project.Android.shared))

    implementation(Dependency.Kotlin.stdlib)
    implementation(Dependency.AndroidX.core)
    implementation(Dependency.AndroidX.appCompat)
    implementation(Dependency.AndroidX.material)

    implementation(Dependency.Compose.ui)
    implementation(Dependency.Compose.uiTooling)
    implementation(Dependency.Compose.foundation)
    implementation(Dependency.Compose.activity)
    implementation(Dependency.Compose.navigation)
    implementation(Dependency.Compose.material)
    implementation(Dependency.Compose.materialIconsCore)

    implementation(Dependency.Compose.Accompanist.insets)

    androidTestImplementation(Dependency.Compose.uiTest)
}