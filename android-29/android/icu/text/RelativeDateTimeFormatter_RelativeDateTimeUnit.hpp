#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class RelativeDateTimeFormatter_RelativeDateTimeUnit : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DAY();
		static QAndroidJniObject FRIDAY();
		static QAndroidJniObject HOUR();
		static QAndroidJniObject MINUTE();
		static QAndroidJniObject MONDAY();
		static QAndroidJniObject MONTH();
		static QAndroidJniObject QUARTER();
		static QAndroidJniObject SATURDAY();
		static QAndroidJniObject SECOND();
		static QAndroidJniObject SUNDAY();
		static QAndroidJniObject THURSDAY();
		static QAndroidJniObject TUESDAY();
		static QAndroidJniObject WEDNESDAY();
		static QAndroidJniObject WEEK();
		static QAndroidJniObject YEAR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RelativeDateTimeFormatter_RelativeDateTimeUnit(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		RelativeDateTimeFormatter_RelativeDateTimeUnit(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

