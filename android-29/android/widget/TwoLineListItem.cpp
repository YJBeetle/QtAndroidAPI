#include "../content/Context.hpp"
#include "./TextView.hpp"
#include "./TwoLineListItem.hpp"

namespace android::widget
{
	// Fields
	
	TwoLineListItem::TwoLineListItem(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TwoLineListItem::TwoLineListItem(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TwoLineListItem",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	TwoLineListItem::TwoLineListItem(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TwoLineListItem",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	TwoLineListItem::TwoLineListItem(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TwoLineListItem",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	TwoLineListItem::TwoLineListItem(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TwoLineListItem",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jstring TwoLineListItem::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject TwoLineListItem::getText1()
	{
		return __thiz.callObjectMethod(
			"getText1",
			"()Landroid/widget/TextView;"
		);
	}
	QAndroidJniObject TwoLineListItem::getText2()
	{
		return __thiz.callObjectMethod(
			"getText2",
			"()Landroid/widget/TextView;"
		);
	}
} // namespace android::widget

