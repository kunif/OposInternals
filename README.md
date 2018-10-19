# OpenPOS for OLE service object development assistance.  
==================================================  
These are DLLs to aid in the development of service objects (SO) of OpenPOS for OLE (formerly OLE for Retail POS: called OPOS).  
Enlightened by the constant definition DLL (Opos_Constants.dll) of Common Control Objects, I have created information that is missing in SO development.  
It contains the following definitions.  

- IDispatch COM interface definition of OPOS SO of all devices.  
- Enum definition of the index value of the OPOS property used internally by the interface between the control object (CO) and SO.  
- Primary Interop Assembly(PIA) of interface/enum definition matching interface of COM interoperability of .NET framework.  

These are two DLLs of Interfaces and Internals for each environment of 32 bit, 64 bit, and .NET framework.  

## Benefits  
Using these DLLs have the following advantages.  

- Intellisense (guide by Visual Studio IDE) can be used for constants specification at development time.  
- When you develop a new SO, you do not have to write every interface definition every time.  
- It is easy to develop SO with C#, VB.  
- It is easy to develop SO with single source set for 32bit/64bit environment.  

## Required environment  
To develop and use/execute this program, you need:  

- version 15.8.7 or later of Visual Studio 2017 or Visual Studio Community 2017  
- .NET framework 3.5 and 4.0 or later  

The following simultaneous use is strongly recommended.  

- Common Control Objects 1.14.001: http://monroecs.com/oposccos_current.htm  
- The above 64bit supported modified version: https://github.com/kunif/OPOS-CCO  
- OPOS for .NET Assemblies 1.14.001: http://monroecs.com/posfordotnet/opos_dotnet.htm  

Note: Common Control Objects and OPOS for .NET Assemblies are both installed by using the Common Control Objects .msi installer in single operation.  

## Installation  
Please install according to the following procedure.  

- Create an appropriate folder (as below) for the target and copy the files.  
  - File copy source  
    - OPOS 32bit: Opos_Interfaces.dll and Opos_Internals.dll in the Build\\Win32 folder  
    - OPOS 64bit: Opos_Interfaces.dll and Opos_Internals.dll in the Build\\x64 folder  
    - .NET: OpenPOS.Devices.Opos_Interfaces.dll and OpenPOS.Devices.Opos_Internals.dll in the Build\\dotNET folder  
  - OPOS 32bit and .NET files copy destination  
    - For 64bit OS: C:\\Program Files (x86)\\OPOS\\SOCommon folder  
    - 32bit OS: C:\\Program Files\\OPOS\\SOCommon folder  
  - OPOS 64bit files copy destination  
    - 64bit OS: C:\\Program Files\\OPOS\\SOCommon folder  


- Run RegSvr32.exe as an administrator and register the DLL as a registry.  
  - 32bit/64bit Both operating systems: Run C:\\Windows\\System32\\cmd.exe as administrator.  
  - Move to C:\\Program Files\\OPOS\\SOCommon folder.  
  - Run RegSvr32 Opos_Interfaces.dll and RegSvr32 Opos_Internals.dll.  
  - Check both dialogs displayed normally and close cmd.exe.  

  - Additional processing at 64bit OS: Run C:\\Windows\\SysWOW64\\cmd.exe as administrator.  
  - Move to C:\\Program Files (x86)\\OPOS\\SOCommon folder.  
  - Run RegSvr32 Opos_Interfaces.dll and RegSvr32 Opos_Internals.dll.  
  - Check both dialogs displayed normally and close cmd.exe.  


- Run Gacutil.exe as an administrator and register the DLL related to the COM interop function in the global assembly cache.  
  - Assumes Visual Studio or .NET Framework Developer Pack is installed.  
  - Run as a Visual Studio Developer Command Prompt or a regular command prompt as administrator.  
  - Go to the folder where you copied OpenPOS.Devices.Opos_Interfaces.dll / OpenPOS.Devices.Opos_Internals.dll.  
  - Run Gacutil /if OpenPOS.Devices.Opos_Interfaces.dll (specify the full path name if necessary).  
  - (Also specify full path name if necessary) Run Gacutil /if OpenPOS.Devices.Opos_Internals.dll.  
  - Make sure that both are successfully registered and exit the command prompt.  


- Run RegAsm.exe as an administrator and register the DLL related to the COM interoperability function as PIA.  
  - Run as a Visual Studio Developer Command Prompt or a regular command prompt as administrator.  
  - (Specify full path name if necessary) RegAsm  "C:\\Windows\\Microsoft.NET\\assembly\\GAC_MSIL\\OpenPOS.Devices.Opos_Interfaces\\v4.0_1.14.1.0__ad2c9a67c3439201\\OpenPOS.Devices.Opos_ Interterfaces.dll" /register  
    - For 64bit OS: "C:\\Windows\\Microsoft.NET\\Framework64\\v4.0.30319\\RegAsm.exe"  
    - For 32bit OS: "C:\\Windows\\Microsoft.NET\\Framework\\v4.0.30319\\RegAsm.exe"  
  - (also specify the full path name if necessary) RegAsm  "C:\\Windows\\Microsoft.NET\\assembly\\GAC_MSIL\\OpenPOS.Devices.Opos_Interfaces\\v4.0_1.14.1.0__ad2c9a67c3439201\\OpenPOS.Devices.Opos_Internals.dll"  /register  
  - Make sure that both are successfully registered and exit the command prompt.  


