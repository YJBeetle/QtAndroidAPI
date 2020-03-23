#pragma once

#ifndef JAVA_IO_PIPEDREADER
#define JAVA_IO_PIPEDREADER

#include "Reader.hpp"

namespace __jni_impl::java::lang
{
	class Thread;
}
namespace __jni_impl::java::io
{
	class PipedWriter;
}

namespace __jni_impl::java::io
{
	class PipedReader : public __jni_impl::java::io::Reader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor();
		void __constructor(__jni_impl::java::io::PipedWriter arg0, jint arg1);
		void __constructor(__jni_impl::java::io::PipedWriter arg0);
		
		// Methods
		jint read();
		jint read(jcharArray arg0, jint arg1, jint arg2);
		void connect(__jni_impl::java::io::PipedWriter arg0);
		void close();
		jboolean ready();
	};
} // namespace __jni_impl::java::io

#include "../lang/Thread.hpp"
#include "PipedWriter.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void PipedReader::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedReader",
			"(I)V",
			arg0);
	}
	void PipedReader::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedReader",
			"()V");
	}
	void PipedReader::__constructor(__jni_impl::java::io::PipedWriter arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedReader",
			"(Ljava/io/PipedWriter;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void PipedReader::__constructor(__jni_impl::java::io::PipedWriter arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedReader",
			"(Ljava/io/PipedWriter;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint PipedReader::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I");
	}
	jint PipedReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2);
	}
	void PipedReader::connect(__jni_impl::java::io::PipedWriter arg0)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Ljava/io/PipedWriter;)V",
			arg0.__jniObject().object());
	}
	void PipedReader::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	jboolean PipedReader::ready()
	{
		return __thiz.callMethod<jboolean>(
			"ready",
			"()Z");
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class PipedReader : public __jni_impl::java::io::PipedReader
	{
	public:
		PipedReader(QAndroidJniObject obj) { __thiz = obj; }
		PipedReader(jint arg0)
		{
			__constructor(
				arg0);
		}
		PipedReader()
		{
			__constructor();
		}
		PipedReader(__jni_impl::java::io::PipedWriter arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PipedReader(__jni_impl::java::io::PipedWriter arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_PIPEDREADER

