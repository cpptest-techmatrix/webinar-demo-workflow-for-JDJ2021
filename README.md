"# webinar-demo-ja" 

~~~
TechMatrix ウェビナー デモ環境

~~~

# 補足事項
* 本デモ環境はC++testとGNU Arm Embedded Toolchainを用いたビルド＆テストのデモ環境です。  
  以下のような動作を行うパイプラインが実装されています。
  - Dockerfileを用いてDockerイメージの作成
  - Dockerコンテナを起動
  - ビルド確認
    - コンパイラ:arm-none-eabi-gcc
    - ビルドユーティリティ:CMake/GNU Make
  - テスト実行
    - C++testプロジェクトの作成
    - MISRA C 2012のコーディングガイドラインチェック
    - QEMUを実行環境とした単体テストの実行
    - Parasoft DTPへのテスト結果のパブリッシュ
* Jenkinsfileのパイプラインは正常系のみの実装となります。
* Dockerコンテナ作成には<HOME>/moduleにparasoft_cpptest_2020.2.0_linux_x86_64.tar.gzを配置する必要があります。

## クライアントPCでのC++test起動
Dockerfileでの初期セットアップにはubuntu-desktopは含めていません。  
クライアントでGUIを使用する場合、Dockerコンテナ作成後にubuntu-desktopをインストールしてください。
また、xhostなどでホスト側でDockerコンテナの画面を表示するなどの対応も必要ですが、Dockerfileには含まれていません。
CUIのみ使用する場合、ubuntu-desktopは不要です。

コマンド例)
$ docker build -t webinar-demo-ja:webinar-demo-ja .
$ docker run --net=host --name webinar-demo-ja -itd -e DISPLAY=$DISPLAY -v /tmp/.X11-unix/:/tmp/.X11-unix -v /home/cpptest/webinar-demo:/home/cpptest/webinar-demo webinar-demo-ja:webinar-demo-ja
$ docker exec -it webinar-demo-ja /bin/bash
root#apt-get install -y ubuntu-desktop
root#apt-get install -y libgtk2.0-dev
$ xhost +localhost
$ docker exec --user cpptest -it webinar-demo-ja /bin/bash

## FlowAnalysisプロジェクトのビルド方法
$ cd FlowAnalysis
$ mkdir build
$ cd build
$ cmake .  ※必ずしもカレントである必要はありません。
$ make

もしカレントでビルドした場合は、ビルド後の環境削除はenv_clean.shをご利用いただけます。
