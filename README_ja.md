# ﻿OpenPOS for OLE サービスオブジェクト開発補助
=========================================  
これらは OpenPOS for OLE(旧OLE for Retail POS:略称OPOS)のサービスオブジェクト(SO)開発を補助するためのDLLです。  
Common Control Objectsの定数定義DLL(Opos_Constants.dll)に啓発されて、SO開発に不足している情報を作成しました。  
以下の定義を含んでいます。  

- 全デバイスのOPOS SOのIDispatch COMインタフェース定義。  
- コントロールオブジェクト(CO)-SO間のインターフェースで内部的に使う、OPOSプロパティのインデックス値のenum定義。  
- .NET frameworkのCOM相互運用機能に合致するインタフェース/enum定義のPrimary Interop Assembly(PIA)。  

これらは、32bit, 64bit, .NET frameworkそれぞれの環境毎に Interfaces と Internals の2つのDLLになっています。  

## 利点  
このDLLを使用することにより、以下の利点があります。  

- 開発時の定数指定にインテリセンス(Visual Studio IDEによるガイド)が使えます。  
- 新規にSOを開発する際に、いちいちインタフェース定義をすべて書く必要がなくなります。  
- C#, VB でSOを開発することが簡単になります。  
- 32bit/64bit両環境用に1つのソースでSOを開発することが簡単になります。  

## 必要環境  
このプログラムの開発および利用/実行には以下が必要です。  

- Visual Studio 2017またはVisual Studio Community 2017 のversion 15.8.7 またはそれ以降  
- .NET framework 3.5および4.0以降  

以下の同時使用を強く推奨します。  

- Common Control Objects 1.14.001 : http://monroecs.com/oposccos_current.htm  
- 上記の64bitサポート改造版 : https://github.com/kunif/OPOS-CCO  
- OPOS for .NET Assemblies 1.14.001 : http://monroecs.com/posfordotnet/opos_dotnet.htm  

注) Common Control Objects と OPOS for .NET Assemblies は、Common Control Objects の .msi インストーラーを使えば 1回の操作で両方ともインストールされます。  

## インストール  
インストールは以下の手順で行ってください。  

- 対象ファイル用に(以下のような)適当なフォルダを作成し、ファイルをコピーする。  
  - ファイルコピー元  
    - OPOS 32bit : Build\\Win32 フォルダの Opos_Interfaces.dll および Opos_Internals.dll  
    - OPOS 64bit : Build\\x64 フォルダの Opos_Interfaces.dll および Opos_Internals.dll  
    - .NET : Build\\dotNET フォルダの OpenPOS.Devices.Opos_Interfaces.dll および OpenPOS.Devices.Opos_Internals.dll  
  - OPOS 32bit および .NET ファイルコピー先  
    - 64bitOS時 : C:\\Program Files (x86)\\OPOS\\SOCommonフォルダ  
    - 32bitOS時 : C:\\Program Files\\OPOS\\SOCommonフォルダ  
  - OPOS 64bit ファイルコピー先  
    - 64bitOS : C:\\Program Files\\OPOS\\SOCommonフォルダ  


- RegSvr32.exeを管理者として実行し、DLLをレジストリ登録する。  
  - 32bit/64bit両OS : C:\\Windows\\System32\\cmd.exe を管理者として実行。  
  - C:\\Program Files\\OPOS\\SOCommonフォルダに移動。  
  - RegSvr32 Opos_Interfaces.dll および RegSvr32 Opos_Internals.dll を実行。  
  - 両方とも正常に登録されたダイアログ表示を確認してcmd.exeを終了。  

  - 64bitOS時は追加処理 : C:\\Windows\\SysWOW64\\cmd.exe を管理者として実行。  
  - C:\\Program Files (x86)\\OPOS\\SOCommonフォルダに移動。  
  - RegSvr32 Opos_Interfaces.dll および RegSvr32 Opos_Internals.dll を実行。  
  - 両方とも正常に登録されたダイアログ表示を確認してcmd.exeを終了。  


