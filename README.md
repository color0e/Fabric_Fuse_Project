# Fabric_Fuse_Project
Fusetools + Fabric android sdk

## Build
<pre><code>fuse build --target=Android --trace
지정한 파일을 찾을수 없다는 1 error가 떠도 성공한 것이니 apk생성을 확인해주세요</code></pre>

## 테스트환경
<pre><code>GenyMotion - Nexus 5X(필수:Android Oreo<api level 26>)
+ 생성된 가상머신에 Oreo Arm Translation zip파일을 끌어다 옮겨 설치한후 재시작</code></pre>

ARM_Translation_Oreo.zip -> https://github.com/color0e/Oreo_Arm_trans

## 필독)수정사항
<pre><code>build.gradle -> implementation files('C:/Users/color0e/Desktop/result/fabric-sdk-java-1.1.0-alpha.jar')
local.properties -> sdk.dir and ndk.dir을 개인pc 환경(디렉토리경로)에 맞게수정
sdk의 Fabrichelper.java에 정의된 서버ip 변경하여 패키징하여 내장한뒤 빌드
Hello.uno의 fabric ca ip변경</code></pre>
