#pragma once

#ifndef JAVA_UTIL_REGEX_PATTERNSYNTAXEXCEPTION
#define JAVA_UTIL_REGEX_PATTERNSYNTAXEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


namespace __jni_impl::java::util::regex
{
	class PatternSyntaxException : public __jni_impl::java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jint arg2);
		void __constructor(const QString &arg0, const QString &arg1, jint arg2);
		
		// Methods
		jstring getMessage();
		jint getIndex();
		jstring getDescription();
		jstring getPattern();
	};
} // namespace __jni_impl::java::util::regex


namespace __jni_impl::java::util::regex
{
	// Fields
	
	// Constructors
	void PatternSyntaxException::__constructor(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.regex.PatternSyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void PatternSyntaxException::__constructor(const QString &arg0, const QString &arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.regex.PatternSyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	
	// Methods
	jstring PatternSyntaxException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PatternSyntaxException::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jstring PatternSyntaxException::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PatternSyntaxException::getPattern()
	{
		return __thiz.callObjectMethod(
			"getPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util::regex

namespace java::util::regex
{
	class PatternSyntaxException : public __jni_impl::java::util::regex::PatternSyntaxException
	{
	public:
		PatternSyntaxException(QAndroidJniObject obj) { __thiz = obj; }
		PatternSyntaxException(jstring arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::util::regex

#endif // JAVA_UTIL_REGEX_PATTERNSYNTAXEXCEPTION

