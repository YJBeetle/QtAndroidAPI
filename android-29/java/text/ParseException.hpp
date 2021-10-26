#pragma once

#ifndef JAVA_TEXT_PARSEEXCEPTION
#define JAVA_TEXT_PARSEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"


namespace __jni_impl::java::text
{
	class ParseException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jint arg1);
		void __constructor(const QString &arg0, jint arg1);
		
		// Methods
		jint getErrorOffset();
	};
} // namespace __jni_impl::java::text


namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
	void ParseException::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.ParseException",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void ParseException::__constructor(const QString &arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.ParseException",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	jint ParseException::getErrorOffset()
	{
		return __thiz.callMethod<jint>(
			"getErrorOffset",
			"()I"
		);
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class ParseException : public __jni_impl::java::text::ParseException
	{
	public:
		ParseException(QAndroidJniObject obj) { __thiz = obj; }
		ParseException(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_PARSEEXCEPTION

