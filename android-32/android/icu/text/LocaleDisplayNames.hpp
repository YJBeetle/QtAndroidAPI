#pragma once

#include "../../../JArray.hpp"
#include "./DisplayContext.def.hpp"
#include "./DisplayContext_Type.def.hpp"
#include "./LocaleDisplayNames_DialectHandling.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./LocaleDisplayNames.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::text::LocaleDisplayNames LocaleDisplayNames::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/LocaleDisplayNames;",
			arg0.object()
		);
	}
	inline android::icu::text::LocaleDisplayNames LocaleDisplayNames::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/LocaleDisplayNames;",
			arg0.object()
		);
	}
	inline android::icu::text::LocaleDisplayNames LocaleDisplayNames::getInstance(android::icu::util::ULocale arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames",
			"getInstance",
			"(Landroid/icu/util/ULocale;[Landroid/icu/text/DisplayContext;)Landroid/icu/text/LocaleDisplayNames;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline android::icu::text::LocaleDisplayNames LocaleDisplayNames::getInstance(android::icu::util::ULocale arg0, android::icu::text::LocaleDisplayNames_DialectHandling arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames",
			"getInstance",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/LocaleDisplayNames$DialectHandling;)Landroid/icu/text/LocaleDisplayNames;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::icu::text::LocaleDisplayNames LocaleDisplayNames::getInstance(java::util::Locale arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames",
			"getInstance",
			"(Ljava/util/Locale;[Landroid/icu/text/DisplayContext;)Landroid/icu/text/LocaleDisplayNames;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline android::icu::text::DisplayContext LocaleDisplayNames::getContext(android::icu::text::DisplayContext_Type arg0) const
	{
		return callObjectMethod(
			"getContext",
			"(Landroid/icu/text/DisplayContext$Type;)Landroid/icu/text/DisplayContext;",
			arg0.object()
		);
	}
	inline android::icu::text::LocaleDisplayNames_DialectHandling LocaleDisplayNames::getDialectHandling() const
	{
		return callObjectMethod(
			"getDialectHandling",
			"()Landroid/icu/text/LocaleDisplayNames$DialectHandling;"
		);
	}
	inline android::icu::util::ULocale LocaleDisplayNames::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	inline JObject LocaleDisplayNames::getUiList(JObject arg0, jboolean arg1, JObject arg2) const
	{
		return callObjectMethod(
			"getUiList",
			"(Ljava/util/Set;ZLjava/util/Comparator;)Ljava/util/List;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline JObject LocaleDisplayNames::getUiListCompareWholeItems(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"getUiListCompareWholeItems",
			"(Ljava/util/Set;Ljava/util/Comparator;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JString LocaleDisplayNames::keyDisplayName(JString arg0) const
	{
		return callObjectMethod(
			"keyDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString LocaleDisplayNames::keyValueDisplayName(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"keyValueDisplayName",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString LocaleDisplayNames::languageDisplayName(JString arg0) const
	{
		return callObjectMethod(
			"languageDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString LocaleDisplayNames::localeDisplayName(android::icu::util::ULocale arg0) const
	{
		return callObjectMethod(
			"localeDisplayName",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString LocaleDisplayNames::localeDisplayName(JString arg0) const
	{
		return callObjectMethod(
			"localeDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString LocaleDisplayNames::localeDisplayName(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"localeDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString LocaleDisplayNames::regionDisplayName(JString arg0) const
	{
		return callObjectMethod(
			"regionDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString LocaleDisplayNames::scriptDisplayName(jint arg0) const
	{
		return callObjectMethod(
			"scriptDisplayName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString LocaleDisplayNames::scriptDisplayName(JString arg0) const
	{
		return callObjectMethod(
			"scriptDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString LocaleDisplayNames::variantDisplayName(JString arg0) const
	{
		return callObjectMethod(
			"variantDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
