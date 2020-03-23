#pragma once

#ifndef JAVA_UTIL_ILLEGALFORMATWIDTHEXCEPTION
#define JAVA_UTIL_ILLEGALFORMATWIDTHEXCEPTION

#include "IllegalFormatException.hpp"


namespace __jni_impl::java::util
{
	class IllegalFormatWidthException : public __jni_impl::java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		QAndroidJniObject getMessage();
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
			arg0);
	}
	
	// Methods
	QAndroidJniObject IllegalFormatWidthException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;");
	}
	jint IllegalFormatWidthException::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I");
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

#endif // JAVA_UTIL_ILLEGALFORMATWIDTHEXCEPTION

