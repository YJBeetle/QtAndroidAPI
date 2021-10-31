#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class TimeZoneFormat_GMTOffsetPatternType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NEGATIVE_H();
		static QAndroidJniObject NEGATIVE_HM();
		static QAndroidJniObject NEGATIVE_HMS();
		static QAndroidJniObject POSITIVE_H();
		static QAndroidJniObject POSITIVE_HM();
		static QAndroidJniObject POSITIVE_HMS();
		
		TimeZoneFormat_GMTOffsetPatternType(QAndroidJniObject obj);
		// Constructors
		TimeZoneFormat_GMTOffsetPatternType() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

