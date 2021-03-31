// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "DevStackKMP",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        .library(
            name: "DevStackKMP",
            targets: ["DevStackKMPWrapper"]
        ),
    ],
    targets: [
        .target(
            name: "DevStackKMPWrapper",
            dependencies: [
                .target(name: "DevStackKMP")
            ],
            path: "./shared/swiftpackage/DevStackKMPWrapper"
        ),
        .binaryTarget(
            name: "DevStackKMP",
            path: "./shared/swiftpackage/DevstackKmpShared.xcframework"
        )
    ]
)
