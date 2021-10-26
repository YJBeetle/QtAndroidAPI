#pragma once

#ifndef JAVA_UTIL_ZIP_DEFLATEROUTPUTSTREAM
#define JAVA_UTIL_ZIP_DEFLATEROUTPUTSTREAM

#include "../../../__JniBaseClass.hpp"
#include "../../io/OutputStream.hpp"
#include "../../io/FilterOutputStream.hpp"

namespace __jni_impl::java::util::zip
{
	class Deflater;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::java::util::zip
{
	class DeflaterOutputStream : public __jni_impl::java::io::FilterOutputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::OutputStream arg0);
		void __constructor(__jni_impl::java::io::OutputStream arg0, jboolean arg1);
		void __constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::zip::Deflater arg1);
		void __constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::zip::Deflater arg1, jint arg2, jboolean arg3);
		void __constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::zip::Deflater arg1, jint arg2);
		void __constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::zip::Deflater arg1, jboolean arg2);
		
		// Methods
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void write(jint arg0);
		void flush();
		void close();
		void finish();
	};
} // namespace __jni_impl::java::util::zip

#include "Deflater.hpp"
#include "../../io/OutputStream.hpp"

namespace __jni_impl::java::util::zip
{
	// Fields
	
	// Constructors
	void DeflaterOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void DeflaterOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DeflaterOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::zip::Deflater arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Deflater;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DeflaterOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::zip::Deflater arg1, jint arg2, jboolean arg3)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Deflater;IZ)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void DeflaterOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::zip::Deflater arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Deflater;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void DeflaterOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::zip::Deflater arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Deflater;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
	void DeflaterOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DeflaterOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void DeflaterOutputStream::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	void DeflaterOutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void DeflaterOutputStream::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V"
		);
	}
} // namespace __jni_impl::java::util::zip

namespace java::util::zip
{
	class DeflaterOutputStream : public __jni_impl::java::util::zip::DeflaterOutputStream
	{
	public:
		DeflaterOutputStream(QAndroidJniObject obj) { __thiz = obj; }
		DeflaterOutputStream(__jni_impl::java::io::OutputStream arg0)
		{
			__constructor(
				arg0);
		}
		DeflaterOutputStream(__jni_impl::java::io::OutputStream arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DeflaterOutputStream(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::zip::Deflater arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DeflaterOutputStream(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::zip::Deflater arg1, jint arg2, jboolean arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		DeflaterOutputStream(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::zip::Deflater arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		DeflaterOutputStream(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::zip::Deflater arg1, jboolean arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::util::zip

#endif // JAVA_UTIL_ZIP_DEFLATEROUTPUTSTREAM

