#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Reader.hpp"

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

#include "./Reader.hpp"

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
	jboolean FilterReader::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint FilterReader::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
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
	jboolean FilterReader::ready()
	{
		return __thiz.callMethod<jboolean>(
			"ready",
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
	jlong FilterReader::skip(jlong arg0)
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

