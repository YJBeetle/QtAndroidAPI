#pragma once

#ifndef JAVA_IO_INPUTSTREAM
#define JAVA_IO_INPUTSTREAM

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::java::io
{
	class InputStream : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject nullInputStream();
		jint available();
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(jbyteArray arg0);
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jbyteArray readAllBytes();
		jbyteArray readNBytes(jint arg0);
		jint readNBytes(jbyteArray arg0, jint arg1, jint arg2);
		void reset();
		jlong skip(jlong arg0);
		void skipNBytes(jlong arg0);
		jlong transferTo(__jni_impl::java::io::OutputStream arg0);
	};
} // namespace __jni_impl::java::io

#include "OutputStream.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void InputStream::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.InputStream",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject InputStream::nullInputStream()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.InputStream",
			"nullInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	jint InputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	void InputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void InputStream::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean InputStream::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint InputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint InputStream::read(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jint InputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jbyteArray InputStream::readAllBytes()
	{
		return __thiz.callObjectMethod(
			"readAllBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray InputStream::readNBytes(jint arg0)
	{
		return __thiz.callObjectMethod(
			"readNBytes",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	jint InputStream::readNBytes(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"readNBytes",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void InputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong InputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	void InputStream::skipNBytes(jlong arg0)
	{
		__thiz.callMethod<void>(
			"skipNBytes",
			"(J)V",
			arg0
		);
	}
	jlong InputStream::transferTo(__jni_impl::java::io::OutputStream arg0)
	{
		return __thiz.callMethod<jlong>(
			"transferTo",
			"(Ljava/io/OutputStream;)J",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class InputStream : public __jni_impl::java::io::InputStream
	{
	public:
		InputStream(QAndroidJniObject obj) { __thiz = obj; }
		InputStream()
		{
			__constructor();
		}
	};
} // namespace java::io

#endif // JAVA_IO_INPUTSTREAM

