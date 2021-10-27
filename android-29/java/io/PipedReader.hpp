#pragma once

#include "../../__JniBaseClass.hpp"
#include "Reader.hpp"

namespace __jni_impl::java::io
{
	class PipedWriter;
}
namespace __jni_impl::java::lang
{
	class Thread;
}

namespace __jni_impl::java::io
{
	class PipedReader : public __jni_impl::java::io::Reader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		void __constructor(__jni_impl::java::io::PipedWriter arg0);
		void __constructor(__jni_impl::java::io::PipedWriter arg0, jint arg1);
		
		// Methods
		void close();
		void connect(__jni_impl::java::io::PipedWriter arg0);
		jint read();
		jint read(jcharArray arg0, jint arg1, jint arg2);
		jboolean ready();
	};
} // namespace __jni_impl::java::io

#include "PipedWriter.hpp"
#include "../lang/Thread.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void PipedReader::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedReader",
			"()V"
		);
	}
	void PipedReader::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedReader",
			"(I)V",
			arg0
		);
	}
	void PipedReader::__constructor(__jni_impl::java::io::PipedWriter arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedReader",
			"(Ljava/io/PipedWriter;)V",
			arg0.__jniObject().object()
		);
	}
	void PipedReader::__constructor(__jni_impl::java::io::PipedWriter arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedReader",
			"(Ljava/io/PipedWriter;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void PipedReader::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void PipedReader::connect(__jni_impl::java::io::PipedWriter arg0)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Ljava/io/PipedWriter;)V",
			arg0.__jniObject().object()
		);
	}
	jint PipedReader::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint PipedReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean PipedReader::ready()
	{
		return __thiz.callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class PipedReader : public __jni_impl::java::io::PipedReader
	{
	public:
		PipedReader(QAndroidJniObject obj) { __thiz = obj; }
		PipedReader()
		{
			__constructor();
		}
		PipedReader(jint arg0)
		{
			__constructor(
				arg0);
		}
		PipedReader(__jni_impl::java::io::PipedWriter arg0)
		{
			__constructor(
				arg0);
		}
		PipedReader(__jni_impl::java::io::PipedWriter arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::io

