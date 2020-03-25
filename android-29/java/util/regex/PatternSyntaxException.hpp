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
		
		// Methods
		QAndroidJniObject getMessage();
		jint getIndex();
		QAndroidJniObject getPattern();
		QAndroidJniObject getDescription();
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
			arg2);
	}
	
	// Methods
	QAndroidJniObject PatternSyntaxException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;");
	}
	jint PatternSyntaxException::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I");
	}
	QAndroidJniObject PatternSyntaxException::getPattern()
	{
		return __thiz.callObjectMethod(
			"getPattern",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject PatternSyntaxException::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;");
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