- Gacutil.exeを管理者として実行し、COM相互運用機能にかかわるDLLをグローバルアセンブリキャッシュに登録する。  
  - Visual Studioまたは .NET Framework Developer Packがインストールされていることを前提とします。  
  - Visual Studioの開発者コマンドプロンプトか、通常のコマンドプロンプトを管理者として実行。
  - OpenPOS.Devices.Opos_Interfaces.dll / OpenPOS.Devices.Opos_Internals.dll をコピーしたフォルダに移動。
  - (必要ならばフルパス名を指定し)Gacutil /if OpenPOS.Devices.Opos_Interfaces.dll を実行。
  - (同じく必要ならばフルパス名を指定し)Gacutil /if OpenPOS.Devices.Opos_Internals.dll を実行。
  - 両方とも正常に登録されていることを確認してコマンドプロンプトを終了。  


- RegAsm.exeを管理者として実行し、COM相互運用機能にかかわるDLLをPIAとして登録する。  
  - Visual Studioの開発者コマンドプロンプトか、通常のコマンドプロンプトを管理者として実行。
  - (必要ならばフルパス名を指定し)RegAsm "C:\\Windows\\Microsoft.NET\\assembly\\GAC_MSIL\\OpenPOS.Devices.Opos_Interfaces\\v4.0_1.14.1.0__ad2c9a67c3439201\\OpenPOS.Devices.Opos_Interfaces.dll" /register を実行。
    - 64bitOS時 : "C:\\Windows\\Microsoft.NET\\Framework64\\v4.0.30319\\RegAsm.exe"  
    - 32bitOS時 : "C:\\Windows\\Microsoft.NET\\Framework\\v4.0.30319\\RegAsm.exe"  
  - (同じく必要ならばフルパス名を指定し)RegAsm "C:\\Windows\\Microsoft.NET\\assembly\\GAC_MSIL\\OpenPOS.Devices.Opos_Interfaces\\v4.0_1.14.1.0__ad2c9a67c3439201\\OpenPOS.Devices.Opos_Internals.dll" /register を実行。
  - 両方とも正常に登録されていることを確認してコマンドプロンプトを終了。  


## 利用方法  
C#でのSO開発時には、以下のようにして利用してください。  

- 関連する定義の命名規則  
  - IDispatch インタフェース : IOPOSxxxxSO (xxxxにOPOSデバイスクラス名)   
  - デバイス共通プロパティ : OPOS_Internals.PIDX_pppp (ppppにプロパティ名)  
  - デバイス固有プロパティ : OPOSxxxxInternals.PIDXyyyy_pppp (xxxxにOPOSデバイスクラス名、yyyyにデバイスクラス名の短縮形、ppppにプロパティ名)  


- 対象プラットフォームの追加と変更。  
  - メニューのソリューションプラットフォームから構成マネージャーを起動する。  
  - アクティブソリューションプラットフォームの新規作成で、x86とx64の両方を追加する。  
  - 以後の作業はx86/x64で行う。  


- プロジェクトのプロパティでCOM関連の設定を有効化する。  
  - アプリケーションタブのアセンブリ情報ボタンでアセンブリをCOM参照可能にするをチェック。  
  - ビルドタブの出力欄でCOM相互運用機能の登録をチェック。


- 文字列定義のソースファイルをコピーしてプロジェクトに追加する。  
  - OPOSのデバイス定義レジストリのキー名称やデバイススタティスティクス項目名の文字列を定義したソースファイルをコピーしてプロジェクトに追加する。  
    - Buildフォルダの OposRegKey.cs と OposStat.cs  


- 参照の追加 : グローバルアセンブリキャッシュに登録した2つのDLLとOPOS for .NET Assemblies のDLLを参照に追加する。  
  - C:\\Windows\\Microsoft.NET\\assembly\\GAC_MSIL\\OpenPOS.Devices.Opos_Interfaces\\v4.0_1.14.1.0__ad2c9a67c3439201\\OpenPOS.Devices.Opos_Interfaces.dll  
  - C:\\Windows\\Microsoft.NET\\assembly\\GAC_MSIL\\OpenPOS.Devices.Opos_Internals\\v4.0_1.14.1.0__ad2c9a67c3439201\\OpenPOS.Devices.Opos_Internals.dll  
  - C:\\Windows\\assembly\\GAC_MSIL\\POS.Devices.Opos_Constants\\1.14.0.0__25db91e28cd23c98\\POS.Devices.Opos_Constants.dll  


- 使用 namespace の追加 : 以下の4つを追加する。  
  - using System.Runtime.InteropServices;  
  - using Microsoft.Win32;  
  - using OpenPOS.Devices;  
  - using POS.Devices;  


