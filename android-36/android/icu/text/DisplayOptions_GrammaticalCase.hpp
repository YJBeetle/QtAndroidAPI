#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./DisplayOptions_GrammaticalCase.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::DisplayOptions_GrammaticalCase DisplayOptions_GrammaticalCase::ABLATIVE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$GrammaticalCase",
			"ABLATIVE",
			"Landroid/icu/text/DisplayOptions$GrammaticalCase;"
		);
	}
	inline android::icu::text::DisplayOptions_GrammaticalCase DisplayOptions_GrammaticalCase::ACCUSATIVE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$GrammaticalCase",
			"ACCUSATIVE",
			"Landroid/icu/text/DisplayOptions$GrammaticalCase;"
		);
	}
	inline android::icu::text::DisplayOptions_GrammaticalCase DisplayOptions_GrammaticalCase::COMITATIVE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$GrammaticalCase",
			"COMITATIVE",
			"Landroid/icu/text/DisplayOptions$GrammaticalCase;"
		);
	}
	inline android::icu::text::DisplayOptions_GrammaticalCase DisplayOptions_GrammaticalCase::DATIVE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$GrammaticalCase",
			"DATIVE",
			"Landroid/icu/text/DisplayOptions$GrammaticalCase;"
		);
	}
	inline android::icu::text::DisplayOptions_GrammaticalCase DisplayOptions_GrammaticalCase::ERGATIVE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$GrammaticalCase",
			"ERGATIVE",
			"Landroid/icu/text/DisplayOptions$GrammaticalCase;"
		);
	}
	inline android::icu::text::DisplayOptions_GrammaticalCase DisplayOptions_GrammaticalCase::GENITIVE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$GrammaticalCase",
			"GENITIVE",
			"Landroid/icu/text/DisplayOptions$GrammaticalCase;"
		);
	}
	inline android::icu::text::DisplayOptions_GrammaticalCase DisplayOptions_GrammaticalCase::INSTRUMENTAL()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$GrammaticalCase",
			"INSTRUMENTAL",
			"Landroid/icu/text/DisplayOptions$GrammaticalCase;"
		);
	}
	inline android::icu::text::DisplayOptions_GrammaticalCase DisplayOptions_GrammaticalCase::LOCATIVE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$GrammaticalCase",
			"LOCATIVE",
			"Landroid/icu/text/DisplayOptions$GrammaticalCase;"
		);
	}
	inline android::icu::text::DisplayOptions_GrammaticalCase DisplayOptions_GrammaticalCase::LOCATIVE_COPULATIVE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$GrammaticalCase",
			"LOCATIVE_COPULATIVE",
			"Landroid/icu/text/DisplayOptions$GrammaticalCase;"
		);
	}
	inline android::icu::text::DisplayOptions_GrammaticalCase DisplayOptions_GrammaticalCase::NOMINATIVE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$GrammaticalCase",
			"NOMINATIVE",
			"Landroid/icu/text/DisplayOptions$GrammaticalCase;"
		);
	}
	inline android::icu::text::DisplayOptions_GrammaticalCase DisplayOptions_GrammaticalCase::OBLIQUE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$GrammaticalCase",
			"OBLIQUE",
			"Landroid/icu/text/DisplayOptions$GrammaticalCase;"
		);
	}
	inline android::icu::text::DisplayOptions_GrammaticalCase DisplayOptions_GrammaticalCase::PREPOSITIONAL()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$GrammaticalCase",
			"PREPOSITIONAL",
			"Landroid/icu/text/DisplayOptions$GrammaticalCase;"
		);
	}
	inline android::icu::text::DisplayOptions_GrammaticalCase DisplayOptions_GrammaticalCase::SOCIATIVE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$GrammaticalCase",
			"SOCIATIVE",
			"Landroid/icu/text/DisplayOptions$GrammaticalCase;"
		);
	}
	inline android::icu::text::DisplayOptions_GrammaticalCase DisplayOptions_GrammaticalCase::UNDEFINED()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$GrammaticalCase",
			"UNDEFINED",
			"Landroid/icu/text/DisplayOptions$GrammaticalCase;"
		);
	}
	inline JObject DisplayOptions_GrammaticalCase::VALUES()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$GrammaticalCase",
			"VALUES",
			"Ljava/util/List;"
		);
	}
	inline android::icu::text::DisplayOptions_GrammaticalCase DisplayOptions_GrammaticalCase::VOCATIVE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$GrammaticalCase",
			"VOCATIVE",
			"Landroid/icu/text/DisplayOptions$GrammaticalCase;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::DisplayOptions_GrammaticalCase DisplayOptions_GrammaticalCase::fromIdentifier(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayOptions$GrammaticalCase",
			"fromIdentifier",
			"(Ljava/lang/String;)Landroid/icu/text/DisplayOptions$GrammaticalCase;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::DisplayOptions_GrammaticalCase DisplayOptions_GrammaticalCase::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayOptions$GrammaticalCase",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DisplayOptions$GrammaticalCase;",
			arg0.object<jstring>()
		);
	}
	inline JArray DisplayOptions_GrammaticalCase::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayOptions$GrammaticalCase",
			"values",
			"()[Landroid/icu/text/DisplayOptions$GrammaticalCase;"
		);
	}
	inline JString DisplayOptions_GrammaticalCase::getIdentifier() const
	{
		return callObjectMethod(
			"getIdentifier",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
