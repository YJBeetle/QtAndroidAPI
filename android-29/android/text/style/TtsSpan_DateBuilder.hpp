#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"
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
		
		TtsSpan_DateBuilder(QAndroidJniObject obj);
		// Constructors
		TtsSpan_DateBuilder();
		TtsSpan_DateBuilder(java::lang::Integer &arg0, java::lang::Integer &arg1, java::lang::Integer &arg2, java::lang::Integer &arg3);
		
		// Methods
		QAndroidJniObject setDay(jint arg0);
		QAndroidJniObject setMonth(jint arg0);
		QAndroidJniObject setWeekday(jint arg0);
		QAndroidJniObject setYear(jint arg0);
	};
} // namespace android::text::style