- SOクラスの作成と属性指定 : 以下の例のようにSOクラスを作成し、属性を追加する。  


      [ComVisible(true)]  
      [Guid("C02EE1B5-2B82-413D-AA35-B9E91AF36D31")]    // ツールメニューのGUIDの作成にて作成したGUIDをコピーする。  
      [ClassInterface(ClassInterfaceType.None)]  
      [ProgId("OPOS.Scanner.OpenPOS.CSScannerSO.1")]           // ProgIdはユニークな値になるように任意で設定。  
      public class CSScannerSO : IOPOSScannerSO, IDisposable  // クラス名(ここでは"CSScannerSO")もユニークな値を任意で設定。  
      {   
          // ...  
          // ... クラスの実装部分は省略  
          // ...  
      }  


- スレッディングモデルの変更。  
  - デフォルトのスレッディングモデルは Both なので、レジストリ登録時に呼び出される関数を追加して Apartment に変更する。  


    [ComRegisterFunction]
    private static void CSCOMRegister(Type registerType)  // 関数名は任意  
    {
        if (registerType != typeof(CSScannerSO)) return;  // 対象が自分のクラスでなければ何もせず終了  

        using (RegistryKey clsidKey = Registry.ClassesRoot.OpenSubKey("CLSID"))
        {
            using (RegistryKey guidKey = clsidKey.OpenSubKey(registerType.GUID.ToString("B"), true))
            {
                using (RegistryKey inproc = guidKey.OpenSubKey("InprocServer32", true))
                {
                    inproc.SetValue("ThreadingModel", "Apartment", RegistryValueKind.String);
                }
            }
        }
    }


-  インタフェースを実装する。  
  - 継承するインタフェース名をポイントして右クリックで「インタフェースの実装」を行ってメソッドシグネチャを自動的に生成する。  
  - 生成された各メソッドの処理を実装する。  

- COのIDispatchポインタを格納して使う。  
  - OpenServiceメソッドの実装で、パラメータとして渡されるCOの IDispatch オブジェクトへのポインタは dynamic 型変数を用意して格納し、イベント通知に使用しましょう。  

- プロパティインデックスの使い方  
  - プロパティインデックスはenum定義なので、そのままでは使えず、intでキャストして使います。


    public int GetPropertyNumber(int propIndex)
    {
        int value = 0;
        switch (propIndex)
        {
            case (int)OPOS_Internals.PIDX_AutoDisable:
                value = _autoDisable ? 1 : 0;
                break;
            case (int)OPOS_Internals.PIDX_BinaryConversion:
                value = _binaryConversion;
                break;
            // ... 途中省略
            case (int)OPOSScannerInternals.PIDXScan_DecodeData:
                value = _decodeData ? 1 : 0;
                break;
            case (int)OPOSScannerInternals.PIDXScan_ScanDataType:
                value = _scanDataType;
                break;
        }
        return value;
    }


## 既知の課題  
判明している課題には、以下のものがあります。

- 可能ならばこのプロジェクトを Common Control Objects/OPOS for .NET Assemblies に組み込んでもらった方が良いですが、それに関連することは何もしていません。  
  また上記プロジェクトへの組み込みが実現した場合は、COM相互運用機能にかかわるDLLの名前や署名が変わりますので、このプロジェクトの成果物を使って作ったSOは修正が必要になります。
- .NET DLL用インストーラは作成していません。
- OPOSのデバイス定義レジストリのキー名称やデバイススタティスティクス項目名の定義文字列をDLLに含める方法が見当たらないのでC#ソースだけ作成しています。  
- OPOSのデバイス定義レジストリは32bit/64bit環境でそれぞれ独立して存在しており、それらを連携させたりまとめて取り扱う方法は見当たりません。  
- C#, VB でSOを開発する際にAnyCPUを指定すると、COMとしてのレジストリ登録先は32bit環境専用とみなされ、64bit環境には登録されません。  
  AnyCPUは使わずに、明確にx86/x64を指定してそれぞれの環境用に両方ともビルドしてください。  
- 時々ビルド/リビルドが失敗します。再実行するか、ビルド/リビルドの種類を変えて実行すると成功します。
- COのIDispatchポインタをdynamic型変数ではなく取り扱う方法を模索中です。  

## ライセンス  
[Apache License, Version 2.0](./LICENSE-2.0.txt) の下でライセンスされています。

最新のCommon Control Objects情報については、[official web site][opos]を確認してください。  

[opos]: http://monroecs.com/oposccos.htm
