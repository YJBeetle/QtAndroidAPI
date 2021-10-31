#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class TimeZoneFormat_GMTOffsetPatternType : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::TimeZoneFormat_GMTOffsetPatternType NEGATIVE_H();
		static android::icu::text::TimeZoneFormat_GMTOffsetPatternType NEGATIVE_HM();
		static android::icu::text::TimeZoneFormat_GMTOffsetPatternType NEGATIVE_HMS();
		static android::icu::text::TimeZoneFormat_GMTOffsetPatternType POSITIVE_H();
		static android::icu::text::TimeZoneFormat_GMTOffsetPatternType POSITIVE_HM();
		static android::icu::text::TimeZoneFormat_GMTOffsetPatternType POSITIVE_HMS();
		
		// QJniObject forward
		template<typename ...Ts> explicit TimeZoneFormat_GMTOffsetPatternType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TimeZoneFormat_GMTOffsetPatternType(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::TimeZoneFormat_GMTOffsetPatternType valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

