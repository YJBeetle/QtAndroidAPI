#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../io/InputStream.hpp"
#include "../../io/FilterInputStream.hpp"
#include "../zip/InflaterInputStream.hpp"
#include "../zip/ZipInputStream.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
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
	class JarInputStream : public __jni_impl::java::util::zip::ZipInputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0);
		void __constructor(__jni_impl::java::io::InputStream arg0, jboolean arg1);
		
		// Methods
		QAndroidJniObject getManifest();
		QAndroidJniObject getNextEntry();
		QAndroidJniObject getNextJarEntry();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::java::util::jar

#include "../../io/InputStream.hpp"
#include "./JarEntry.hpp"
#include "./Manifest.hpp"
#include "../zip/ZipEntry.hpp"

namespace __jni_impl::java::util::jar
{
	// Fields
	
	// Constructors
	void JarInputStream::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void JarInputStream::__constructor(__jni_impl::java::io::InputStream arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarInputStream",
			"(Ljava/io/InputStream;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject JarInputStream::getManifest()
	{
		return __thiz.callObjectMethod(
			"getManifest",
			"()Ljava/util/jar/Manifest;"
		);
	}
	QAndroidJniObject JarInputStream::getNextEntry()
	{
		return __thiz.callObjectMethod(
			"getNextEntry",
			"()Ljava/util/zip/ZipEntry;"
		);
	}
	QAndroidJniObject JarInputStream::getNextJarEntry()
	{
		return __thiz.callObjectMethod(
			"getNextJarEntry",
			"()Ljava/util/jar/JarEntry;"
		);
	}
	jint JarInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::java::util::jar

namespace java::util::jar
{
	class JarInputStream : public __jni_impl::java::util::jar::JarInputStream
	{
	public:
		JarInputStream(QAndroidJniObject obj) { __thiz = obj; }
		JarInputStream(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
		JarInputStream(__jni_impl::java::io::InputStream arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::jar

