#pragma once

#ifndef JAVA_IO_PIPEDINPUTSTREAM
#define JAVA_IO_PIPEDINPUTSTREAM

#include "../../__JniBaseClass.hpp"
#include "InputStream.hpp"

namespace __jni_impl::java::lang
{
	class Thread;
}
namespace __jni_impl::java::io
{
	class PipedOutputStream;
}

namespace __jni_impl::java::io
{
	class PipedInputStream : public __jni_impl::java::io::InputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor();
		void __constructor(__jni_impl::java::io::PipedOutputStream arg0, jint arg1);
		void __constructor(__jni_impl::java::io::PipedOutputStream arg0);
		
		// Methods
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		void connect(__jni_impl::java::io::PipedOutputStream arg0);
		void close();
		jint available();
	};
} // namespace __jni_impl::java::io

#include "../lang/Thread.hpp"
#include "PipedOutputStream.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void PipedInputStream::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedInputStream",
			"(I)V",
			arg0
		);
	}
	void PipedInputStream::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedInputStream",
			"()V"
		);
	}
	void PipedInputStream::__constructor(__jni_impl::java::io::PipedOutputStream arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedInputStream",
			"(Ljava/io/PipedOutputStream;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void PipedInputStream::__constructor(__jni_impl::java::io::PipedOutputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedInputStream",
			"(Ljava/io/PipedOutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint PipedInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint PipedInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void PipedInputStream::connect(__jni_impl::java::io::PipedOutputStream arg0)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Ljava/io/PipedOutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void PipedInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint PipedInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class PipedInputStream : public __jni_impl::java::io::PipedInputStream
	{
	public:
		PipedInputStream(QAndroidJniObject obj) { __thiz = obj; }
		PipedInputStream(jint arg0)
		{
			__constructor(
				arg0);
		}
		PipedInputStream()
		{
			__constructor();
		}
		PipedInputStream(__jni_impl::java::io::PipedOutputStream arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PipedInputStream(__jni_impl::java::io::PipedOutputStream arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_PIPEDINPUTSTREAM

