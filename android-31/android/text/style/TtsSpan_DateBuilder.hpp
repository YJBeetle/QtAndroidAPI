#pragma once

#include "../../../java/lang/Integer.def.hpp"
#include "./TtsSpan_DateBuilder.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline TtsSpan_DateBuilder::TtsSpan_DateBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$DateBuilder",
			"()V"
		) {}
	inline TtsSpan_DateBuilder::TtsSpan_DateBuilder(java::lang::Integer arg0, java::lang::Integer arg1, java::lang::Integer arg2, java::lang::Integer arg3)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$DateBuilder",
			"(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline android::text::style::TtsSpan_DateBuilder TtsSpan_DateBuilder::setDay(jint arg0) const
	{
		return callObjectMethod(
			"setDay",
			"(I)Landroid/text/style/TtsSpan$DateBuilder;",
			arg0
		);
	}
	inline android::text::style::TtsSpan_DateBuilder TtsSpan_DateBuilder::setMonth(jint arg0) const
	{
		return callObjectMethod(
			"setMonth",
			"(I)Landroid/text/style/TtsSpan$DateBuilder;",
			arg0
		);
	}
	inline android::text::style::TtsSpan_DateBuilder TtsSpan_DateBuilder::setWeekday(jint arg0) const
	{
		return callObjectMethod(
			"setWeekday",
			"(I)Landroid/text/style/TtsSpan$DateBuilder;",
			arg0
		);
	}
	inline android::text::style::TtsSpan_DateBuilder TtsSpan_DateBuilder::setYear(jint arg0) const
	{
		return callObjectMethod(
			"setYear",
			"(I)Landroid/text/style/TtsSpan$DateBuilder;",
			arg0
		);
	}
} // namespace android::text::style

// Base class headers
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::style;
#endif
