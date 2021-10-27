#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Writer.hpp"

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
		void __constructor();
		void __constructor(__jni_impl::java::io::PipedReader arg0);
		
		// Methods
		void close();
		void connect(__jni_impl::java::io::PipedReader arg0);
		void flush();
		void write(jint arg0);
		void write(jcharArray arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::java::io

#include "./PipedReader.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void PipedWriter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedWriter",
			"()V"
		);
	}
	void PipedWriter::__constructor(__jni_impl::java::io::PipedReader arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedWriter",
			"(Ljava/io/PipedReader;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void PipedWriter::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
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
} // namespace __jni_impl::java::io

namespace java::io
{
	class PipedWriter : public __jni_impl::java::io::PipedWriter
	{
	public:
		PipedWriter(QAndroidJniObject obj) { __thiz = obj; }
		PipedWriter()
		{
			__constructor();
		}
		PipedWriter(__jni_impl::java::io::PipedReader arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

