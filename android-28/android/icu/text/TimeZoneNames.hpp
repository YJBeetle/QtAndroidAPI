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
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit TimeZoneNames(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TimeZoneNames(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::TimeZoneNames getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::TimeZoneNames getInstance(java::util::Locale arg0);
		static android::icu::text::TimeZoneNames getTZDBInstance(android::icu::util::ULocale arg0);
		JObject getAvailableMetaZoneIDs() const;
		JObject getAvailableMetaZoneIDs(JString arg0) const;
		JString getDisplayName(JString arg0, android::icu::text::TimeZoneNames_NameType arg1, jlong arg2) const;
		JString getExemplarLocationName(JString arg0) const;
		JString getMetaZoneDisplayName(JString arg0, android::icu::text::TimeZoneNames_NameType arg1) const;
		JString getMetaZoneID(JString arg0, jlong arg1) const;
		JString getReferenceZoneID(JString arg0, JString arg1) const;
		JString getTimeZoneDisplayName(JString arg0, android::icu::text::TimeZoneNames_NameType arg1) const;
	};
} // namespace android::icu::text

