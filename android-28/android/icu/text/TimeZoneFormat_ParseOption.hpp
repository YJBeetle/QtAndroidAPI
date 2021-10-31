#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class TimeZoneFormat_ParseOption : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::TimeZoneFormat_ParseOption ALL_STYLES();
		static android::icu::text::TimeZoneFormat_ParseOption TZ_DATABASE_ABBREVIATIONS();
		
		// QJniObject forward
		template<typename ...Ts> explicit TimeZoneFormat_ParseOption(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TimeZoneFormat_ParseOption(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::TimeZoneFormat_ParseOption valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

