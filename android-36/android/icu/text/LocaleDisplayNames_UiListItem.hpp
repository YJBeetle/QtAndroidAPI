#pragma once

#include "../util/ULocale.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./LocaleDisplayNames_UiListItem.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::util::ULocale LocaleDisplayNames_UiListItem::minimized()
	{
		return getObjectField(
			"minimized",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale LocaleDisplayNames_UiListItem::modified()
	{
		return getObjectField(
			"modified",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline JString LocaleDisplayNames_UiListItem::nameInDisplayLocale()
	{
		return getObjectField(
			"nameInDisplayLocale",
			"Ljava/lang/String;"
		);
	}
	inline JString LocaleDisplayNames_UiListItem::nameInSelf()
	{
		return getObjectField(
			"nameInSelf",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline LocaleDisplayNames_UiListItem::LocaleDisplayNames_UiListItem(android::icu::util::ULocale arg0, android::icu::util::ULocale arg1, JString arg2, JString arg3)
		: JObject(
			"android.icu.text.LocaleDisplayNames$UiListItem",
			"(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		) {}
	
	// Methods
	inline JObject LocaleDisplayNames_UiListItem::getComparator(JObject arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames$UiListItem",
			"getComparator",
			"(Ljava/util/Comparator;Z)Ljava/util/Comparator;",
			arg0.object(),
			arg1
		);
	}
	inline jboolean LocaleDisplayNames_UiListItem::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint LocaleDisplayNames_UiListItem::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString LocaleDisplayNames_UiListItem::toString() const
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
