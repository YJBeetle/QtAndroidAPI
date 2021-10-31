#include "../content/Context.hpp"
#include "../content/res/TypedArray.hpp"
#include "./animation/LayoutAnimationController_AnimationParameters.hpp"
#include "./ViewGroup_LayoutParams.hpp"

namespace android::view
{
	// Fields
	jint ViewGroup_LayoutParams::FILL_PARENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup$LayoutParams",
			"FILL_PARENT"
		);
	}
	jint ViewGroup_LayoutParams::MATCH_PARENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup$LayoutParams",
			"MATCH_PARENT"
		);
	}
	jint ViewGroup_LayoutParams::WRAP_CONTENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup$LayoutParams",
			"WRAP_CONTENT"
		);
	}
	jint ViewGroup_LayoutParams::height()
	{
		return __thiz.getField<jint>(
			"height"
		);
	}
	QAndroidJniObject ViewGroup_LayoutParams::layoutAnimationParameters()
	{
		return __thiz.getObjectField(
			"layoutAnimationParameters",
			"Landroid/view/animation/LayoutAnimationController$AnimationParameters;"
		);
	}
	jint ViewGroup_LayoutParams::width()
	{
		return __thiz.getField<jint>(
			"width"
		);
	}
	
	ViewGroup_LayoutParams::ViewGroup_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ViewGroup_LayoutParams::ViewGroup_LayoutParams(android::view::ViewGroup_LayoutParams &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	ViewGroup_LayoutParams::ViewGroup_LayoutParams(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ViewGroup_LayoutParams::ViewGroup_LayoutParams(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup$LayoutParams",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	void ViewGroup_LayoutParams::resolveLayoutDirection(jint arg0)
	{
		__thiz.callMethod<void>(
			"resolveLayoutDirection",
			"(I)V",
			arg0
		);
	}
} // namespace android::view

