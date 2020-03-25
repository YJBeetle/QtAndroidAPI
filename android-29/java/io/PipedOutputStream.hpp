#pragma once

#ifndef JAVA_IO_PIPEDOUTPUTSTREAM
#define JAVA_IO_PIPEDOUTPUTSTREAM

#include "../../__JniBaseClass.hpp"
#include "OutputStream.hpp"

namespace __jni_impl::java::io
{
	class PipedInputStream;
}

namespace __jni_impl::java::io
{
	class PipedOutputStream : public __jni_impl::java::io::OutputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::PipedInputStream arg0);
		void __constructor();
		
		// Methods
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void connect(__jni_impl::java::io::PipedInputStream arg0);
		void flush();
		void close();
	};
} // namespace __jni_impl::java::io

#include "PipedInputStream.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void PipedOutputStream::__constructor(__jni_impl::java::io::PipedInputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedOutputStream",
			"(Ljava/io/PipedInputStream;)V",
			arg0.__jniObject().object());
	}
	void PipedOutputStream::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedOutputStream",
			"()V");
	}
	
	// Methods
	void PipedOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0);
	}
	void PipedOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2);
	}
	void PipedOutputStream::connect(__jni_impl::java::io::PipedInputStream arg0)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Ljava/io/PipedInputStream;)V",
			arg0.__jniObject().object());
	}
	void PipedOutputStream::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V");
	}
	void PipedOutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class PipedOutputStream : public __jni_impl::java::io::PipedOutputStream
	{
	public:
		PipedOutputStream(QAndroidJniObject obj) { __thiz = obj; }
		PipedOutputStream(__jni_impl::java::io::PipedInputStream arg0)
		{
			__constructor(
				arg0);
		}
		PipedOutputStream()
		{
			__constructor();
		}
	};
} // namespace java::io

#endif // JAVA_IO_PIPEDOUTPUTSTREAM

