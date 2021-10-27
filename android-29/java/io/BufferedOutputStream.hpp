#pragma once

#include "../../__JniBaseClass.hpp"
#include "OutputStream.hpp"
#include "FilterOutputStream.hpp"

namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::java::io
{
	class BufferedOutputStream : public __jni_impl::java::io::FilterOutputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::OutputStream arg0);
		void __constructor(__jni_impl::java::io::OutputStream arg0, jint arg1);
		
		// Methods
		void flush();
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::java::io

#include "OutputStream.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void BufferedOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.BufferedOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void BufferedOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.BufferedOutputStream",
			"(Ljava/io/OutputStream;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void BufferedOutputStream::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	void BufferedOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void BufferedOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class BufferedOutputStream : public __jni_impl::java::io::BufferedOutputStream
	{
	public:
		BufferedOutputStream(QAndroidJniObject obj) { __thiz = obj; }
		BufferedOutputStream(__jni_impl::java::io::OutputStream arg0)
		{
			__constructor(
				arg0);
		}
		BufferedOutputStream(__jni_impl::java::io::OutputStream arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::io

