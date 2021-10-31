#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::util
{
	class TimeZone_SystemTimeZoneType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ANY();
		static QAndroidJniObject CANONICAL();
		static QAndroidJniObject CANONICAL_LOCATION();
		
		TimeZone_SystemTimeZoneType(QAndroidJniObject obj);
		// Constructors
		TimeZone_SystemTimeZoneType() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::util

