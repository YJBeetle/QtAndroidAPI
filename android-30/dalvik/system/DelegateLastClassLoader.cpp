#include "../../java/lang/ClassLoader.hpp"
#include "../../java/net/URL.hpp"
#include "./DelegateLastClassLoader.hpp"

namespace dalvik::system
{
	// Fields
	
	// QAndroidJniObject forward
	DelegateLastClassLoader::DelegateLastClassLoader(QAndroidJniObject obj) : dalvik::system::PathClassLoader(obj) {}
	
	// Constructors
	DelegateLastClassLoader::DelegateLastClassLoader(jstring arg0, java::lang::ClassLoader arg1)
		: dalvik::system::PathClassLoader(
			"dalvik.system.DelegateLastClassLoader",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1.object()
		) {}
	DelegateLastClassLoader::DelegateLastClassLoader(jstring arg0, jstring arg1, java::lang::ClassLoader arg2)
		: dalvik::system::PathClassLoader(
			"dalvik.system.DelegateLastClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	DelegateLastClassLoader::DelegateLastClassLoader(jstring arg0, jstring arg1, java::lang::ClassLoader arg2, jboolean arg3)
		: dalvik::system::PathClassLoader(
			"dalvik.system.DelegateLastClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Z)V",
			arg0,
			arg1,
			arg2.object(),
			arg3
		) {}
	
	// Methods
	java::net::URL DelegateLastClassLoader::getResource(jstring arg0)
	{
		return callObjectMethod(
			"getResource",
			"(Ljava/lang/String;)Ljava/net/URL;",
			arg0
		);
	}
	JObject DelegateLastClassLoader::getResources(jstring arg0)
	{
		return callObjectMethod(
			"getResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0
		);
	}
} // namespace dalvik::system

