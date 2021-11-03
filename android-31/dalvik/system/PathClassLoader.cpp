#include "../../java/lang/ClassLoader.hpp"
#include "../../JString.hpp"
#include "./PathClassLoader.hpp"

namespace dalvik::system
{
	// Fields
	
	// QJniObject forward
	PathClassLoader::PathClassLoader(QJniObject obj) : dalvik::system::BaseDexClassLoader(obj) {}
	
	// Constructors
	PathClassLoader::PathClassLoader(JString arg0, java::lang::ClassLoader arg1)
		: dalvik::system::BaseDexClassLoader(
			"dalvik.system.PathClassLoader",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	PathClassLoader::PathClassLoader(JString arg0, JString arg1, java::lang::ClassLoader arg2)
		: dalvik::system::BaseDexClassLoader(
			"dalvik.system.PathClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
} // namespace dalvik::system

