#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./LinearLayout_LayoutParams.hpp"
#include "./LinearLayout.hpp"

namespace android::widget
{
	// Fields
	jint LinearLayout::HORIZONTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.LinearLayout",
			"HORIZONTAL"
		);
	}
	jint LinearLayout::SHOW_DIVIDER_BEGINNING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.LinearLayout",
			"SHOW_DIVIDER_BEGINNING"
		);
	}
	jint LinearLayout::SHOW_DIVIDER_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.LinearLayout",
			"SHOW_DIVIDER_END"
		);
	}
	jint LinearLayout::SHOW_DIVIDER_MIDDLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.LinearLayout",
			"SHOW_DIVIDER_MIDDLE"
		);
	}
	jint LinearLayout::SHOW_DIVIDER_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.LinearLayout",
			"SHOW_DIVIDER_NONE"
		);
	}
	jint LinearLayout::VERTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.LinearLayout",
			"VERTICAL"
		);
	}
	
	LinearLayout::LinearLayout(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LinearLayout::LinearLayout(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.LinearLayout",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	LinearLayout::LinearLayout(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.LinearLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	LinearLayout::LinearLayout(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.LinearLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	LinearLayout::LinearLayout(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.LinearLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	QAndroidJniObject LinearLayout::generateLayoutParams(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/LinearLayout$LayoutParams;",
			arg0.__jniObject().object()
		);
	}
	jstring LinearLayout::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint LinearLayout::getBaseline()
	{
		return __thiz.callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	jint LinearLayout::getBaselineAlignedChildIndex()
	{
		return __thiz.callMethod<jint>(
			"getBaselineAlignedChildIndex",
			"()I"
		);
	}
	QAndroidJniObject LinearLayout::getDividerDrawable()
	{
		return __thiz.callObjectMethod(
			"getDividerDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint LinearLayout::getDividerPadding()
	{
		return __thiz.callMethod<jint>(
			"getDividerPadding",
			"()I"
		);
	}
	jint LinearLayout::getGravity()
	{
		return __thiz.callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	jint LinearLayout::getOrientation()
	{
		return __thiz.callMethod<jint>(
			"getOrientation",
			"()I"
		);
	}
	jint LinearLayout::getShowDividers()
	{
		return __thiz.callMethod<jint>(
			"getShowDividers",
			"()I"
		);
	}
	jfloat LinearLayout::getWeightSum()
	{
		return __thiz.callMethod<jfloat>(
			"getWeightSum",
			"()F"
		);
	}
	jboolean LinearLayout::isBaselineAligned()
	{
		return __thiz.callMethod<jboolean>(
			"isBaselineAligned",
			"()Z"
		);
	}
	jboolean LinearLayout::isMeasureWithLargestChildEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isMeasureWithLargestChildEnabled",
			"()Z"
		);
	}
	void LinearLayout::onRtlPropertiesChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setBaselineAligned(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setBaselineAligned",
			"(Z)V",
			arg0
		);
	}
	void LinearLayout::setBaselineAlignedChildIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBaselineAlignedChildIndex",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setDividerDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setDividerDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void LinearLayout::setDividerPadding(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDividerPadding",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setHorizontalGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHorizontalGravity",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setMeasureWithLargestChildEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMeasureWithLargestChildEnabled",
			"(Z)V",
			arg0
		);
	}
	void LinearLayout::setOrientation(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOrientation",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setShowDividers(jint arg0)
	{
		__thiz.callMethod<void>(
			"setShowDividers",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setVerticalGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVerticalGravity",
			"(I)V",
			arg0
		);
	}
	void LinearLayout::setWeightSum(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setWeightSum",
			"(F)V",
			arg0
		);
	}
	jboolean LinearLayout::shouldDelayChildPressedState()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
} // namespace android::widget

