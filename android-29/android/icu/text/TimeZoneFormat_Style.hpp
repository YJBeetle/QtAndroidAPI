#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class TimeZoneFormat_Style : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject EXEMPLAR_LOCATION();
		static QAndroidJniObject GENERIC_LOCATION();
		static QAndroidJniObject GENERIC_LONG();
		static QAndroidJniObject GENERIC_SHORT();
		static QAndroidJniObject ISO_BASIC_FIXED();
		static QAndroidJniObject ISO_BASIC_FULL();
		static QAndroidJniObject ISO_BASIC_LOCAL_FIXED();
		static QAndroidJniObject ISO_BASIC_LOCAL_FULL();
		static QAndroidJniObject ISO_BASIC_LOCAL_SHORT();
		static QAndroidJniObject ISO_BASIC_SHORT();
		static QAndroidJniObject ISO_EXTENDED_FIXED();
		static QAndroidJniObject ISO_EXTENDED_FULL();
		static QAndroidJniObject ISO_EXTENDED_LOCAL_FIXED();
		static QAndroidJniObject ISO_EXTENDED_LOCAL_FULL();
		static QAndroidJniObject LOCALIZED_GMT();
		static QAndroidJniObject LOCALIZED_GMT_SHORT();
		static QAndroidJniObject SPECIFIC_LONG();
		static QAndroidJniObject SPECIFIC_SHORT();
		static QAndroidJniObject ZONE_ID();
		static QAndroidJniObject ZONE_ID_SHORT();
		
		TimeZoneFormat_Style(QAndroidJniObject obj);
		// Constructors
		TimeZoneFormat_Style() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

