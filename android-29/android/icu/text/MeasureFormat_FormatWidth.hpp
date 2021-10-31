#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class MeasureFormat_FormatWidth : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::MeasureFormat_FormatWidth NARROW();
		static android::icu::text::MeasureFormat_FormatWidth NUMERIC();
		static android::icu::text::MeasureFormat_FormatWidth SHORT();
		static android::icu::text::MeasureFormat_FormatWidth WIDE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MeasureFormat_FormatWidth(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		MeasureFormat_FormatWidth(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::MeasureFormat_FormatWidth valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

