#include "../../java/lang/ClassLoader.hpp"
#include "./PathClassLoader.hpp"

namespace dalvik::system
{
	// Fields
	
	PathClassLoader::PathClassLoader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PathClassLoader::PathClassLoader(jstring arg0, java::lang::ClassLoader arg1)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.PathClassLoader",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	PathClassLoader::PathClassLoader(jstring arg0, jstring arg1, java::lang::ClassLoader arg2)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.PathClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	
	// Methods
} // namespace dalvik::system

