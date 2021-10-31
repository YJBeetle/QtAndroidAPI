#include "../content/Context.hpp"
#include "./SeekBar.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	SeekBar::SeekBar(QJniObject obj) : android::widget::AbsSeekBar(obj) {}
	
	// Constructors
	SeekBar::SeekBar(android::content::Context arg0)
		: android::widget::AbsSeekBar(
			"android.widget.SeekBar",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	SeekBar::SeekBar(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::AbsSeekBar(
			"android.widget.SeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	SeekBar::SeekBar(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::widget::AbsSeekBar(
			"android.widget.SeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	SeekBar::SeekBar(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::widget::AbsSeekBar(
			"android.widget.SeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jstring SeekBar::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void SeekBar::setOnSeekBarChangeListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnSeekBarChangeListener",
			"(Landroid/widget/SeekBar$OnSeekBarChangeListener;)V",
			arg0.object()
		);
	}
} // namespace android::widget

