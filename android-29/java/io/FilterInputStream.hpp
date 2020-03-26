#pragma once

#ifndef JAVA_IO_FILTERINPUTSTREAM
#define JAVA_IO_FILTERINPUTSTREAM

#include "../../__JniBaseClass.hpp"
#include "InputStream.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::java::io
{
	class FilterInputStream : public __jni_impl::java::io::InputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jint read(jbyteArray arg0);
		jint read();
		void close();
		void mark(jint arg0);
		jlong skip(jlong arg0);
		jint available();
		jboolean markSupported();
		void reset();
	};
} // namespace __jni_impl::java::io

#include "InputStream.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void FilterInputStream::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.FilterInputStream",
			"(V)V");
	}
	
	// Methods
	jint FilterInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint FilterInputStream::read(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jint FilterInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	void FilterInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void FilterInputStream::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jlong FilterInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	jint FilterInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	jboolean FilterInputStream::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	void FilterInputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class FilterInputStream : public __jni_impl::java::io::FilterInputStream
	{
	public:
		FilterInputStream(QAndroidJniObject obj) { __thiz = obj; }
		FilterInputStream()
		{
			__constructor();
		}
	};
} // namespace java::io

#endif // JAVA_IO_FILTERINPUTSTREAM

