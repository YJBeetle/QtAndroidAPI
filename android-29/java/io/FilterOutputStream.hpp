#pragma once

#ifndef JAVA_IO_FILTEROUTPUTSTREAM
#define JAVA_IO_FILTEROUTPUTSTREAM

#include "OutputStream.hpp"

namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::java::io
{
	class FilterOutputStream : public __jni_impl::java::io::OutputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::OutputStream arg0);
		
		// Methods
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void write(jbyteArray arg0);
		void write(jint arg0);
		void flush();
		void close();
	};
} // namespace __jni_impl::java::io

#include "OutputStream.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void FilterOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FilterOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void FilterOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2);
	}
	void FilterOutputStream::write(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"([B)V",
			arg0);
	}
	void FilterOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0);
	}
	void FilterOutputStream::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V");
	}
	void FilterOutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class FilterOutputStream : public __jni_impl::java::io::FilterOutputStream
	{
	public:
		FilterOutputStream(QAndroidJniObject obj) { __thiz = obj; }
		FilterOutputStream(__jni_impl::java::io::OutputStream arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_FILTEROUTPUTSTREAM

