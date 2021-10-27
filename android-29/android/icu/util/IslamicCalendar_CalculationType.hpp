#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::util
{
	class IslamicCalendar_CalculationType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ISLAMIC();
		static QAndroidJniObject ISLAMIC_CIVIL();
		static QAndroidJniObject ISLAMIC_TBLA();
		static QAndroidJniObject ISLAMIC_UMALQURA();
		
		IslamicCalendar_CalculationType(QAndroidJniObject obj);
		// Constructors
		IslamicCalendar_CalculationType() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::icu::util

