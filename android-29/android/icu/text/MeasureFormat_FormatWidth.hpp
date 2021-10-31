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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MeasureFormat_FormatWidth(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		MeasureFormat_FormatWidth(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

