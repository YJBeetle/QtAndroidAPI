#pragma once

#ifndef JAVA_IO_FILTERREADER
#define JAVA_IO_FILTERREADER

#include "../../__JniBaseClass.hpp"
#include "Reader.hpp"

namespace __jni_impl::java::io
{
	class Reader;
}

namespace __jni_impl::java::io
{
	class FilterReader : public __jni_impl::java::io::Reader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
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

#include "Reader.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void FilterReader::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.FilterReader",
			"(V)V");
	}
	
	// Methods
	jint FilterReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint FilterReader::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	void FilterReader::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void FilterReader::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jlong FilterReader::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	jboolean FilterReader::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	void FilterReader::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jboolean FilterReader::ready()
	{
		return __thiz.callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class FilterReader : public __jni_impl::java::io::FilterReader
	{
	public:
		FilterReader(QAndroidJniObject obj) { __thiz = obj; }
		FilterReader()
		{
			__constructor();
		}
	};
} // namespace java::io

#endif // JAVA_IO_FILTERREADER

