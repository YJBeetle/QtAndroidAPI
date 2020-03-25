#pragma once

#ifndef JAVA_IO_STRINGBUFFERINPUTSTREAM
#define JAVA_IO_STRINGBUFFERINPUTSTREAM

#include "../../__JniBaseClass.hpp"
#include "InputStream.hpp"


namespace __jni_impl::java::io
{
	class StringBufferInputStream : public __jni_impl::java::io::InputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jint read();
		jlong skip(jlong arg0);
		jint available();
		void reset();
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void StringBufferInputStream::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.StringBufferInputStream",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	jint StringBufferInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2);
	}
	jint StringBufferInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I");
	}
	jlong StringBufferInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0);
	}
	jint StringBufferInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I");
	}
	void StringBufferInputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V");
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class StringBufferInputStream : public __jni_impl::java::io::StringBufferInputStream
	{
	public:
		StringBufferInputStream(QAndroidJniObject obj) { __thiz = obj; }
		StringBufferInputStream(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_STRINGBUFFERINPUTSTREAM

