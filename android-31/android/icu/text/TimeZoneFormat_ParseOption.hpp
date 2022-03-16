#pragma once

#include "../../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class TimeZoneFormat_ParseOption : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::TimeZoneFormat_ParseOption ALL_STYLES();
		static android::icu::text::TimeZoneFormat_ParseOption TZ_DATABASE_ABBREVIATIONS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeZoneFormat_ParseOption(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TimeZoneFormat_ParseOption(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::TimeZoneFormat_ParseOption valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

