#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "./RelativeLayout_LayoutParams.hpp"

namespace android::widget
{
	// Fields
	jboolean RelativeLayout_LayoutParams::alignWithParent()
	{
		return __thiz.getField<jboolean>(
			"alignWithParent"
		);
	}
	
	RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RelativeLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RelativeLayout$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(android::widget::RelativeLayout_LayoutParams &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RelativeLayout$LayoutParams",
			"(Landroid/widget/RelativeLayout$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RelativeLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RelativeLayout$LayoutParams",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	void RelativeLayout_LayoutParams::addRule(jint arg0)
	{
		__thiz.callMethod<void>(
			"addRule",
			"(I)V",
			arg0
		);
	}
	void RelativeLayout_LayoutParams::addRule(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addRule",
			"(II)V",
			arg0,
			arg1
		);
	}
	jstring RelativeLayout_LayoutParams::debug(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"debug",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint RelativeLayout_LayoutParams::getRule(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getRule",
			"(I)I",
			arg0
		);
	}
	jintArray RelativeLayout_LayoutParams::getRules()
	{
		return __thiz.callObjectMethod(
			"getRules",
			"()[I"
		).object<jintArray>();
	}
	void RelativeLayout_LayoutParams::removeRule(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeRule",
			"(I)V",
			arg0
		);
	}
	void RelativeLayout_LayoutParams::resolveLayoutDirection(jint arg0)
	{
		__thiz.callMethod<void>(
			"resolveLayoutDirection",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

