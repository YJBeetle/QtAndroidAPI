#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class TimeZoneNames_NameType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject EXEMPLAR_LOCATION();
		static QAndroidJniObject LONG_DAYLIGHT();
		static QAndroidJniObject LONG_GENERIC();
		static QAndroidJniObject LONG_STANDARD();
		static QAndroidJniObject SHORT_DAYLIGHT();
		static QAndroidJniObject SHORT_GENERIC();
		static QAndroidJniObject SHORT_STANDARD();
		
		TimeZoneNames_NameType(QAndroidJniObject obj);
		// Constructors
		TimeZoneNames_NameType() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::icu::text

