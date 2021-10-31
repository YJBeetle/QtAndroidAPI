#include "./StringPrepParseException.hpp"

namespace android::icu::text
{
	// Fields
	jint StringPrepParseException::ACE_PREFIX_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"ACE_PREFIX_ERROR"
		);
	}
	jint StringPrepParseException::BUFFER_OVERFLOW_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"BUFFER_OVERFLOW_ERROR"
		);
	}
	jint StringPrepParseException::CHECK_BIDI_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"CHECK_BIDI_ERROR"
		);
	}
	jint StringPrepParseException::DOMAIN_NAME_TOO_LONG_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"DOMAIN_NAME_TOO_LONG_ERROR"
		);
	}
	jint StringPrepParseException::ILLEGAL_CHAR_FOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"ILLEGAL_CHAR_FOUND"
		);
	}
	jint StringPrepParseException::INVALID_CHAR_FOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"INVALID_CHAR_FOUND"
		);
	}
	jint StringPrepParseException::LABEL_TOO_LONG_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"LABEL_TOO_LONG_ERROR"
		);
	}
	jint StringPrepParseException::PROHIBITED_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"PROHIBITED_ERROR"
		);
	}
	jint StringPrepParseException::STD3_ASCII_RULES_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"STD3_ASCII_RULES_ERROR"
		);
	}
	jint StringPrepParseException::UNASSIGNED_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"UNASSIGNED_ERROR"
		);
	}
	jint StringPrepParseException::VERIFICATION_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"VERIFICATION_ERROR"
		);
	}
	jint StringPrepParseException::ZERO_LENGTH_LABEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"ZERO_LENGTH_LABEL"
		);
	}
	
	// QAndroidJniObject forward
	StringPrepParseException::StringPrepParseException(QAndroidJniObject obj) : java::text::ParseException(obj) {}
	
	// Constructors
	StringPrepParseException::StringPrepParseException(jstring arg0, jint arg1)
		: java::text::ParseException(
			"android.icu.text.StringPrepParseException",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	StringPrepParseException::StringPrepParseException(jstring arg0, jint arg1, jstring arg2, jint arg3)
		: java::text::ParseException(
			"android.icu.text.StringPrepParseException",
			"(Ljava/lang/String;ILjava/lang/String;I)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	StringPrepParseException::StringPrepParseException(jstring arg0, jint arg1, jstring arg2, jint arg3, jint arg4)
		: java::text::ParseException(
			"android.icu.text.StringPrepParseException",
			"(Ljava/lang/String;ILjava/lang/String;II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	jboolean StringPrepParseException::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint StringPrepParseException::getError()
	{
		return callMethod<jint>(
			"getError",
			"()I"
		);
	}
	jint StringPrepParseException::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring StringPrepParseException::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

