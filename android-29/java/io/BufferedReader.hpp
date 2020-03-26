#pragma once

#ifndef JAVA_IO_BUFFEREDREADER
#define JAVA_IO_BUFFEREDREADER

#include "../../__JniBaseClass.hpp"
#include "Reader.hpp"

namespace __jni_impl::java::io
{
	class Reader;
}

namespace __jni_impl::java::io
{
	class BufferedReader : public __jni_impl::java::io::Reader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::Reader arg0, jint arg1);
		void __constructor(__jni_impl::java::io::Reader arg0);
		
		// Methods
		QAndroidJniObject lines();
		jint read();
		jint read(jcharArray arg0, jint arg1, jint arg2);
		jstring readLine();
		void close();
		void mark(jint arg0);
		jlong skip(jlong arg0);
		jboolean markSupported();
		void reset();
		jboolean ready();
	};
} // namespace __jni_impl::java::io

#include "Reader.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void BufferedReader::__constructor(__jni_impl::java::io::Reader arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.BufferedReader",
			"(Ljava/io/Reader;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void BufferedReader::__constructor(__jni_impl::java::io::Reader arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.BufferedReader",
			"(Ljava/io/Reader;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject BufferedReader::lines()
	{
		return __thiz.callObjectMethod(
			"lines",
			"()Ljava/util/stream/Stream;"
		);
	}
	jint BufferedReader::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint BufferedReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jstring BufferedReader::readLine()
	{
		return __thiz.callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void BufferedReader::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void BufferedReader::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jlong BufferedReader::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	jboolean BufferedReader::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	void BufferedReader::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jboolean BufferedReader::ready()
	{
		return __thiz.callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class BufferedReader : public __jni_impl::java::io::BufferedReader
	{
	public:
		BufferedReader(QAndroidJniObject obj) { __thiz = obj; }
		BufferedReader(__jni_impl::java::io::Reader arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		BufferedReader(__jni_impl::java::io::Reader arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_BUFFEREDREADER

