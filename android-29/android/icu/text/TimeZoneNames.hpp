#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class TimeZoneNames : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeZoneNames(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TimeZoneNames(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance(java::util::Locale arg0);
		static QAndroidJniObject getTZDBInstance(android::icu::util::ULocale arg0);
		QAndroidJniObject getAvailableMetaZoneIDs();
		QAndroidJniObject getAvailableMetaZoneIDs(jstring arg0);
		jstring getDisplayName(jstring arg0, android::icu::text::TimeZoneNames_NameType arg1, jlong arg2);
		jstring getExemplarLocationName(jstring arg0);
		jstring getMetaZoneDisplayName(jstring arg0, android::icu::text::TimeZoneNames_NameType arg1);
		jstring getMetaZoneID(jstring arg0, jlong arg1);
		jstring getReferenceZoneID(jstring arg0, jstring arg1);
		jstring getTimeZoneDisplayName(jstring arg0, android::icu::text::TimeZoneNames_NameType arg1);
	};
} // namespace android::icu::text

