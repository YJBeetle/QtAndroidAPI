#pragma once

#include "./PluralRules.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./CurrencyPluralInfo.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	inline CurrencyPluralInfo::CurrencyPluralInfo()
		: JObject(
			"android.icu.text.CurrencyPluralInfo",
			"()V"
		) {}
	inline CurrencyPluralInfo::CurrencyPluralInfo(android::icu::util::ULocale arg0)
		: JObject(
			"android.icu.text.CurrencyPluralInfo",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	inline CurrencyPluralInfo::CurrencyPluralInfo(java::util::Locale arg0)
		: JObject(
			"android.icu.text.CurrencyPluralInfo",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::icu::text::CurrencyPluralInfo CurrencyPluralInfo::getInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.CurrencyPluralInfo",
			"getInstance",
			"()Landroid/icu/text/CurrencyPluralInfo;"
		);
	}
	inline android::icu::text::CurrencyPluralInfo CurrencyPluralInfo::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.CurrencyPluralInfo",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/CurrencyPluralInfo;",
			arg0.object()
		);
	}
	inline android::icu::text::CurrencyPluralInfo CurrencyPluralInfo::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.CurrencyPluralInfo",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/CurrencyPluralInfo;",
			arg0.object()
		);
	}
	inline JObject CurrencyPluralInfo::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean CurrencyPluralInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString CurrencyPluralInfo::getCurrencyPluralPattern(JString arg0) const
	{
		return callObjectMethod(
			"getCurrencyPluralPattern",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::util::ULocale CurrencyPluralInfo::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::text::PluralRules CurrencyPluralInfo::getPluralRules() const
	{
		return callObjectMethod(
			"getPluralRules",
			"()Landroid/icu/text/PluralRules;"
		);
	}
	inline jint CurrencyPluralInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void CurrencyPluralInfo::setCurrencyPluralPattern(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"setCurrencyPluralPattern",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void CurrencyPluralInfo::setLocale(android::icu::util::ULocale arg0) const
	{
		callMethod<void>(
			"setLocale",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		);
	}
	inline void CurrencyPluralInfo::setPluralRules(JString arg0) const
	{
		callMethod<void>(
			"setPluralRules",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
