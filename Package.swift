// swift-tools-version: 6.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Barion-SDK",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "Barion-SDK",
            type: .dynamic,
            targets: ["Barion-SDK"]),
    ],
    dependencies: [
    ],
    targets: [
        // Targets are the basic building blocks of a package, defining a module or a test suite.
        // Targets can depend on other targets in this package and products from dependencies.
        .binaryTarget(
            name: "ipworks3ds_sdk",
            path: "./Sources/ipworks3ds_sdk.xcframework"
        ),
        .binaryTarget(
            name: "BarionSDK",
            path: "./Sources/BarionSDK.xcframework"
        ),
        .target(
            name: "Barion-SDK",
            dependencies: [
                .target(name: "ipworks3ds_sdk"),
                .target(name: "BarionSDK")
            ])

    ]
)
