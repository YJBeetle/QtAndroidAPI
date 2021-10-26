#pragma once

#ifndef JAVA_UTIL_MISSINGFORMATWIDTHEXCEPTION
#define JAVA_UTIL_MISSINGFORMATWIDTHEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "IllegalFormatException.hpp"


namespace __jni_impl::java::util
{
	class MissingFormatWidthException : public __jni_impl::java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		jstring getMessage();
		jstring getFormatSpecifier();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void MissingFormatWidthException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.MissingFormatWidthException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MissingFormatWidthException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.MissingFormatWidthException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jstring MissingFormatWidthException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MissingFormatWidthException::getFormatSpecifier()
	{
		return __thiz.callObjectMethod(
			"getFormatSpecifier",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class MissingFormatWidthException : public __jni_impl::java::util::MissingFormatWidthException
	{
	public:
		MissingFormatWidthException(QAndroidJniObject obj) { __thiz = obj; }
		MissingFormatWidthException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_MISSINGFORMATWIDTHEXCEPTION

