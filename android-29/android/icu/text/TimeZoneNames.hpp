#pragma once

#include "./TimeZoneNames_NameType.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./TimeZoneNames.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::text::TimeZoneNames TimeZoneNames::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.TimeZoneNames",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/TimeZoneNames;",
			arg0.object()
		);
	}
	inline android::icu::text::TimeZoneNames TimeZoneNames::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.TimeZoneNames",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/TimeZoneNames;",
			arg0.object()
		);
	}
	inline android::icu::text::TimeZoneNames TimeZoneNames::getTZDBInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.TimeZoneNames",
			"getTZDBInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/TimeZoneNames;",
			arg0.object()
		);
	}
	inline JObject TimeZoneNames::getAvailableMetaZoneIDs() const
	{
		return callObjectMethod(
			"getAvailableMetaZoneIDs",
			"()Ljava/util/Set;"
		);
	}
	inline JObject TimeZoneNames::getAvailableMetaZoneIDs(JString arg0) const
	{
		return callObjectMethod(
			"getAvailableMetaZoneIDs",
			"(Ljava/lang/String;)Ljava/util/Set;",
			arg0.object<jstring>()
		);
	}
	inline JString TimeZoneNames::getDisplayName(JString arg0, android::icu::text::TimeZoneNames_NameType arg1, jlong arg2) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;J)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	inline JString TimeZoneNames::getExemplarLocationName(JString arg0) const
	{
		return callObjectMethod(
			"getExemplarLocationName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString TimeZoneNames::getMetaZoneDisplayName(JString arg0, android::icu::text::TimeZoneNames_NameType arg1) const
	{
		return callObjectMethod(
			"getMetaZoneDisplayName",
			"(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString TimeZoneNames::getMetaZoneID(JString arg0, jlong arg1) const
	{
		return callObjectMethod(
			"getMetaZoneID",
			"(Ljava/lang/String;J)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString TimeZoneNames::getReferenceZoneID(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getReferenceZoneID",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString TimeZoneNames::getTimeZoneDisplayName(JString arg0, android::icu::text::TimeZoneNames_NameType arg1) const
	{
		return callObjectMethod(
			"getTimeZoneDisplayName",
			"(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::icu::text

// Base class headers

