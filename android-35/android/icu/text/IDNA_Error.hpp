#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./IDNA_Error.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::IDNA_Error IDNA_Error::BIDI()
	{
		return getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"BIDI",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	inline android::icu::text::IDNA_Error IDNA_Error::CONTEXTJ()
	{
		return getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"CONTEXTJ",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	inline android::icu::text::IDNA_Error IDNA_Error::CONTEXTO_DIGITS()
	{
		return getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"CONTEXTO_DIGITS",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	inline android::icu::text::IDNA_Error IDNA_Error::CONTEXTO_PUNCTUATION()
	{
		return getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"CONTEXTO_PUNCTUATION",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	inline android::icu::text::IDNA_Error IDNA_Error::DISALLOWED()
	{
		return getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"DISALLOWED",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	inline android::icu::text::IDNA_Error IDNA_Error::DOMAIN_NAME_TOO_LONG()
	{
		return getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"DOMAIN_NAME_TOO_LONG",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	inline android::icu::text::IDNA_Error IDNA_Error::EMPTY_LABEL()
	{
		return getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"EMPTY_LABEL",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	inline android::icu::text::IDNA_Error IDNA_Error::HYPHEN_3_4()
	{
		return getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"HYPHEN_3_4",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	inline android::icu::text::IDNA_Error IDNA_Error::INVALID_ACE_LABEL()
	{
		return getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"INVALID_ACE_LABEL",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	inline android::icu::text::IDNA_Error IDNA_Error::LABEL_HAS_DOT()
	{
		return getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"LABEL_HAS_DOT",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	inline android::icu::text::IDNA_Error IDNA_Error::LABEL_TOO_LONG()
	{
		return getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"LABEL_TOO_LONG",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	inline android::icu::text::IDNA_Error IDNA_Error::LEADING_COMBINING_MARK()
	{
		return getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"LEADING_COMBINING_MARK",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	inline android::icu::text::IDNA_Error IDNA_Error::LEADING_HYPHEN()
	{
		return getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"LEADING_HYPHEN",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	inline android::icu::text::IDNA_Error IDNA_Error::PUNYCODE()
	{
		return getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"PUNYCODE",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	inline android::icu::text::IDNA_Error IDNA_Error::TRAILING_HYPHEN()
	{
		return getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"TRAILING_HYPHEN",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::IDNA_Error IDNA_Error::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.IDNA$Error",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/IDNA$Error;",
			arg0.object<jstring>()
		);
	}
	inline JArray IDNA_Error::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.IDNA$Error",
			"values",
			"()[Landroid/icu/text/IDNA$Error;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
