#pragma once

#include "../../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class CompactDecimalFormat_CompactStyle : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::CompactDecimalFormat_CompactStyle LONG();
		static android::icu::text::CompactDecimalFormat_CompactStyle SHORT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CompactDecimalFormat_CompactStyle(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		CompactDecimalFormat_CompactStyle(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::CompactDecimalFormat_CompactStyle valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

