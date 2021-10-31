#include "../../java/io/File.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "./DexFile.hpp"

namespace dalvik::system
{
	// Fields
	
	DexFile::DexFile(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DexFile::DexFile(java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.DexFile",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	DexFile::DexFile(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.DexFile",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	jboolean DexFile::isDexOptNeeded(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"dalvik.system.DexFile",
			"isDexOptNeeded",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	QAndroidJniObject DexFile::loadDex(jstring arg0, jstring arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"dalvik.system.DexFile",
			"loadDex",
			"(Ljava/lang/String;Ljava/lang/String;I)Ldalvik/system/DexFile;",
			arg0,
			arg1,
			arg2
		);
	}
	void DexFile::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject DexFile::entries()
	{
		return __thiz.callObjectMethod(
			"entries",
			"()Ljava/util/Enumeration;"
		);
	}
	jstring DexFile::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jclass DexFile::loadClass(jstring arg0, java::lang::ClassLoader arg1)
	{
		return __thiz.callObjectMethod(
			"loadClass",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class;",
			arg0,
			arg1.__jniObject().object()
		).object<jclass>();
	}
	jstring DexFile::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace dalvik::system

