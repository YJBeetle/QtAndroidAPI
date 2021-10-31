#include "../util/ULocale.hpp"
#include "./LocaleDisplayNames_UiListItem.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::util::ULocale LocaleDisplayNames_UiListItem::minimized()
	{
		return getObjectField(
			"minimized",
			"Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale LocaleDisplayNames_UiListItem::modified()
	{
		return getObjectField(
			"modified",
			"Landroid/icu/util/ULocale;"
		);
	}
	jstring LocaleDisplayNames_UiListItem::nameInDisplayLocale()
	{
		return getObjectField(
			"nameInDisplayLocale",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LocaleDisplayNames_UiListItem::nameInSelf()
	{
		return getObjectField(
			"nameInSelf",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	LocaleDisplayNames_UiListItem::LocaleDisplayNames_UiListItem(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	LocaleDisplayNames_UiListItem::LocaleDisplayNames_UiListItem(android::icu::util::ULocale arg0, android::icu::util::ULocale arg1, jstring arg2, jstring arg3)
		: __JniBaseClass(
			"android.icu.text.LocaleDisplayNames$UiListItem",
			"(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	__JniBaseClass LocaleDisplayNames_UiListItem::getComparator(__JniBaseClass arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames$UiListItem",
			"getComparator",
			"(Ljava/util/Comparator;Z)Ljava/util/Comparator;",
			arg0.object(),
			arg1
		);
	}
	jboolean LocaleDisplayNames_UiListItem::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint LocaleDisplayNames_UiListItem::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring LocaleDisplayNames_UiListItem::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

