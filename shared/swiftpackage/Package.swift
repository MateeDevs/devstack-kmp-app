// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "KmpShared",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        .library(
            name: "KmpShared",
            targets: ["KmpShared"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "KmpShared",
            path: "./KmpShared.xcframework"
        ),
    ]
)
