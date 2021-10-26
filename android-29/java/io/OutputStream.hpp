#pragma once

#ifndef JAVA_IO_OUTPUTSTREAM
#define JAVA_IO_OUTPUTSTREAM

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::io
{
	class OutputStream : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void write(jbyteArray arg0);
		void write(jint arg0);
		void flush();
		void close();
		static QAndroidJniObject nullOutputStream();
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void OutputStream::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.OutputStream",
			"()V"
		);
	}
	
	// Methods
	void OutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void OutputStream::write(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"([B)V",
			arg0
		);
	}
	void OutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void OutputStream::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	void OutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject OutputStream::nullOutputStream()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.OutputStream",
			"nullOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class OutputStream : public __jni_impl::java::io::OutputStream
	{
	public:
		OutputStream(QAndroidJniObject obj) { __thiz = obj; }
		OutputStream()
		{
			__constructor();
		}
	};
} // namespace java::io

#endif // JAVA_IO_OUTPUTSTREAM

