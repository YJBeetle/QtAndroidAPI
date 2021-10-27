#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Reader.hpp"
#include "./FilterReader.hpp"

namespace __jni_impl::java::io
{
	class Reader;
}

namespace __jni_impl::java::io
{
	class PushbackReader : public __jni_impl::java::io::FilterReader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::Reader arg0);
		void __constructor(__jni_impl::java::io::Reader arg0, jint arg1);
		
		// Methods
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(jcharArray arg0, jint arg1, jint arg2);
		jboolean ready();
		void reset();
		jlong skip(jlong arg0);
		void unread(jcharArray arg0);
		void unread(jint arg0);
		void unread(jcharArray arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::java::io

#include "./Reader.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void PushbackReader::__constructor(__jni_impl::java::io::Reader arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PushbackReader",
			"(Ljava/io/Reader;)V",
			arg0.__jniObject().object()
		);
	}
	void PushbackReader::__constructor(__jni_impl::java::io::Reader arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.PushbackReader",
			"(Ljava/io/Reader;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void PushbackReader::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void PushbackReader::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean PushbackReader::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint PushbackReader::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint PushbackReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean PushbackReader::ready()
	{
		return __thiz.callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	void PushbackReader::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong PushbackReader::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	void PushbackReader::unread(jcharArray arg0)
	{
		__thiz.callMethod<void>(
			"unread",
			"([C)V",
			arg0
		);
	}
	void PushbackReader::unread(jint arg0)
	{
		__thiz.callMethod<void>(
			"unread",
			"(I)V",
			arg0
		);
	}
	void PushbackReader::unread(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"unread",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class PushbackReader : public __jni_impl::java::io::PushbackReader
	{
	public:
		PushbackReader(QAndroidJniObject obj) { __thiz = obj; }
		PushbackReader(__jni_impl::java::io::Reader arg0)
		{
			__constructor(
				arg0);
		}
		PushbackReader(__jni_impl::java::io::Reader arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::io

