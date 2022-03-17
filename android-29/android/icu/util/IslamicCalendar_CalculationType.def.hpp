#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::util
{
	class IslamicCalendar_CalculationType : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::util::IslamicCalendar_CalculationType ISLAMIC();
		static android::icu::util::IslamicCalendar_CalculationType ISLAMIC_CIVIL();
		static android::icu::util::IslamicCalendar_CalculationType ISLAMIC_TBLA();
		static android::icu::util::IslamicCalendar_CalculationType ISLAMIC_UMALQURA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IslamicCalendar_CalculationType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		IslamicCalendar_CalculationType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::util::IslamicCalendar_CalculationType valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::util