## How to Use  
When developing SO with C #, please use as follows.  

- Naming convention of related definitions  
   - IDispatch interface: IOPOSxxxxSO (OPOS device class name to xxxx)  
   - Device common property: OPOS_Internals.PIDX_pppp (property name in pppp)  
   - Device specific property: OPOSxxxxInternals.PIDXyyyy_pppp (OPOS device class name in xxxx, abbreviation for device class name in yyyy, property  name in pppp)  


- Added and changed target platform.  
  - Launch the configuration manager from the menu solution platform.  
  - In creating a new active solution platform, add both x86 and x64.  
  - The subsequent work is done on x86/x64.  


- Activate COM related settings in project properties.  
  - Check that the assemblies can be referred to COM by the assembly information button on the application tab.  
  - Check registration of COM interoperability function in output column of build tab.  


- Copy the source files of the string definition and add it to the project.  
  - Copy the source files that defines the key name of the OPOS device definition registry or the string of the device statistics item name and add it to the project.  
    - OposRegKey.cs and OposStat.cs in the Build folder  


- Add Reference: Add two DLLs registered in the global assembly cache and DLL of OPOS for .NET Assemblies as references.  
  - C:\\Windows\\Microsoft.NET\\assembly\\GAC_MSIL\\OpenPOS.Devices.Opos_Interfaces\\v4.0_1.14.1.0__ad2c9a67c3439201\\OpenPOS.Devices.Opos_Interfaces.dll  
  - C:\\Windows\\Microsoft.NET\\assembly\\GAC_MSIL\\OpenPOS.Devices.Opos_Internals\\v4.0_1.14.1.0__ad2c9a67c3439201\\OpenPOS.Devices.Opos_Internals.dll  
  - C:\\Windows\\assembly\\GAC_MSIL\\POS.Devices.Opos_Constants\\1.14.0.0__25 db91e28 cd23c98\\POS.Devices.Opos_Constants.dll  


- Added namespace : the following four.  
  - using System.Runtime.InteropServices;  
  - using Microsoft.Win32;  
  - using OpenPOS.Devices;  
  - using POS.Devices;  


- Create SO class and designate attributes: Create SO class and add attributes as in the following example.  


    [ComVisible(true)]  
    [Guid("C02EE1B5-2B82-413D-AA35-B9E91AF36D31")]    // Copy the GUID created by creating the GUID in the tool menu.  
    [ClassInterface(ClassInterfaceType.None)]  
    [ProgId("OPOS.Scanner.OpenPOS.CSScannerSO.1")]           // ProgId is arbitrarily set to be a unique value.  
    public class CSScannerSO : IOPOSScannerSO, IDisposable  // The class name ("CSScannerSO" here) also sets a unique value arbitrarily.  
    {  
        // ...  
        // ... The implementation part of the class is omitted.  
        // ...  
    }  


- Change of Threading Model.  
   - Since the default threading model is Both, change the function to Apartment by adding a function to be called when registering registry.  


    [ComRegisterFunction]  
    private static void CSCOMRegister(Type registerType)  // Function name is arbitrary.  
    {  
        if (registerType != typeof(CSScannerSO)) return;  // If the target is not in this class, exit without doing anything.  

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


- Implement the interface.  
   - Point to the interface name to be inherited, right click to implement "Implement Interface" and automatically generate method signature.  
   - Implement the processing of each generated method.  


- Store and use the IDispatch pointer of the CO.  
   - In the implementation of the OpenService method, save a pointer to the CO's IDispatch object passed as a parameter by preparing a dynamic type variable and use it for event notification.  


- How to use property index  
   - Since the property index is an enum definition, it can not be used as it is, cast it as an int and use it.  


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
            // ... Abbreviate
            case (int)OPOSScannerInternals.PIDXScan_DecodeData:
                value = _decodeData ? 1 : 0;
                break;
            case (int)OPOSScannerInternals.PIDXScan_ScanDataType:
                value = _scanDataType;
                break;
        }
        return value;
    }


## Known Issues  
The following issues are known.  

- It is better to have this project built into the Common Control Objects/OPOS for .NET Assemblies if possible, but I do not do anything related to  it.  
  Also, if the incorporation into the above projects are realized, the name and signature of the DLLs related to the COM interop function will change,  so SO made using the deliverables of this project needs to be modified.  
- Do not create installers for .NET DLL.  
- Since there is no way to include the definition name of OPOS device definition registry key name or device statistics item name in the DLL, only C# source is created.  
- OPOS device definition registry exists independently in 32bit/64bit environment, and there is no way to cooperate with them or handle them  collectively.  
- If you specify AnyCPU when developing SO with C#/VB, the Registry registry as COM will be deemed exclusively for 32bit environment and will not be registered in 64bit environment.  
  Please do not use AnyCPU, clearly specify x86/x64 and build both for each environment.  
- Sometimes Build / Rebuild fails. It will succeed if you reexecute it or execute it with a different build / rebuild type.  
- Looking for a way to handle the IDispatch pointer of CO not a dynamic type variable.  

## License
Licensed under the [Apache License, Version 2.0](./LICENSE-2.0.txt).  


Check the [official web site][opos] for the latest Common Control Object information.

[opos]: http://monroecs.com/oposccos.htm  
