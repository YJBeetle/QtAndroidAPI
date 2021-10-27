#pragma once

#include "../../__JniBaseClass.hpp"
#include "InputStream.hpp"

namespace __jni_impl::java::io
{
	class PipedOutputStream;
}
namespace __jni_impl::java::lang
{
	class Thread;
}

namespace __jni_impl::java::io
{
	class PipedInputStream : public __jni_impl::java::io::InputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		void __constructor(__jni_impl::java::io::PipedOutputStream arg0);
		void __constructor(__jni_impl::java::io::PipedOutputStream arg0, jint arg1);
		
		// Methods
		jint available();
		void close();
		void connect(__jni_impl::java::io::PipedOutputStream arg0);
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::java::io

#include "PipedOutputStream.hpp"
#include "../lang/Thread.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void PipedInputStream::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedInputStream",
			"()V"
		);
	}
	void PipedInputStream::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedInputStream",
			"(I)V",
			arg0
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
	void PipedInputStream::__constructor(__jni_impl::java::io::PipedOutputStream arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedInputStream",
			"(Ljava/io/PipedOutputStream;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jint PipedInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	void PipedInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
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
} // namespace __jni_impl::java::io

namespace java::io
{
	class PipedInputStream : public __jni_impl::java::io::PipedInputStream
	{
	public:
		PipedInputStream(QAndroidJniObject obj) { __thiz = obj; }
		PipedInputStream()
		{
			__constructor();
		}
		PipedInputStream(jint arg0)
		{
			__constructor(
				arg0);
		}
		PipedInputStream(__jni_impl::java::io::PipedOutputStream arg0)
		{
			__constructor(
				arg0);
		}
		PipedInputStream(__jni_impl::java::io::PipedOutputStream arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::io

