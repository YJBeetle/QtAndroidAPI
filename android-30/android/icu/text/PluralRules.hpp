#pragma once

#include "./PluralRules_PluralType.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./PluralRules.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::PluralRules PluralRules::DEFAULT()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"DEFAULT",
			"Landroid/icu/text/PluralRules;"
		);
	}
	inline JString PluralRules::KEYWORD_FEW()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_FEW",
			"Ljava/lang/String;"
		);
	}
	inline JString PluralRules::KEYWORD_MANY()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_MANY",
			"Ljava/lang/String;"
		);
	}
	inline JString PluralRules::KEYWORD_ONE()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_ONE",
			"Ljava/lang/String;"
		);
	}
	inline JString PluralRules::KEYWORD_OTHER()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_OTHER",
			"Ljava/lang/String;"
		);
	}
	inline JString PluralRules::KEYWORD_TWO()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_TWO",
			"Ljava/lang/String;"
		);
	}
	inline JString PluralRules::KEYWORD_ZERO()
	{
		return getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_ZERO",
			"Ljava/lang/String;"
		);
	}
	inline jdouble PluralRules::NO_UNIQUE_VALUE()
	{
		return getStaticField<jdouble>(
			"android.icu.text.PluralRules",
			"NO_UNIQUE_VALUE"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::PluralRules PluralRules::createRules(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"createRules",
			"(Ljava/lang/String;)Landroid/icu/text/PluralRules;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::PluralRules PluralRules::forLocale(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"forLocale",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/PluralRules;",
			arg0.object()
		);
	}
	inline android::icu::text::PluralRules PluralRules::forLocale(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"forLocale",
			"(Ljava/util/Locale;)Landroid/icu/text/PluralRules;",
			arg0.object()
		);
	}
	inline android::icu::text::PluralRules PluralRules::forLocale(android::icu::util::ULocale arg0, android::icu::text::PluralRules_PluralType arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"forLocale",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;)Landroid/icu/text/PluralRules;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::icu::text::PluralRules PluralRules::forLocale(java::util::Locale arg0, android::icu::text::PluralRules_PluralType arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"forLocale",
			"(Ljava/util/Locale;Landroid/icu/text/PluralRules$PluralType;)Landroid/icu/text/PluralRules;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::icu::text::PluralRules PluralRules::parseDescription(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"parseDescription",
			"(Ljava/lang/String;)Landroid/icu/text/PluralRules;",
			arg0.object<jstring>()
		);
	}
	inline jboolean PluralRules::equals(android::icu::text::PluralRules arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Landroid/icu/text/PluralRules;)Z",
			arg0.object()
		);
	}
	inline jboolean PluralRules::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject PluralRules::getAllKeywordValues(JString arg0) const
	{
		return callObjectMethod(
			"getAllKeywordValues",
			"(Ljava/lang/String;)Ljava/util/Collection;",
			arg0.object<jstring>()
		);
	}
	inline JObject PluralRules::getKeywords() const
	{
		return callObjectMethod(
			"getKeywords",
			"()Ljava/util/Set;"
		);
	}
	inline JObject PluralRules::getSamples(JString arg0) const
	{
		return callObjectMethod(
			"getSamples",
			"(Ljava/lang/String;)Ljava/util/Collection;",
			arg0.object<jstring>()
		);
	}
	inline jdouble PluralRules::getUniqueKeywordValue(JString arg0) const
	{
		return callMethod<jdouble>(
			"getUniqueKeywordValue",
			"(Ljava/lang/String;)D",
			arg0.object<jstring>()
		);
	}
	inline jint PluralRules::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString PluralRules::select(jdouble arg0) const
	{
		return callObjectMethod(
			"select",
			"(D)Ljava/lang/String;",
			arg0
		);
	}
	inline JString PluralRules::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
