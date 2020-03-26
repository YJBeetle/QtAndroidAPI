#pragma once

#ifndef DALVIK_SYSTEM_DEXFILE
#define DALVIK_SYSTEM_DEXFILE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}

namespace __jni_impl::dalvik::system
{
	class DexFile : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::File arg0);
		void __constructor(jstring arg0);
		
		// Methods
		jstring getName();
		jclass loadClass(jstring arg0, __jni_impl::java::lang::ClassLoader arg1);
		jstring toString();
		void close();
		QAndroidJniObject entries();
		static QAndroidJniObject loadDex(jstring arg0, jstring arg1, jint arg2);
		static jboolean isDexOptNeeded(jstring arg0);
	};
} // namespace __jni_impl::dalvik::system

#include "../../java/io/File.hpp"
#include "../../java/lang/ClassLoader.hpp"

namespace __jni_impl::dalvik::system
{
	// Fields
	
	// Constructors
	void DexFile::__constructor(__jni_impl::java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.DexFile",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object());
	}
	void DexFile::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.DexFile",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	jstring DexFile::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jclass DexFile::loadClass(jstring arg0, __jni_impl::java::lang::ClassLoader arg1)
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
	jboolean DexFile::isDexOptNeeded(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"dalvik.system.DexFile",
			"isDexOptNeeded",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
} // namespace __jni_impl::dalvik::system

namespace dalvik::system
{
	class DexFile : public __jni_impl::dalvik::system::DexFile
	{
	public:
		DexFile(QAndroidJniObject obj) { __thiz = obj; }
		DexFile(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
		DexFile(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace dalvik::system

#endif // DALVIK_SYSTEM_DEXFILE

