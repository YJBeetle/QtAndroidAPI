#pragma once

#ifndef JAVA_UTIL_ZIP_INFLATERINPUTSTREAM
#define JAVA_UTIL_ZIP_INFLATERINPUTSTREAM

#include "../../io/FilterInputStream.hpp"

namespace __jni_impl::java::util::zip
{
	class Inflater;
}
namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::java::util::zip
{
	class InflaterInputStream : public __jni_impl::java::io::FilterInputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::java::util::zip::Inflater arg1);
		void __constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::java::util::zip::Inflater arg1, jint arg2);
		void __constructor(__jni_impl::java::io::InputStream arg0);
		
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

#include "Inflater.hpp"
#include "../../io/InputStream.hpp"

namespace __jni_impl::java::util::zip
{
	// Fields
	
	// Constructors
	void InflaterInputStream::__constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::java::util::zip::Inflater arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.InflaterInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Inflater;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void InflaterInputStream::__constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::java::util::zip::Inflater arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.InflaterInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Inflater;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void InflaterInputStream::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.InflaterInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint InflaterInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I");
	}
	jint InflaterInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2);
	}
	void InflaterInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	void InflaterInputStream::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0);
	}
	jlong InflaterInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0);
	}
	jint InflaterInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I");
	}
	jboolean InflaterInputStream::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z");
	}
	void InflaterInputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V");
	}
} // namespace __jni_impl::java::util::zip

namespace java::util::zip
{
	class InflaterInputStream : public __jni_impl::java::util::zip::InflaterInputStream
	{
	public:
		InflaterInputStream(QAndroidJniObject obj) { __thiz = obj; }
		InflaterInputStream(__jni_impl::java::io::InputStream arg0, __jni_impl::java::util::zip::Inflater arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		InflaterInputStream(__jni_impl::java::io::InputStream arg0, __jni_impl::java::util::zip::Inflater arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		InflaterInputStream(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::zip

#endif // JAVA_UTIL_ZIP_INFLATERINPUTSTREAM

