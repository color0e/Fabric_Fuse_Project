# Fabric_Fuse_Project
Fusetools + Fabric android sdk

## 수정사항
<pre><code>build.gradle -> implementation files('C:/Users/color0e/Desktop/result/fabric-sdk-java-1.1.0-alpha.jar')
local.properties -> sdk.dir and ndk.dir을 개인pc 환경(디렉토리경로)에 맞게수정
sdk의 Fabrichelper.java에 정의된 서버ip 변경하여 패키징하여 내장한뒤 빌드
Hello.uno의 fabric ca ip변경</code></pre>

## Build
<pre><code>fuse build --target=Android --trace</code></pre>
