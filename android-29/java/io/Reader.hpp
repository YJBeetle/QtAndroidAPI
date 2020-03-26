#pragma once

#ifndef JAVA_IO_READER
#define JAVA_IO_READER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio
{
	class CharBuffer;
}
namespace __jni_impl::java::io
{
	class Writer;
}

namespace __jni_impl::java::io
{
	class Reader : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint read(jcharArray arg0);
		jint read(jcharArray arg0, jint arg1, jint arg2);
		jint read(__jni_impl::java::nio::CharBuffer arg0);
		jint read();
		void close();
		void mark(jint arg0);
		jlong transferTo(__jni_impl::java::io::Writer arg0);
		jlong skip(jlong arg0);
		jboolean markSupported();
		void reset();
		static QAndroidJniObject nullReader();
		jboolean ready();
	};
} // namespace __jni_impl::java::io

#include "../nio/CharBuffer.hpp"
#include "Writer.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void Reader::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.Reader",
			"(V)V");
	}
	
	// Methods
	jint Reader::read(jcharArray arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([C)I",
			arg0
		);
	}
	jint Reader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Reader::read(__jni_impl::java::nio::CharBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"(Ljava/nio/CharBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	jint Reader::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	void Reader::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void Reader::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jlong Reader::transferTo(__jni_impl::java::io::Writer arg0)
	{
		return __thiz.callMethod<jlong>(
			"transferTo",
			"(Ljava/io/Writer;)J",
			arg0.__jniObject().object()
		);
	}
	jlong Reader::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	jboolean Reader::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	void Reader::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	QAndroidJniObject Reader::nullReader()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.Reader",
			"nullReader",
			"()Ljava/io/Reader;"
		);
	}
	jboolean Reader::ready()
	{
		return __thiz.callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class Reader : public __jni_impl::java::io::Reader
	{
	public:
		Reader(QAndroidJniObject obj) { __thiz = obj; }
		Reader()
		{
			__constructor();
		}
	};
} // namespace java::io

#endif // JAVA_IO_READER

