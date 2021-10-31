#include "../../java/lang/ClassLoader.hpp"
#include "../../java/net/URL.hpp"
#include "./DelegateLastClassLoader.hpp"

namespace dalvik::system
{
	// Fields
	
	DelegateLastClassLoader::DelegateLastClassLoader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DelegateLastClassLoader::DelegateLastClassLoader(jstring arg0, java::lang::ClassLoader arg1)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.DelegateLastClassLoader",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	DelegateLastClassLoader::DelegateLastClassLoader(jstring arg0, jstring arg1, java::lang::ClassLoader arg2)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.DelegateLastClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	DelegateLastClassLoader::DelegateLastClassLoader(jstring arg0, jstring arg1, java::lang::ClassLoader arg2, jboolean arg3)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.DelegateLastClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Z)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	
	// Methods
	QAndroidJniObject DelegateLastClassLoader::getResource(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getResource",
			"(Ljava/lang/String;)Ljava/net/URL;",
			arg0
		);
	}
	QAndroidJniObject DelegateLastClassLoader::getResources(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0
		);
	}
} // namespace dalvik::system

