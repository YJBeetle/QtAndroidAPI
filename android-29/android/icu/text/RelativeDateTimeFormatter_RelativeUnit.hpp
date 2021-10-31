#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class RelativeDateTimeFormatter_RelativeUnit : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DAYS();
		static QAndroidJniObject HOURS();
		static QAndroidJniObject MINUTES();
		static QAndroidJniObject MONTHS();
		static QAndroidJniObject SECONDS();
		static QAndroidJniObject WEEKS();
		static QAndroidJniObject YEARS();
		
		RelativeDateTimeFormatter_RelativeUnit(QAndroidJniObject obj);
		// Constructors
		RelativeDateTimeFormatter_RelativeUnit() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

