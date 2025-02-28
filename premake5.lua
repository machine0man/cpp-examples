workspace "cpp-examples"  

configurations { "Debug", "Release" } 

local projects = 
    { 	
		"Bind" ,
      	"Callbacks" , 
      	"cpp-examples",
		"EventAndDelegates",
		"Function-Pointers",
		"Interfaces",
		"Lambdas",
		"Object Slicing",
		"Override",
		"string-view",
		"Virtual"
	}

function CreateProject(name, sources)
    project(name) 
        kind "ConsoleApp"   
        language "C++"   
        cppdialect "C++17"

        location(name)
        targetdir "%{prj.name}/bin/%{cfg.buildcfg}" 
        files(sources)

        filter "configurations:Debug"
        defines { "DEBUG" }  
        symbols "On" 

        filter "configurations:Release"  
            defines { "NDEBUG" }    
            optimize "On" 
end

for _, projectName in ipairs(projects) do
	CreateProject(projectName , {"source/" .. projectName .. ".cpp" })
end


CreateProject("scope", { "source/scope/Core.h" , "source/scope/file1.cpp","source/scope/main.cpp" })

