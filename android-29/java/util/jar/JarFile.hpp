#pragma once

#ifndef JAVA_UTIL_JAR_JARFILE
#define JAVA_UTIL_JAR_JARFILE

#include "../../../__JniBaseClass.hpp"
#include "../zip/ZipFile.hpp"

namespace __jni_impl::java::lang::ref
{
	class SoftReference;
}
namespace __jni_impl::java::util::jar
{
	class JarEntry;
}
namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::util::zip
{
	class ZipEntry;
}
namespace __jni_impl::java::security
{
	class CodeSource;
}
namespace __jni_impl::java::net
{
	class URL;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::util::jar
{
	class Manifest;
}

namespace __jni_impl::java::util::jar
{
	class JarFile : public __jni_impl::java::util::zip::ZipFile
	{
	public:
		// Fields
		static jstring MANIFEST_NAME();
		
		// Constructors
		void __constructor(__jni_impl::java::io::File arg0, jboolean arg1, jint arg2);
		void __constructor(__jni_impl::java::io::File arg0);
		void __constructor(jstring arg0, jboolean arg1);
		void __constructor(jstring arg0);
		void __constructor(__jni_impl::java::io::File arg0, jboolean arg1, jint arg2, __jni_impl::__JniBaseClass arg3);
		void __constructor(__jni_impl::java::io::File arg0, jboolean arg1);
		
		// Methods
		QAndroidJniObject stream();
		QAndroidJniObject entries();
		QAndroidJniObject getInputStream(__jni_impl::java::util::zip::ZipEntry arg0);
		QAndroidJniObject getManifest();
		QAndroidJniObject getEntry(jstring arg0);
		static QAndroidJniObject runtimeVersion();
		jboolean isMultiRelease();
		QAndroidJniObject getJarEntry(jstring arg0);
		static QAndroidJniObject baseVersion();
		QAndroidJniObject getVersion();
		QAndroidJniObject versionedStream();
	};
} // namespace __jni_impl::java::util::jar

#include "../../lang/ref/SoftReference.hpp"
#include "JarEntry.hpp"
#include "../../io/File.hpp"
#include "../zip/ZipEntry.hpp"
#include "../../security/CodeSource.hpp"
#include "../../net/URL.hpp"
#include "../../io/InputStream.hpp"
#include "Manifest.hpp"

namespace __jni_impl::java::util::jar
{
	// Fields
	jstring JarFile::MANIFEST_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.JarFile",
			"MANIFEST_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void JarFile::__constructor(__jni_impl::java::io::File arg0, jboolean arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarFile",
			"(Ljava/io/File;ZI)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void JarFile::__constructor(__jni_impl::java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarFile",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object());
	}
	void JarFile::__constructor(jstring arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarFile",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1);
	}
	void JarFile::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarFile",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void JarFile::__constructor(__jni_impl::java::io::File arg0, jboolean arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarFile",
			"(Ljava/io/File;ZILjava/lang/Runtime$Version;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void JarFile::__constructor(__jni_impl::java::io::File arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarFile",
			"(Ljava/io/File;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	QAndroidJniObject JarFile::stream()
	{
		return __thiz.callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
		);
	}
	QAndroidJniObject JarFile::entries()
	{
		return __thiz.callObjectMethod(
			"entries",
			"()Ljava/util/Enumeration;"
		);
	}
	QAndroidJniObject JarFile::getInputStream(__jni_impl::java::util::zip::ZipEntry arg0)
	{
		return __thiz.callObjectMethod(
			"getInputStream",
			"(Ljava/util/zip/ZipEntry;)Ljava/io/InputStream;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject JarFile::getManifest()
	{
		return __thiz.callObjectMethod(
			"getManifest",
			"()Ljava/util/jar/Manifest;"
		);
	}
	QAndroidJniObject JarFile::getEntry(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;)Ljava/util/zip/ZipEntry;",
			arg0
		);
	}
	QAndroidJniObject JarFile::runtimeVersion()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.jar.JarFile",
			"runtimeVersion",
			"()Ljava/lang/Runtime$Version;"
		);
	}
	jboolean JarFile::isMultiRelease()
	{
		return __thiz.callMethod<jboolean>(
			"isMultiRelease",
			"()Z"
		);
	}
	QAndroidJniObject JarFile::getJarEntry(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getJarEntry",
			"(Ljava/lang/String;)Ljava/util/jar/JarEntry;",
			arg0
		);
	}
	QAndroidJniObject JarFile::baseVersion()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.jar.JarFile",
			"baseVersion",
			"()Ljava/lang/Runtime$Version;"
		);
	}
	QAndroidJniObject JarFile::getVersion()
	{
		return __thiz.callObjectMethod(
			"getVersion",
			"()Ljava/lang/Runtime$Version;"
		);
	}
	QAndroidJniObject JarFile::versionedStream()
	{
		return __thiz.callObjectMethod(
			"versionedStream",
			"()Ljava/util/stream/Stream;"
		);
	}
} // namespace __jni_impl::java::util::jar

namespace java::util::jar
{
	class JarFile : public __jni_impl::java::util::jar::JarFile
	{
	public:
		JarFile(QAndroidJniObject obj) { __thiz = obj; }
		JarFile(__jni_impl::java::io::File arg0, jboolean arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		JarFile(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
		JarFile(jstring arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		JarFile(jstring arg0)
		{
			__constructor(
				arg0);
		}
		JarFile(__jni_impl::java::io::File arg0, jboolean arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		JarFile(__jni_impl::java::io::File arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::jar

#endif // JAVA_UTIL_JAR_JARFILE

