#pragma once

#include "../../JString.hpp"
#include "./UrlQuerySanitizer_IllegalCharacterValueSanitizer.def.hpp"

namespace android::net
{
	// Fields
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::ALL_BUT_NUL_AND_ANGLE_BRACKETS_LEGAL()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"ALL_BUT_NUL_AND_ANGLE_BRACKETS_LEGAL"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::ALL_BUT_NUL_LEGAL()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"ALL_BUT_NUL_LEGAL"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::ALL_BUT_WHITESPACE_LEGAL()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"ALL_BUT_WHITESPACE_LEGAL"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::ALL_ILLEGAL()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"ALL_ILLEGAL"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::ALL_OK()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"ALL_OK"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::ALL_WHITESPACE_OK()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"ALL_WHITESPACE_OK"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::AMP_AND_SPACE_LEGAL()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"AMP_AND_SPACE_LEGAL"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::AMP_LEGAL()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"AMP_LEGAL"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::AMP_OK()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"AMP_OK"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::DQUOTE_OK()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"DQUOTE_OK"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::GT_OK()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"GT_OK"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::LT_OK()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"LT_OK"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::NON_7_BIT_ASCII_OK()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"NON_7_BIT_ASCII_OK"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::NUL_OK()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"NUL_OK"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::OTHER_WHITESPACE_OK()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"OTHER_WHITESPACE_OK"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::PCT_OK()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"PCT_OK"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::SCRIPT_URL_OK()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"SCRIPT_URL_OK"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::SPACE_LEGAL()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"SPACE_LEGAL"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::SPACE_OK()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"SPACE_OK"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::SQUOTE_OK()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"SQUOTE_OK"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::URL_AND_SPACE_LEGAL()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"URL_AND_SPACE_LEGAL"
		);
	}
	inline jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::URL_LEGAL()
	{
		return getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"URL_LEGAL"
		);
	}
	
	// Constructors
	inline UrlQuerySanitizer_IllegalCharacterValueSanitizer::UrlQuerySanitizer_IllegalCharacterValueSanitizer(jint arg0)
		: JObject(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline JString UrlQuerySanitizer_IllegalCharacterValueSanitizer::sanitize(JString arg0) const
	{
		return callObjectMethod(
			"sanitize",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
