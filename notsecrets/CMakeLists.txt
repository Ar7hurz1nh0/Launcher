add_library(secrets STATIC Secrets.cpp Secrets.h)
target_link_libraries(secrets Qt5::Core)
target_compile_definitions(secrets PUBLIC -DEMBED_SECRETS)
target_include_directories(secrets PUBLIC .)

set(Launcher_CommonName "UltimMC")

set(Launcher_Copyright "UltimMC Contributors" PARENT_SCOPE)
set(Launcher_Domain "multimc.org" PARENT_SCOPE)
set(Launcher_Name "${Launcher_CommonName}" PARENT_SCOPE)
set(Launcher_DisplayName "${Launcher_CommonName} 5" PARENT_SCOPE)
set(Launcher_UserAgent "MultiMC/5.0" PARENT_SCOPE)
set(Launcher_ConfigFile "ultimmc.cfg" PARENT_SCOPE)
set(Launcher_Git "https://github.com/UltimMC/Launcher" PARENT_SCOPE)

set(Launcher_Branding_ICNS "notsecrets/Launcher.icns" PARENT_SCOPE)
set(Launcher_Branding_WindowsRC "notsecrets/launcher.rc" PARENT_SCOPE)
set(Launcher_Branding_LogoQRC "notsecrets/logo.qrc" PARENT_SCOPE)
