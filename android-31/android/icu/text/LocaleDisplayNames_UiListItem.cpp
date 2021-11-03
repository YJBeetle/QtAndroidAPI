#include "../util/ULocale.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	JString LocaleDisplayNames_UiListItem::nameInDisplayLocale()
	{
		return getObjectField(
			"nameInDisplayLocale",
			"Ljava/lang/String;"
		);
	}
	JString LocaleDisplayNames_UiListItem::nameInSelf()
	{
		return getObjectField(
			"nameInSelf",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	LocaleDisplayNames_UiListItem::LocaleDisplayNames_UiListItem(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	LocaleDisplayNames_UiListItem::LocaleDisplayNames_UiListItem(android::icu::util::ULocale arg0, android::icu::util::ULocale arg1, JString arg2, JString arg3)
		: JObject(
			"android.icu.text.LocaleDisplayNames$UiListItem",
			"(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		) {}
	
	// Methods
	JObject LocaleDisplayNames_UiListItem::getComparator(JObject arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames$UiListItem",
			"getComparator",
			"(Ljava/util/Comparator;Z)Ljava/util/Comparator;",
			arg0.object(),
			arg1
		);
	}
	jboolean LocaleDisplayNames_UiListItem::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint LocaleDisplayNames_UiListItem::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString LocaleDisplayNames_UiListItem::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

