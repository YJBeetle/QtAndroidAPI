#pragma once

#ifndef JAVA_IO_SEQUENCEINPUTSTREAM
#define JAVA_IO_SEQUENCEINPUTSTREAM

#include "../../__JniBaseClass.hpp"
#include "InputStream.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::java::io
{
	class SequenceInputStream : public __jni_impl::java::io::InputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::java::io::InputStream arg1);
		
		// Methods
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		void close();
		jint available();
	};
} // namespace __jni_impl::java::io

#include "InputStream.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void SequenceInputStream::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.SequenceInputStream",
			"(Ljava/util/Enumeration;)V",
			arg0.__jniObject().object()
		);
	}
	void SequenceInputStream::__constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::java::io::InputStream arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.SequenceInputStream",
			"(Ljava/io/InputStream;Ljava/io/InputStream;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint SequenceInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint SequenceInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void SequenceInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint SequenceInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class SequenceInputStream : public __jni_impl::java::io::SequenceInputStream
	{
	public:
		SequenceInputStream(QAndroidJniObject obj) { __thiz = obj; }
		SequenceInputStream(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		SequenceInputStream(__jni_impl::java::io::InputStream arg0, __jni_impl::java::io::InputStream arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::io

#endif // JAVA_IO_SEQUENCEINPUTSTREAM

