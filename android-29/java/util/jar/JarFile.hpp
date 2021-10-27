#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../zip/ZipFile.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::lang
{
	class ThreadLocal;
}
namespace __jni_impl::java::lang::ref
{
	class SoftReference;
}
namespace __jni_impl::java::net
{
	class URL;
}
namespace __jni_impl::java::security
{
	class CodeSource;
}
namespace __jni_impl::java::util::jar
{
	class JarEntry;
}
namespace __jni_impl::java::util::jar
{
	class Manifest;
}
namespace __jni_impl::java::util::zip
{
	class ZipEntry;
}

namespace __jni_impl::java::util::jar
{
	class JarFile : public __jni_impl::java::util::zip::ZipFile
	{
	public:
		// Fields
		static jstring MANIFEST_NAME();
		
		// Constructors
		void __constructor(__jni_impl::java::io::File arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(__jni_impl::java::io::File arg0, jboolean arg1);
		void __constructor(jstring arg0, jboolean arg1);
		void __constructor(const QString &arg0, jboolean arg1);
		void __constructor(__jni_impl::java::io::File arg0, jboolean arg1, jint arg2);
		void __constructor(__jni_impl::java::io::File arg0, jboolean arg1, jint arg2, __jni_impl::__JniBaseClass arg3);
		
		// Methods
		static QAndroidJniObject baseVersion();
		static QAndroidJniObject runtimeVersion();
		QAndroidJniObject entries();
		QAndroidJniObject getEntry(jstring arg0);
		QAndroidJniObject getEntry(const QString &arg0);
		QAndroidJniObject getInputStream(__jni_impl::java::util::zip::ZipEntry arg0);
		QAndroidJniObject getJarEntry(jstring arg0);
		QAndroidJniObject getJarEntry(const QString &arg0);
		QAndroidJniObject getManifest();
		QAndroidJniObject getVersion();
		jboolean isMultiRelease();
		QAndroidJniObject stream();
		QAndroidJniObject versionedStream();
	};
} // namespace __jni_impl::java::util::jar

#include "../../io/File.hpp"
#include "../../io/InputStream.hpp"
#include "../../lang/ThreadLocal.hpp"
#include "../../lang/ref/SoftReference.hpp"
#include "../../net/URL.hpp"
#include "../../security/CodeSource.hpp"
#include "./JarEntry.hpp"
#include "./Manifest.hpp"
#include "../zip/ZipEntry.hpp"

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
	void JarFile::__constructor(__jni_impl::java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarFile",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	void JarFile::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarFile",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void JarFile::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarFile",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void JarFile::__constructor(__jni_impl::java::io::File arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarFile",
			"(Ljava/io/File;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void JarFile::__constructor(jstring arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarFile",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void JarFile::__constructor(const QString &arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarFile",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void JarFile::__constructor(__jni_impl::java::io::File arg0, jboolean arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarFile",
			"(Ljava/io/File;ZI)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void JarFile::__constructor(__jni_impl::java::io::File arg0, jboolean arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarFile",
			"(Ljava/io/File;ZILjava/lang/Runtime$Version;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject JarFile::baseVersion()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.jar.JarFile",
			"baseVersion",
			"()Ljava/lang/Runtime$Version;"
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
	QAndroidJniObject JarFile::entries()
	{
		return __thiz.callObjectMethod(
			"entries",
			"()Ljava/util/Enumeration;"
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
	QAndroidJniObject JarFile::getEntry(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;)Ljava/util/zip/ZipEntry;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject JarFile::getJarEntry(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getJarEntry",
			"(Ljava/lang/String;)Ljava/util/jar/JarEntry;",
			arg0
		);
	}
	QAndroidJniObject JarFile::getJarEntry(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getJarEntry",
			"(Ljava/lang/String;)Ljava/util/jar/JarEntry;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject JarFile::getManifest()
	{
		return __thiz.callObjectMethod(
			"getManifest",
			"()Ljava/util/jar/Manifest;"
		);
	}
	QAndroidJniObject JarFile::getVersion()
	{
		return __thiz.callObjectMethod(
			"getVersion",
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
	QAndroidJniObject JarFile::stream()
	{
		return __thiz.callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
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
		JarFile(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
		JarFile(jstring arg0)
		{
			__constructor(
				arg0);
		}
		JarFile(__jni_impl::java::io::File arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		JarFile(jstring arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		JarFile(__jni_impl::java::io::File arg0, jboolean arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		JarFile(__jni_impl::java::io::File arg0, jboolean arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::util::jar

