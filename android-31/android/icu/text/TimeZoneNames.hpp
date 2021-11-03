#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class TimeZoneNames_NameType;
}
namespace android::icu::util
{
	class ULocale;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class TimeZoneNames : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeZoneNames(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TimeZoneNames(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::TimeZoneNames getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::TimeZoneNames getInstance(java::util::Locale arg0);
		static android::icu::text::TimeZoneNames getTZDBInstance(android::icu::util::ULocale arg0);
		JObject getAvailableMetaZoneIDs();
		JObject getAvailableMetaZoneIDs(jstring arg0);
		jstring getDisplayName(jstring arg0, android::icu::text::TimeZoneNames_NameType arg1, jlong arg2);
		jstring getExemplarLocationName(jstring arg0);
		jstring getMetaZoneDisplayName(jstring arg0, android::icu::text::TimeZoneNames_NameType arg1);
		jstring getMetaZoneID(jstring arg0, jlong arg1);
		jstring getReferenceZoneID(jstring arg0, jstring arg1);
		jstring getTimeZoneDisplayName(jstring arg0, android::icu::text::TimeZoneNames_NameType arg1);
	};
} // namespace android::icu::text

