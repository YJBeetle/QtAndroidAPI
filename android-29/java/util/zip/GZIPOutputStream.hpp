#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../io/OutputStream.hpp"
#include "../../io/FilterOutputStream.hpp"
#include "./DeflaterOutputStream.hpp"

namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::util::zip
{
	class CRC32;
}

namespace __jni_impl::java::util::zip
{
	class GZIPOutputStream : public __jni_impl::java::util::zip::DeflaterOutputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::OutputStream arg0);
		void __constructor(__jni_impl::java::io::OutputStream arg0, jboolean arg1);
		void __constructor(__jni_impl::java::io::OutputStream arg0, jint arg1);
		void __constructor(__jni_impl::java::io::OutputStream arg0, jint arg1, jboolean arg2);
		
		// Methods
		void finish();
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::java::util::zip

#include "../../io/OutputStream.hpp"
#include "./CRC32.hpp"

namespace __jni_impl::java::util::zip
{
	// Fields
	
	// Constructors
	void GZIPOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.GZIPOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void GZIPOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.GZIPOutputStream",
			"(Ljava/io/OutputStream;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void GZIPOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.GZIPOutputStream",
			"(Ljava/io/OutputStream;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void GZIPOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0, jint arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.GZIPOutputStream",
			"(Ljava/io/OutputStream;IZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
	void GZIPOutputStream::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V"
		);
	}
	void GZIPOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::java::util::zip

namespace java::util::zip
{
	class GZIPOutputStream : public __jni_impl::java::util::zip::GZIPOutputStream
	{
	public:
		GZIPOutputStream(QAndroidJniObject obj) { __thiz = obj; }
		GZIPOutputStream(__jni_impl::java::io::OutputStream arg0)
		{
			__constructor(
				arg0);
		}
		GZIPOutputStream(__jni_impl::java::io::OutputStream arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		GZIPOutputStream(__jni_impl::java::io::OutputStream arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		GZIPOutputStream(__jni_impl::java::io::OutputStream arg0, jint arg1, jboolean arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::util::zip

