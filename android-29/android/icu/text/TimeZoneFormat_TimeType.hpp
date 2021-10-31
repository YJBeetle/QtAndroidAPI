#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class TimeZoneFormat_TimeType : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::TimeZoneFormat_TimeType DAYLIGHT();
		static android::icu::text::TimeZoneFormat_TimeType STANDARD();
		static android::icu::text::TimeZoneFormat_TimeType UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeZoneFormat_TimeType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TimeZoneFormat_TimeType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::TimeZoneFormat_TimeType valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

