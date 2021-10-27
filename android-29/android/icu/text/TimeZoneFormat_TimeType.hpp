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
		
		TimeZoneFormat_TimeType(QAndroidJniObject obj);
		// Constructors
		TimeZoneFormat_TimeType() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::icu::text

