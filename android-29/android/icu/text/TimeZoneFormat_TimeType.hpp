#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class TimeZoneFormat_TimeType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DAYLIGHT();
		static QAndroidJniObject STANDARD();
		static QAndroidJniObject UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeZoneFormat_TimeType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TimeZoneFormat_TimeType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

