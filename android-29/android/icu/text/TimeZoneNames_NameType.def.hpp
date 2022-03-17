#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class TimeZoneNames_NameType : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::TimeZoneNames_NameType EXEMPLAR_LOCATION();
		static android::icu::text::TimeZoneNames_NameType LONG_DAYLIGHT();
		static android::icu::text::TimeZoneNames_NameType LONG_GENERIC();
		static android::icu::text::TimeZoneNames_NameType LONG_STANDARD();
		static android::icu::text::TimeZoneNames_NameType SHORT_DAYLIGHT();
		static android::icu::text::TimeZoneNames_NameType SHORT_GENERIC();
		static android::icu::text::TimeZoneNames_NameType SHORT_STANDARD();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeZoneNames_NameType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TimeZoneNames_NameType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::TimeZoneNames_NameType valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

