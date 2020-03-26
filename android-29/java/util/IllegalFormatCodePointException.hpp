#pragma once

#ifndef JAVA_UTIL_ILLEGALFORMATCODEPOINTEXCEPTION
#define JAVA_UTIL_ILLEGALFORMATCODEPOINTEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "IllegalFormatException.hpp"


namespace __jni_impl::java::util
{
	class IllegalFormatCodePointException : public __jni_impl::java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		jstring getMessage();
		jint getCodePoint();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void IllegalFormatCodePointException::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.IllegalFormatCodePointException",
			"(I)V",
			arg0);
	}
	
	// Methods
	jstring IllegalFormatCodePointException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint IllegalFormatCodePointException::getCodePoint()
	{
		return __thiz.callMethod<jint>(
			"getCodePoint",
			"()I"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class IllegalFormatCodePointException : public __jni_impl::java::util::IllegalFormatCodePointException
	{
	public:
		IllegalFormatCodePointException(QAndroidJniObject obj) { __thiz = obj; }
		IllegalFormatCodePointException(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_ILLEGALFORMATCODEPOINTEXCEPTION

