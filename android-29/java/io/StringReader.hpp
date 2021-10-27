#pragma once

#include "../../__JniBaseClass.hpp"
#include "Reader.hpp"


namespace __jni_impl::java::io
{
	class StringReader : public __jni_impl::java::io::Reader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
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
	void StringReader::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.StringReader",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StringReader::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.StringReader",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	void StringReader::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void StringReader::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean StringReader::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint StringReader::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint StringReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean StringReader::ready()
	{
		return __thiz.callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	void StringReader::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong StringReader::skip(jlong arg0)
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
	class StringReader : public __jni_impl::java::io::StringReader
	{
	public:
		StringReader(QAndroidJniObject obj) { __thiz = obj; }
		StringReader(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

