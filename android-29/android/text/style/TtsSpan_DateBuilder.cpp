#include "../../../java/lang/Integer.hpp"
#include "./TtsSpan_DateBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	TtsSpan_DateBuilder::TtsSpan_DateBuilder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TtsSpan_DateBuilder::TtsSpan_DateBuilder()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$DateBuilder",
			"()V"
		);
	}
	TtsSpan_DateBuilder::TtsSpan_DateBuilder(java::lang::Integer &arg0, java::lang::Integer &arg1, java::lang::Integer &arg2, java::lang::Integer &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$DateBuilder",
			"(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_DateBuilder::setDay(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setDay",
			"(I)Landroid/text/style/TtsSpan$DateBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_DateBuilder::setMonth(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMonth",
			"(I)Landroid/text/style/TtsSpan$DateBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_DateBuilder::setWeekday(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setWeekday",
			"(I)Landroid/text/style/TtsSpan$DateBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_DateBuilder::setYear(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setYear",
			"(I)Landroid/text/style/TtsSpan$DateBuilder;",
			arg0
		);
	}
} // namespace android::text::style

