#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class TimeZoneFormat_Style : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::TimeZoneFormat_Style EXEMPLAR_LOCATION();
		static android::icu::text::TimeZoneFormat_Style GENERIC_LOCATION();
		static android::icu::text::TimeZoneFormat_Style GENERIC_LONG();
		static android::icu::text::TimeZoneFormat_Style GENERIC_SHORT();
		static android::icu::text::TimeZoneFormat_Style ISO_BASIC_FIXED();
		static android::icu::text::TimeZoneFormat_Style ISO_BASIC_FULL();
		static android::icu::text::TimeZoneFormat_Style ISO_BASIC_LOCAL_FIXED();
		static android::icu::text::TimeZoneFormat_Style ISO_BASIC_LOCAL_FULL();
		static android::icu::text::TimeZoneFormat_Style ISO_BASIC_LOCAL_SHORT();
		static android::icu::text::TimeZoneFormat_Style ISO_BASIC_SHORT();
		static android::icu::text::TimeZoneFormat_Style ISO_EXTENDED_FIXED();
		static android::icu::text::TimeZoneFormat_Style ISO_EXTENDED_FULL();
		static android::icu::text::TimeZoneFormat_Style ISO_EXTENDED_LOCAL_FIXED();
		static android::icu::text::TimeZoneFormat_Style ISO_EXTENDED_LOCAL_FULL();
		static android::icu::text::TimeZoneFormat_Style LOCALIZED_GMT();
		static android::icu::text::TimeZoneFormat_Style LOCALIZED_GMT_SHORT();
		static android::icu::text::TimeZoneFormat_Style SPECIFIC_LONG();
		static android::icu::text::TimeZoneFormat_Style SPECIFIC_SHORT();
		static android::icu::text::TimeZoneFormat_Style ZONE_ID();
		static android::icu::text::TimeZoneFormat_Style ZONE_ID_SHORT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeZoneFormat_Style(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TimeZoneFormat_Style(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::TimeZoneFormat_Style valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

