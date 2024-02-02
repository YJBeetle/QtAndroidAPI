#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class DateFormat_HourCycle : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::DateFormat_HourCycle HOUR_CYCLE_11();
		static android::icu::text::DateFormat_HourCycle HOUR_CYCLE_12();
		static android::icu::text::DateFormat_HourCycle HOUR_CYCLE_23();
		static android::icu::text::DateFormat_HourCycle HOUR_CYCLE_24();
		
		// QJniObject forward
		template<typename ...Ts> explicit DateFormat_HourCycle(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		DateFormat_HourCycle(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::DateFormat_HourCycle valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

