#include "../../../java/lang/Integer.hpp"
#include "./TtsSpan_DateBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	TtsSpan_DateBuilder::TtsSpan_DateBuilder(QAndroidJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
	
	// Constructors
	TtsSpan_DateBuilder::TtsSpan_DateBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$DateBuilder",
			"()V"
		) {}
	TtsSpan_DateBuilder::TtsSpan_DateBuilder(java::lang::Integer arg0, java::lang::Integer arg1, java::lang::Integer arg2, java::lang::Integer arg3)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$DateBuilder",
			"(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	QAndroidJniObject TtsSpan_DateBuilder::setDay(jint arg0)
	{
		return callObjectMethod(
			"setDay",
			"(I)Landroid/text/style/TtsSpan$DateBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_DateBuilder::setMonth(jint arg0)
	{
		return callObjectMethod(
			"setMonth",
			"(I)Landroid/text/style/TtsSpan$DateBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_DateBuilder::setWeekday(jint arg0)
	{
		return callObjectMethod(
			"setWeekday",
			"(I)Landroid/text/style/TtsSpan$DateBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_DateBuilder::setYear(jint arg0)
	{
		return callObjectMethod(
			"setYear",
			"(I)Landroid/text/style/TtsSpan$DateBuilder;",
			arg0
		);
	}
} // namespace android::text::style

