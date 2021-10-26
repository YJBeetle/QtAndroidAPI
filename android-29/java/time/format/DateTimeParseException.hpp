#pragma once

#ifndef JAVA_TIME_FORMAT_DATETIMEPARSEEXCEPTION
#define JAVA_TIME_FORMAT_DATETIMEPARSEEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../DateTimeException.hpp"


namespace __jni_impl::java::time::format
{
	class DateTimeParseException : public __jni_impl::java::time::DateTimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jint arg2);
		void __constructor(const QString &arg0, const QString &arg1, jint arg2);
		void __constructor(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		void __constructor(const QString &arg0, const QString &arg1, jint arg2, jthrowable arg3);
		
		// Methods
		jint getErrorIndex();
		jstring getParsedString();
	};
} // namespace __jni_impl::java::time::format


namespace __jni_impl::java::time::format
{
	// Fields
	
	// Constructors
	void DateTimeParseException::__constructor(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.time.format.DateTimeParseException",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DateTimeParseException::__constructor(const QString &arg0, const QString &arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.time.format.DateTimeParseException",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void DateTimeParseException::__constructor(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
	{
		__thiz = QAndroidJniObject(
			"java.time.format.DateTimeParseException",
			"(Ljava/lang/String;Ljava/lang/CharSequence;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void DateTimeParseException::__constructor(const QString &arg0, const QString &arg1, jint arg2, jthrowable arg3)
	{
		__thiz = QAndroidJniObject(
			"java.time.format.DateTimeParseException",
			"(Ljava/lang/String;Ljava/lang/CharSequence;ILjava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jint DateTimeParseException::getErrorIndex()
	{
		return __thiz.callMethod<jint>(
			"getErrorIndex",
			"()I"
		);
	}
	jstring DateTimeParseException::getParsedString()
	{
		return __thiz.callObjectMethod(
			"getParsedString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::time::format

namespace java::time::format
{
	class DateTimeParseException : public __jni_impl::java::time::format::DateTimeParseException
	{
	public:
		DateTimeParseException(QAndroidJniObject obj) { __thiz = obj; }
		DateTimeParseException(jstring arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		DateTimeParseException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::time::format

#endif // JAVA_TIME_FORMAT_DATETIMEPARSEEXCEPTION

