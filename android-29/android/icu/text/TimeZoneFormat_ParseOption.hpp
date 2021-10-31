#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class TimeZoneFormat_ParseOption : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ALL_STYLES();
		static QAndroidJniObject TZ_DATABASE_ABBREVIATIONS();
		
		TimeZoneFormat_ParseOption(QAndroidJniObject obj);
		// Constructors
		TimeZoneFormat_ParseOption() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

