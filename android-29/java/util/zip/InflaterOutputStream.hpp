#pragma once

#ifndef JAVA_UTIL_ZIP_INFLATEROUTPUTSTREAM
#define JAVA_UTIL_ZIP_INFLATEROUTPUTSTREAM

#include "../../../__JniBaseClass.hpp"
#include "../../io/OutputStream.hpp"
#include "../../io/FilterOutputStream.hpp"

namespace __jni_impl::java::util::zip
{
	class Inflater;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::java::util::zip
{
	class InflaterOutputStream : public __jni_impl::java::io::FilterOutputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::zip::Inflater arg1);
		void __constructor(__jni_impl::java::io::OutputStream arg0);
		void __constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::zip::Inflater arg1, jint arg2);
		
		// Methods
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void flush();
		void close();
		void finish();
	};
} // namespace __jni_impl::java::util::zip

#include "Inflater.hpp"
#include "../../io/OutputStream.hpp"

namespace __jni_impl::java::util::zip
{
	// Fields
	
	// Constructors
	void InflaterOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::zip::Inflater arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.InflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Inflater;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void InflaterOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.InflaterOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object());
	}
	void InflaterOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::zip::Inflater arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.InflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Inflater;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	
	// Methods
	void InflaterOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0);
	}
	void InflaterOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2);
	}
	void InflaterOutputStream::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V");
	}
	void InflaterOutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	void InflaterOutputStream::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V");
	}
} // namespace __jni_impl::java::util::zip

namespace java::util::zip
{
	class InflaterOutputStream : public __jni_impl::java::util::zip::InflaterOutputStream
	{
	public:
		InflaterOutputStream(QAndroidJniObject obj) { __thiz = obj; }
		InflaterOutputStream(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::zip::Inflater arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		InflaterOutputStream(__jni_impl::java::io::OutputStream arg0)
		{
			__constructor(
				arg0);
		}
		InflaterOutputStream(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::zip::Inflater arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::util::zip

#endif // JAVA_UTIL_ZIP_INFLATEROUTPUTSTREAM

