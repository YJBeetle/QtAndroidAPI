#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

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
		MeasureFormat_FormatWidth(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::MeasureFormat_FormatWidth valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

