#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class RelativeDateTimeFormatter_AbsoluteUnit : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DAY();
		static QAndroidJniObject FRIDAY();
		static QAndroidJniObject MONDAY();
		static QAndroidJniObject MONTH();
		static QAndroidJniObject NOW();
		static QAndroidJniObject SATURDAY();
		static QAndroidJniObject SUNDAY();
		static QAndroidJniObject THURSDAY();
		static QAndroidJniObject TUESDAY();
		static QAndroidJniObject WEDNESDAY();
		static QAndroidJniObject WEEK();
		static QAndroidJniObject YEAR();
		
		RelativeDateTimeFormatter_AbsoluteUnit(QAndroidJniObject obj);
		// Constructors
		RelativeDateTimeFormatter_AbsoluteUnit() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::icu::text

