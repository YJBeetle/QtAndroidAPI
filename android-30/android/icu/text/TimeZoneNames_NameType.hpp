#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class TimeZoneNames_NameType : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::TimeZoneNames_NameType EXEMPLAR_LOCATION();
		static android::icu::text::TimeZoneNames_NameType LONG_DAYLIGHT();
		static android::icu::text::TimeZoneNames_NameType LONG_GENERIC();
		static android::icu::text::TimeZoneNames_NameType LONG_STANDARD();
		static android::icu::text::TimeZoneNames_NameType SHORT_DAYLIGHT();
		static android::icu::text::TimeZoneNames_NameType SHORT_GENERIC();
		static android::icu::text::TimeZoneNames_NameType SHORT_STANDARD();
		
		// QJniObject forward
		template<typename ...Ts> explicit TimeZoneNames_NameType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TimeZoneNames_NameType(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::TimeZoneNames_NameType valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

