#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

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
		DateTimePatternGenerator_DisplayWidth(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::DateTimePatternGenerator_DisplayWidth valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

