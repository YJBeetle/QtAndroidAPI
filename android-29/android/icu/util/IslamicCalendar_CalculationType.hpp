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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IslamicCalendar_CalculationType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		IslamicCalendar_CalculationType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::util

