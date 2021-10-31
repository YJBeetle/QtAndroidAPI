#include "../util/ULocale.hpp"
#include "./LocaleDisplayNames_UiListItem.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject LocaleDisplayNames_UiListItem::minimized()
	{
		return __thiz.getObjectField(
			"minimized",
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject LocaleDisplayNames_UiListItem::modified()
	{
		return __thiz.getObjectField(
			"modified",
			"Landroid/icu/util/ULocale;"
		);
	}
	jstring LocaleDisplayNames_UiListItem::nameInDisplayLocale()
	{
		return __thiz.getObjectField(
			"nameInDisplayLocale",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LocaleDisplayNames_UiListItem::nameInSelf()
	{
		return __thiz.getObjectField(
			"nameInSelf",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	LocaleDisplayNames_UiListItem::LocaleDisplayNames_UiListItem(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LocaleDisplayNames_UiListItem::LocaleDisplayNames_UiListItem(android::icu::util::ULocale arg0, android::icu::util::ULocale arg1, jstring arg2, jstring arg3)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.LocaleDisplayNames$UiListItem",
			"(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	QAndroidJniObject LocaleDisplayNames_UiListItem::getComparator(__JniBaseClass arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames$UiListItem",
			"getComparator",
			"(Ljava/util/Comparator;Z)Ljava/util/Comparator;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean LocaleDisplayNames_UiListItem::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint LocaleDisplayNames_UiListItem::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring LocaleDisplayNames_UiListItem::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

