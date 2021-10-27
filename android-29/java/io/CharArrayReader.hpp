#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Reader.hpp"


namespace __jni_impl::java::io
{
	class CharArrayReader : public __jni_impl::java::io::Reader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jcharArray arg0);
		void __constructor(jcharArray arg0, jint arg1, jint arg2);
		
		// Methods
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(jcharArray arg0, jint arg1, jint arg2);
		jboolean ready();
		void reset();
		jlong skip(jlong arg0);
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void CharArrayReader::__constructor(jcharArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.CharArrayReader",
			"([C)V",
			arg0
		);
	}
	void CharArrayReader::__constructor(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.io.CharArrayReader",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	void CharArrayReader::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void CharArrayReader::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean CharArrayReader::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint CharArrayReader::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint CharArrayReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean CharArrayReader::ready()
	{
		return __thiz.callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	void CharArrayReader::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong CharArrayReader::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class CharArrayReader : public __jni_impl::java::io::CharArrayReader
	{
	public:
		CharArrayReader(QAndroidJniObject obj) { __thiz = obj; }
		CharArrayReader(jcharArray arg0)
		{
			__constructor(
				arg0);
		}
		CharArrayReader(jcharArray arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::io

