#include "../../java/io/File.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../../java/lang/Package.hpp"
#include "../../java/net/URL.hpp"
#include "./BaseDexClassLoader.hpp"

namespace dalvik::system
{
	// Fields
	
	BaseDexClassLoader::BaseDexClassLoader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BaseDexClassLoader::BaseDexClassLoader(jstring arg0, java::io::File arg1, jstring arg2, java::lang::ClassLoader arg3)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.BaseDexClassLoader",
			"(Ljava/lang/String;Ljava/io/File;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	jstring BaseDexClassLoader::findLibrary(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findLibrary",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring BaseDexClassLoader::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace dalvik::system

