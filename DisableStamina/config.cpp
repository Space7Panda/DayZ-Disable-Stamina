class CfgPatches
{
    class DisableStamina
    {
        requiredAddons[] =
            {
                "DZ_Data",
        };
    };
};

class CfgMods
{
    class DisableStamina
    {
        type = "mod";
        name = "Disable Stamina";
        author = "Space7Panda";
        version = "1.5";

        class defs
        {
            class worldScriptModule
            {
                value = "";
                files[] = {"DisableStamina/4_World"};
            };
        };
    };
};
