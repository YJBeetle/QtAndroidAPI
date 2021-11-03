#pragma once

#include "./TtsSpan_SemioticClassBuilder.hpp"

namespace java::lang
{
	class Integer;
}

namespace android::text::style
{
	class TtsSpan_DateBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TtsSpan_DateBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_DateBuilder(QAndroidJniObject obj);
		
		// Constructors
		TtsSpan_DateBuilder();
		TtsSpan_DateBuilder(java::lang::Integer arg0, java::lang::Integer arg1, java::lang::Integer arg2, java::lang::Integer arg3);
		
		// Methods
		android::text::style::TtsSpan_DateBuilder setDay(jint arg0);
		android::text::style::TtsSpan_DateBuilder setMonth(jint arg0);
		android::text::style::TtsSpan_DateBuilder setWeekday(jint arg0);
		android::text::style::TtsSpan_DateBuilder setYear(jint arg0);
	};
} // namespace android::text::style

