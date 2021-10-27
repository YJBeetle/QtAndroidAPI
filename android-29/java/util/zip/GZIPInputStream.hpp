#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../io/InputStream.hpp"
#include "../../io/FilterInputStream.hpp"
#include "./InflaterInputStream.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::util::zip
{
	class CRC32;
}

namespace __jni_impl::java::util::zip
{
	class GZIPInputStream : public __jni_impl::java::util::zip::InflaterInputStream
	{
	public:
		// Fields
		static jint GZIP_MAGIC();
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0);
		void __constructor(__jni_impl::java::io::InputStream arg0, jint arg1);
		
		// Methods
		void close();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::java::util::zip

#include "../../io/InputStream.hpp"
#include "./CRC32.hpp"

namespace __jni_impl::java::util::zip
{
	// Fields
	jint GZIPInputStream::GZIP_MAGIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.GZIPInputStream",
			"GZIP_MAGIC"
		);
	}
	
	// Constructors
	void GZIPInputStream::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.GZIPInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void GZIPInputStream::__constructor(__jni_impl::java::io::InputStream arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.GZIPInputStream",
			"(Ljava/io/InputStream;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void GZIPInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint GZIPInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::java::util::zip

namespace java::util::zip
{
	class GZIPInputStream : public __jni_impl::java::util::zip::GZIPInputStream
	{
	public:
		GZIPInputStream(QAndroidJniObject obj) { __thiz = obj; }
		GZIPInputStream(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
		GZIPInputStream(__jni_impl::java::io::InputStream arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::zip

