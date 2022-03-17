#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./StringPrepParseException.def.hpp"

namespace android::icu::text
{
	// Fields
	inline jint StringPrepParseException::ACE_PREFIX_ERROR()
	{
		return getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"ACE_PREFIX_ERROR"
		);
	}
	inline jint StringPrepParseException::BUFFER_OVERFLOW_ERROR()
	{
		return getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"BUFFER_OVERFLOW_ERROR"
		);
	}
	inline jint StringPrepParseException::CHECK_BIDI_ERROR()
	{
		return getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"CHECK_BIDI_ERROR"
		);
	}
	inline jint StringPrepParseException::DOMAIN_NAME_TOO_LONG_ERROR()
	{
		return getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"DOMAIN_NAME_TOO_LONG_ERROR"
		);
	}
	inline jint StringPrepParseException::ILLEGAL_CHAR_FOUND()
	{
		return getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"ILLEGAL_CHAR_FOUND"
		);
	}
	inline jint StringPrepParseException::INVALID_CHAR_FOUND()
	{
		return getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"INVALID_CHAR_FOUND"
		);
	}
	inline jint StringPrepParseException::LABEL_TOO_LONG_ERROR()
	{
		return getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"LABEL_TOO_LONG_ERROR"
		);
	}
	inline jint StringPrepParseException::PROHIBITED_ERROR()
	{
		return getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"PROHIBITED_ERROR"
		);
	}
	inline jint StringPrepParseException::STD3_ASCII_RULES_ERROR()
	{
		return getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"STD3_ASCII_RULES_ERROR"
		);
	}
	inline jint StringPrepParseException::UNASSIGNED_ERROR()
	{
		return getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"UNASSIGNED_ERROR"
		);
	}
	inline jint StringPrepParseException::VERIFICATION_ERROR()
	{
		return getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"VERIFICATION_ERROR"
		);
	}
	inline jint StringPrepParseException::ZERO_LENGTH_LABEL()
	{
		return getStaticField<jint>(
			"android.icu.text.StringPrepParseException",
			"ZERO_LENGTH_LABEL"
		);
	}
	
	// Constructors
	inline StringPrepParseException::StringPrepParseException(JString arg0, jint arg1)
		: java::text::ParseException(
			"android.icu.text.StringPrepParseException",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline StringPrepParseException::StringPrepParseException(JString arg0, jint arg1, JString arg2, jint arg3)
		: java::text::ParseException(
			"android.icu.text.StringPrepParseException",
			"(Ljava/lang/String;ILjava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>(),
			arg3
		) {}
	inline StringPrepParseException::StringPrepParseException(JString arg0, jint arg1, JString arg2, jint arg3, jint arg4)
		: java::text::ParseException(
			"android.icu.text.StringPrepParseException",
			"(Ljava/lang/String;ILjava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>(),
			arg3,
			arg4
		) {}
	
	// Methods
	inline jboolean StringPrepParseException::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint StringPrepParseException::getError() const
	{
		return callMethod<jint>(
			"getError",
			"()I"
		);
	}
	inline jint StringPrepParseException::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString StringPrepParseException::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/text/ParseException.hpp"

