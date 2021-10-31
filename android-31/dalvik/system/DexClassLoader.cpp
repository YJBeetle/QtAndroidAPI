#include "../../java/lang/ClassLoader.hpp"
#include "./DexClassLoader.hpp"

namespace dalvik::system
{
	// Fields
	
	// QJniObject forward
	DexClassLoader::DexClassLoader(QJniObject obj) : dalvik::system::BaseDexClassLoader(obj) {}
	
	// Constructors
	DexClassLoader::DexClassLoader(jstring arg0, jstring arg1, jstring arg2, java::lang::ClassLoader arg3)
		: dalvik::system::BaseDexClassLoader(
			"dalvik.system.DexClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		) {}
	
	// Methods
} // namespace dalvik::system

