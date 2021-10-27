#include "../../java/lang/ClassLoader.hpp"
#include "./DexClassLoader.hpp"

namespace dalvik::system
{
	// Fields
	
	DexClassLoader::DexClassLoader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DexClassLoader::DexClassLoader(jstring &arg0, jstring &arg1, jstring &arg2, java::lang::ClassLoader &arg3)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.DexClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	DexClassLoader::DexClassLoader(const QString &arg0, const QString &arg1, const QString &arg2, java::lang::ClassLoader &arg3)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.DexClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
} // namespace dalvik::system

