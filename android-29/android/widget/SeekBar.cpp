#include "../content/Context.hpp"
#include "./SeekBar.hpp"

namespace android::widget
{
	// Fields
	
	SeekBar::SeekBar(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SeekBar::SeekBar(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SeekBar",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	SeekBar::SeekBar(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	SeekBar::SeekBar(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	SeekBar::SeekBar(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jstring SeekBar::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void SeekBar::setOnSeekBarChangeListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnSeekBarChangeListener",
			"(Landroid/widget/SeekBar$OnSeekBarChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::widget

