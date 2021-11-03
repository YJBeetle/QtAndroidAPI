#include "./TimeZoneNames_NameType.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./TimeZoneNames.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	TimeZoneNames::TimeZoneNames(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::TimeZoneNames TimeZoneNames::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.TimeZoneNames",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/TimeZoneNames;",
			arg0.object()
		);
	}
	android::icu::text::TimeZoneNames TimeZoneNames::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.TimeZoneNames",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/TimeZoneNames;",
			arg0.object()
		);
	}
	android::icu::text::TimeZoneNames TimeZoneNames::getTZDBInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.TimeZoneNames",
			"getTZDBInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/TimeZoneNames;",
			arg0.object()
		);
	}
	JObject TimeZoneNames::getAvailableMetaZoneIDs()
	{
		return callObjectMethod(
			"getAvailableMetaZoneIDs",
			"()Ljava/util/Set;"
		);
	}
	JObject TimeZoneNames::getAvailableMetaZoneIDs(jstring arg0)
	{
		return callObjectMethod(
			"getAvailableMetaZoneIDs",
			"(Ljava/lang/String;)Ljava/util/Set;",
			arg0
		);
	}
	jstring TimeZoneNames::getDisplayName(jstring arg0, android::icu::text::TimeZoneNames_NameType arg1, jlong arg2)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;J)Ljava/lang/String;",
			arg0,
			arg1.object(),
			arg2
		).object<jstring>();
	}
	jstring TimeZoneNames::getExemplarLocationName(jstring arg0)
	{
		return callObjectMethod(
			"getExemplarLocationName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TimeZoneNames::getMetaZoneDisplayName(jstring arg0, android::icu::text::TimeZoneNames_NameType arg1)
	{
		return callObjectMethod(
			"getMetaZoneDisplayName",
			"(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jstring TimeZoneNames::getMetaZoneID(jstring arg0, jlong arg1)
	{
		return callObjectMethod(
			"getMetaZoneID",
			"(Ljava/lang/String;J)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring TimeZoneNames::getReferenceZoneID(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"getReferenceZoneID",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring TimeZoneNames::getTimeZoneDisplayName(jstring arg0, android::icu::text::TimeZoneNames_NameType arg1)
	{
		return callObjectMethod(
			"getTimeZoneDisplayName",
			"(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
} // namespace android::icu::text

