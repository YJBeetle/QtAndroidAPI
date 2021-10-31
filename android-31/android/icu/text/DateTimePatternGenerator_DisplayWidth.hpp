#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class DateTimePatternGenerator_DisplayWidth : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::DateTimePatternGenerator_DisplayWidth ABBREVIATED();
		static android::icu::text::DateTimePatternGenerator_DisplayWidth NARROW();
		static android::icu::text::DateTimePatternGenerator_DisplayWidth WIDE();
		
		// QJniObject forward
		template<typename ...Ts> explicit DateTimePatternGenerator_DisplayWidth(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		DateTimePatternGenerator_DisplayWidth(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::DateTimePatternGenerator_DisplayWidth valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

