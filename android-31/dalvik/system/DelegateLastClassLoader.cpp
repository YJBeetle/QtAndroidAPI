#include "../../JClass.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../../JString.hpp"
#include "../../java/net/URL.hpp"
#include "./DelegateLastClassLoader.hpp"

namespace dalvik::system
{
	// Fields
	
	// QAndroidJniObject forward
	DelegateLastClassLoader::DelegateLastClassLoader(QAndroidJniObject obj) : dalvik::system::PathClassLoader(obj) {}
	
	// Constructors
	DelegateLastClassLoader::DelegateLastClassLoader(JString arg0, java::lang::ClassLoader arg1)
		: dalvik::system::PathClassLoader(
			"dalvik.system.DelegateLastClassLoader",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	DelegateLastClassLoader::DelegateLastClassLoader(JString arg0, JString arg1, java::lang::ClassLoader arg2)
		: dalvik::system::PathClassLoader(
			"dalvik.system.DelegateLastClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	DelegateLastClassLoader::DelegateLastClassLoader(JString arg0, JString arg1, java::lang::ClassLoader arg2, jboolean arg3)
		: dalvik::system::PathClassLoader(
			"dalvik.system.DelegateLastClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Z)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3
		) {}
	
	// Methods
	java::net::URL DelegateLastClassLoader::getResource(JString arg0)
	{
		return callObjectMethod(
			"getResource",
			"(Ljava/lang/String;)Ljava/net/URL;",
			arg0.object<jstring>()
		);
	}
	JObject DelegateLastClassLoader::getResources(JString arg0)
	{
		return callObjectMethod(
			"getResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0.object<jstring>()
		);
	}
} // namespace dalvik::system

