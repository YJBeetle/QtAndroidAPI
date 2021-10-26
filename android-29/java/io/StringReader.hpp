#pragma once

#ifndef JAVA_IO_STRINGREADER
#define JAVA_IO_STRINGREADER

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
		jint read(jcharArray arg0, jint arg1, jint arg2);
		jint read();
		void close();
		void mark(jint arg0);
		jlong skip(jlong arg0);
		jboolean markSupported();
		void reset();
		jboolean ready();
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
	jint StringReader::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
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
	jlong StringReader::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
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
	void StringReader::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jboolean StringReader::ready()
	{
		return __thiz.callMethod<jboolean>(
			"ready",
			"()Z"
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

#endif // JAVA_IO_STRINGREADER

