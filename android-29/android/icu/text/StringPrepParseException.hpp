#pragma once

#ifndef ANDROID_ICU_TEXT_STRINGPREPPARSEEXCEPTION
#define ANDROID_ICU_TEXT_STRINGPREPPARSEEXCEPTION

#include "../../../java/text/ParseException.hpp"


namespace __jni_impl::android::icu::text
{
	class StringPrepParseException : public __jni_impl::java::text::ParseException
	{
	public:
		// Fields
		static jint ACE_PREFIX_ERROR();
		static jint BUFFER_OVERFLOW_ERROR();
		static jint CHECK_BIDI_ERROR();
		static jint DOMAIN_NAME_TOO_LONG_ERROR();
		static jint ILLEGAL_CHAR_FOUND();
		static jint INVALID_CHAR_FOUND();
		static jint LABEL_TOO_LONG_ERROR();
		static jint PROHIBITED_ERROR();
		static jint STD3_ASCII_RULES_ERROR();
		static jint UNASSIGNED_ERROR();
		static jint VERIFICATION_ERROR();
		static jint ZERO_LENGTH_LABEL();
		
		// Constructors
		void __constructor(jstring arg0, jint arg1, jstring arg2, jint arg3, jint arg4);
		void __constructor(jstring arg0, jint arg1, jstring arg2, jint arg3);
		void __constructor(jstring arg0, jint arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint getError();
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	jint StringPrepParseException::ACE_PREFIX_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"ACE_PREFIX_ERROR");
	}
	jint StringPrepParseException::BUFFER_OVERFLOW_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"BUFFER_OVERFLOW_ERROR");
	}
	jint StringPrepParseException::CHECK_BIDI_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"CHECK_BIDI_ERROR");
	}
	jint StringPrepParseException::DOMAIN_NAME_TOO_LONG_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"DOMAIN_NAME_TOO_LONG_ERROR");
	}
	jint StringPrepParseException::ILLEGAL_CHAR_FOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"ILLEGAL_CHAR_FOUND");
	}
	jint StringPrepParseException::INVALID_CHAR_FOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"INVALID_CHAR_FOUND");
	}
	jint StringPrepParseException::LABEL_TOO_LONG_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"LABEL_TOO_LONG_ERROR");
	}
	jint StringPrepParseException::PROHIBITED_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"PROHIBITED_ERROR");
	}
	jint StringPrepParseException::STD3_ASCII_RULES_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"STD3_ASCII_RULES_ERROR");
	}
	jint StringPrepParseException::UNASSIGNED_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"UNASSIGNED_ERROR");
	}
	jint StringPrepParseException::VERIFICATION_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"VERIFICATION_ERROR");
	}
	jint StringPrepParseException::ZERO_LENGTH_LABEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"ZERO_LENGTH_LABEL");
	}
	
	// Constructors
	void StringPrepParseException::__constructor(jstring arg0, jint arg1, jstring arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.StringPrepParseException",
			"(Ljava/lang/String;ILjava/lang/String;II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void StringPrepParseException::__constructor(jstring arg0, jint arg1, jstring arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.StringPrepParseException",
			"(Ljava/lang/String;ILjava/lang/String;I)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void StringPrepParseException::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.StringPrepParseException",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	
	// Methods
	jboolean StringPrepParseException::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject StringPrepParseException::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint StringPrepParseException::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint StringPrepParseException::getError()
	{
		return __thiz.callMethod<jint>(
			"getError",
			"()I");
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class StringPrepParseException : public __jni_impl::android::icu::text::StringPrepParseException
	{
	public:
		StringPrepParseException(QAndroidJniObject obj) { __thiz = obj; }
		StringPrepParseException(jstring arg0, jint arg1, jstring arg2, jint arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		StringPrepParseException(jstring arg0, jint arg1, jstring arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		StringPrepParseException(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_STRINGPREPPARSEEXCEPTION

