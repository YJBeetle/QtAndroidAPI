#include "./TimeZoneNames_NameType.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./TimeZoneNames.hpp"

namespace android::icu::text
{
	// Fields
	
	TimeZoneNames::TimeZoneNames(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject TimeZoneNames::getInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneNames",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/TimeZoneNames;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZoneNames::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneNames",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/TimeZoneNames;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZoneNames::getTZDBInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneNames",
			"getTZDBInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/TimeZoneNames;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZoneNames::getAvailableMetaZoneIDs()
	{
		return __thiz.callObjectMethod(
			"getAvailableMetaZoneIDs",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject TimeZoneNames::getAvailableMetaZoneIDs(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAvailableMetaZoneIDs",
			"(Ljava/lang/String;)Ljava/util/Set;",
			arg0
		);
	}
	jstring TimeZoneNames::getDisplayName(jstring arg0, android::icu::text::TimeZoneNames_NameType arg1, jlong arg2)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;J)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		).object<jstring>();
	}
	jstring TimeZoneNames::getExemplarLocationName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getExemplarLocationName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TimeZoneNames::getMetaZoneDisplayName(jstring arg0, android::icu::text::TimeZoneNames_NameType arg1)
	{
		return __thiz.callObjectMethod(
			"getMetaZoneDisplayName",
			"(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring TimeZoneNames::getMetaZoneID(jstring arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"getMetaZoneID",
			"(Ljava/lang/String;J)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring TimeZoneNames::getReferenceZoneID(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getReferenceZoneID",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring TimeZoneNames::getTimeZoneDisplayName(jstring arg0, android::icu::text::TimeZoneNames_NameType arg1)
	{
		return __thiz.callObjectMethod(
			"getTimeZoneDisplayName",
			"(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
} // namespace android::icu::text

