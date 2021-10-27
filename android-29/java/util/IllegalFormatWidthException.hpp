#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


namespace __jni_impl::java::util
{
	class IllegalFormatWidthException : public __jni_impl::java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		jstring getMessage();
		jint getWidth();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void IllegalFormatWidthException::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.IllegalFormatWidthException",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jstring IllegalFormatWidthException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint IllegalFormatWidthException::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class IllegalFormatWidthException : public __jni_impl::java::util::IllegalFormatWidthException
	{
	public:
		IllegalFormatWidthException(QAndroidJniObject obj) { __thiz = obj; }
		IllegalFormatWidthException(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

