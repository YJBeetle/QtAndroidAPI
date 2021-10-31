#include "../../java/lang/ClassLoader.hpp"
#include "./PathClassLoader.hpp"

namespace dalvik::system
{
	// Fields
	
	// QAndroidJniObject forward
	PathClassLoader::PathClassLoader(QAndroidJniObject obj) : dalvik::system::BaseDexClassLoader(obj) {}
	
	// Constructors
	PathClassLoader::PathClassLoader(jstring arg0, java::lang::ClassLoader arg1)
		: dalvik::system::BaseDexClassLoader(
			"dalvik.system.PathClassLoader",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1.object()
		) {}
	PathClassLoader::PathClassLoader(jstring arg0, jstring arg1, java::lang::ClassLoader arg2)
		: dalvik::system::BaseDexClassLoader(
			"dalvik.system.PathClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
} // namespace dalvik::system

