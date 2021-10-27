#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../io/InputStream.hpp"
#include "../../io/FilterInputStream.hpp"
#include "InflaterInputStream.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::nio::charset
{
	class Charset;
}
namespace __jni_impl::java::util::zip
{
	class CRC32;
}
namespace __jni_impl::java::util::zip
{
	class ZipEntry;
}

namespace __jni_impl::java::util::zip
{
	class ZipInputStream : public __jni_impl::java::util::zip::InflaterInputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0);
		void __constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::java::nio::charset::Charset arg1);
		
		// Methods
		jint available();
		void close();
		void closeEntry();
		QAndroidJniObject getNextEntry();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jlong skip(jlong arg0);
	};
} // namespace __jni_impl::java::util::zip

#include "../../io/InputStream.hpp"
#include "../../nio/charset/Charset.hpp"
#include "CRC32.hpp"
#include "ZipEntry.hpp"

namespace __jni_impl::java::util::zip
{
	// Fields
	
	// Constructors
	void ZipInputStream::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void ZipInputStream::__constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipInputStream",
			"(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint ZipInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	void ZipInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void ZipInputStream::closeEntry()
	{
		__thiz.callMethod<void>(
			"closeEntry",
			"()V"
		);
	}
	QAndroidJniObject ZipInputStream::getNextEntry()
	{
		return __thiz.callObjectMethod(
			"getNextEntry",
			"()Ljava/util/zip/ZipEntry;"
		);
	}
	jint ZipInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jlong ZipInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace __jni_impl::java::util::zip

namespace java::util::zip
{
	class ZipInputStream : public __jni_impl::java::util::zip::ZipInputStream
	{
	public:
		ZipInputStream(QAndroidJniObject obj) { __thiz = obj; }
		ZipInputStream(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
		ZipInputStream(__jni_impl::java::io::InputStream arg0, __jni_impl::java::nio::charset::Charset arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::zip

