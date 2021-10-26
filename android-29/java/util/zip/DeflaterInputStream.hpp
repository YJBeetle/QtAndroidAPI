#pragma once

#ifndef JAVA_UTIL_ZIP_DEFLATERINPUTSTREAM
#define JAVA_UTIL_ZIP_DEFLATERINPUTSTREAM

#include "../../../__JniBaseClass.hpp"
#include "../../io/InputStream.hpp"
#include "../../io/FilterInputStream.hpp"

namespace __jni_impl::java::util::zip
{
	class Deflater;
}
namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::java::util::zip
{
	class DeflaterInputStream : public __jni_impl::java::io::FilterInputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::java::util::zip::Deflater arg1, jint arg2);
		void __constructor(__jni_impl::java::io::InputStream arg0);
		void __constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::java::util::zip::Deflater arg1);
		
		// Methods
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		void close();
		void mark(jint arg0);
		jlong skip(jlong arg0);
		jint available();
		jboolean markSupported();
		void reset();
	};
} // namespace __jni_impl::java::util::zip

#include "Deflater.hpp"
#include "../../io/InputStream.hpp"

namespace __jni_impl::java::util::zip
{
	// Fields
	
	// Constructors
	void DeflaterInputStream::__constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::java::util::zip::Deflater arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DeflaterInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Deflater;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void DeflaterInputStream::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DeflaterInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void DeflaterInputStream::__constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::java::util::zip::Deflater arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DeflaterInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Deflater;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint DeflaterInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint DeflaterInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void DeflaterInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void DeflaterInputStream::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jlong DeflaterInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	jint DeflaterInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	jboolean DeflaterInputStream::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	void DeflaterInputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
} // namespace __jni_impl::java::util::zip

namespace java::util::zip
{
	class DeflaterInputStream : public __jni_impl::java::util::zip::DeflaterInputStream
	{
	public:
		DeflaterInputStream(QAndroidJniObject obj) { __thiz = obj; }
		DeflaterInputStream(__jni_impl::java::io::InputStream arg0, __jni_impl::java::util::zip::Deflater arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		DeflaterInputStream(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
		DeflaterInputStream(__jni_impl::java::io::InputStream arg0, __jni_impl::java::util::zip::Deflater arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::zip

#endif // JAVA_UTIL_ZIP_DEFLATERINPUTSTREAM

