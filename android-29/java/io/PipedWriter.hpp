#pragma once

#ifndef JAVA_IO_PIPEDWRITER
#define JAVA_IO_PIPEDWRITER

#include "../../__JniBaseClass.hpp"
#include "Writer.hpp"

namespace __jni_impl::java::io
{
	class PipedReader;
}

namespace __jni_impl::java::io
{
	class PipedWriter : public __jni_impl::java::io::Writer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::PipedReader arg0);
		void __constructor();
		
		// Methods
		void write(jint arg0);
		void write(jcharArray arg0, jint arg1, jint arg2);
		void connect(__jni_impl::java::io::PipedReader arg0);
		void flush();
		void close();
	};
} // namespace __jni_impl::java::io

#include "PipedReader.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void PipedWriter::__constructor(__jni_impl::java::io::PipedReader arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedWriter",
			"(Ljava/io/PipedReader;)V",
			arg0.__jniObject().object());
	}
	void PipedWriter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedWriter",
			"()V");
	}
	
	// Methods
	void PipedWriter::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void PipedWriter::write(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void PipedWriter::connect(__jni_impl::java::io::PipedReader arg0)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Ljava/io/PipedReader;)V",
			arg0.__jniObject().object()
		);
	}
	void PipedWriter::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	void PipedWriter::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class PipedWriter : public __jni_impl::java::io::PipedWriter
	{
	public:
		PipedWriter(QAndroidJniObject obj) { __thiz = obj; }
		PipedWriter(__jni_impl::java::io::PipedReader arg0)
		{
			__constructor(
				arg0);
		}
		PipedWriter()
		{
			__constructor();
		}
	};
} // namespace java::io

#endif // JAVA_IO_PIPEDWRITER

