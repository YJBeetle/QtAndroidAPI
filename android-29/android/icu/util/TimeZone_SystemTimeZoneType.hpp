#pragma once

#include "../../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::icu::util
{
	class TimeZone_SystemTimeZoneType : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::util::TimeZone_SystemTimeZoneType ANY();
		static android::icu::util::TimeZone_SystemTimeZoneType CANONICAL();
		static android::icu::util::TimeZone_SystemTimeZoneType CANONICAL_LOCATION();
		
		// QJniObject forward
		template<typename ...Ts> explicit TimeZone_SystemTimeZoneType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TimeZone_SystemTimeZoneType(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::util::TimeZone_SystemTimeZoneType valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::util

