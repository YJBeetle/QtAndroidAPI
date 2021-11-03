#include "./TimeZoneNames_NameType.hpp"
#include "../util/ULocale.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.hpp"
#include "./TimeZoneNames.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	TimeZoneNames::TimeZoneNames(QAndroidJniObject obj) : JObject(obj) {}
	
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
	JObject TimeZoneNames::getAvailableMetaZoneIDs(JString arg0)
	{
		return callObjectMethod(
			"getAvailableMetaZoneIDs",
			"(Ljava/lang/String;)Ljava/util/Set;",
			arg0.object<jstring>()
		);
	}
	JString TimeZoneNames::getDisplayName(JString arg0, android::icu::text::TimeZoneNames_NameType arg1, jlong arg2)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;J)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	JString TimeZoneNames::getExemplarLocationName(JString arg0)
	{
		return callObjectMethod(
			"getExemplarLocationName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString TimeZoneNames::getMetaZoneDisplayName(JString arg0, android::icu::text::TimeZoneNames_NameType arg1)
	{
		return callObjectMethod(
			"getMetaZoneDisplayName",
			"(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString TimeZoneNames::getMetaZoneID(JString arg0, jlong arg1)
	{
		return callObjectMethod(
			"getMetaZoneID",
			"(Ljava/lang/String;J)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1
		);
	}
	JString TimeZoneNames::getReferenceZoneID(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"getReferenceZoneID",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString TimeZoneNames::getTimeZoneDisplayName(JString arg0, android::icu::text::TimeZoneNames_NameType arg1)
	{
		return callObjectMethod(
			"getTimeZoneDisplayName",
			"(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::icu::text

