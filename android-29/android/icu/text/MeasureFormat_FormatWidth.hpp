#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class MeasureFormat_FormatWidth : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NARROW();
		static QAndroidJniObject NUMERIC();
		static QAndroidJniObject SHORT();
		static QAndroidJniObject WIDE();
		
		MeasureFormat_FormatWidth(QAndroidJniObject obj);
		// Constructors
		MeasureFormat_FormatWidth() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::icu::text

