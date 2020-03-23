#pragma once

#ifndef ANDROID_WIDGET_LINEARLAYOUT
#define ANDROID_WIDGET_LINEARLAYOUT

#include "../view/ViewGroup.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::widget
{
	class LinearLayout_LayoutParams;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}

namespace __jni_impl::android::widget
{
	class LinearLayout : public __jni_impl::android::view::ViewGroup
	{
	public:
		// Fields
		static jint HORIZONTAL();
		static jint SHOW_DIVIDER_BEGINNING();
		static jint SHOW_DIVIDER_END();
		static jint SHOW_DIVIDER_MIDDLE();
		static jint SHOW_DIVIDER_NONE();
		static jint VERTICAL();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void setGravity(jint arg0);
		jint getGravity();
		void setOrientation(jint arg0);
		QAndroidJniObject getAccessibilityClassName();
		QAndroidJniObject generateLayoutParams(__jni_impl::__JniBaseClass arg0);
		jboolean shouldDelayChildPressedState();
		void onRtlPropertiesChanged(jint arg0);
		jint getBaseline();
		jint getOrientation();
		void setDividerDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setShowDividers(jint arg0);
		jint getShowDividers();
		QAndroidJniObject getDividerDrawable();
		void setDividerPadding(jint arg0);
		jint getDividerPadding();
		jboolean isBaselineAligned();
		void setBaselineAligned(jboolean arg0);
		jboolean isMeasureWithLargestChildEnabled();
		void setMeasureWithLargestChildEnabled(jboolean arg0);
		jint getBaselineAlignedChildIndex();
		void setBaselineAlignedChildIndex(jint arg0);
		jfloat getWeightSum();
		void setWeightSum(jfloat arg0);
		void setHorizontalGravity(jint arg0);
		void setVerticalGravity(jint arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "LinearLayout_LayoutParams.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/drawable/Drawable.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jint LinearLayout::HORIZONTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.LinearLayout",
			"HORIZONTAL");
	}
	jint LinearLayout::SHOW_DIVIDER_BEGINNING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.LinearLayout",
			"SHOW_DIVIDER_BEGINNING");
	}
	jint LinearLayout::SHOW_DIVIDER_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.LinearLayout",
			"SHOW_DIVIDER_END");
	}
	jint LinearLayout::SHOW_DIVIDER_MIDDLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.LinearLayout",
			"SHOW_DIVIDER_MIDDLE");
	}
	jint LinearLayout::SHOW_DIVIDER_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.LinearLayout",
			"SHOW_DIVIDER_NONE");
	}
	jint LinearLayout::VERTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.LinearLayout",
			"VERTICAL");
	}
	
	// Constructors
	void LinearLayout::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.LinearLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void LinearLayout::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.LinearLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void LinearLayout::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.LinearLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void LinearLayout::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.LinearLayout",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void LinearLayout::setGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGravity",
			"(I)V",
			arg0);
	}
	jint LinearLayout::getGravity()
	{
		return __thiz.callMethod<jint>(
			"getGravity",
			"()I");
	}
	void LinearLayout::setOrientation(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOrientation",
			"(I)V",
			arg0);
	}
	QAndroidJniObject LinearLayout::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject LinearLayout::generateLayoutParams(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/LinearLayout$LayoutParams;",
			arg0.__jniObject().object());
	}
	jboolean LinearLayout::shouldDelayChildPressedState()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z");
	}
	void LinearLayout::onRtlPropertiesChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0);
	}
	jint LinearLayout::getBaseline()
	{
		return __thiz.callMethod<jint>(
			"getBaseline",
			"()I");
	}
	jint LinearLayout::getOrientation()
	{
		return __thiz.callMethod<jint>(
			"getOrientation",
			"()I");
	}
	void LinearLayout::setDividerDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setDividerDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	void LinearLayout::setShowDividers(jint arg0)
	{
		__thiz.callMethod<void>(
			"setShowDividers",
			"(I)V",
			arg0);
	}
	jint LinearLayout::getShowDividers()
	{
		return __thiz.callMethod<jint>(
			"getShowDividers",
			"()I");
	}
	QAndroidJniObject LinearLayout::getDividerDrawable()
	{
		return __thiz.callObjectMethod(
			"getDividerDrawable",
			"()Landroid/graphics/drawable/Drawable;");
	}
	void LinearLayout::setDividerPadding(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDividerPadding",
			"(I)V",
			arg0);
	}
	jint LinearLayout::getDividerPadding()
	{
		return __thiz.callMethod<jint>(
			"getDividerPadding",
			"()I");
	}
	jboolean LinearLayout::isBaselineAligned()
	{
		return __thiz.callMethod<jboolean>(
			"isBaselineAligned",
			"()Z");
	}
	void LinearLayout::setBaselineAligned(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setBaselineAligned",
			"(Z)V",
			arg0);
	}
	jboolean LinearLayout::isMeasureWithLargestChildEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isMeasureWithLargestChildEnabled",
			"()Z");
	}
	void LinearLayout::setMeasureWithLargestChildEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMeasureWithLargestChildEnabled",
			"(Z)V",
			arg0);
	}
	jint LinearLayout::getBaselineAlignedChildIndex()
	{
		return __thiz.callMethod<jint>(
			"getBaselineAlignedChildIndex",
			"()I");
	}
	void LinearLayout::setBaselineAlignedChildIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBaselineAlignedChildIndex",
			"(I)V",
			arg0);
	}
	jfloat LinearLayout::getWeightSum()
	{
		return __thiz.callMethod<jfloat>(
			"getWeightSum",
			"()F");
	}
	void LinearLayout::setWeightSum(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setWeightSum",
			"(F)V",
			arg0);
	}
	void LinearLayout::setHorizontalGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHorizontalGravity",
			"(I)V",
			arg0);
	}
	void LinearLayout::setVerticalGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVerticalGravity",
			"(I)V",
			arg0);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class LinearLayout : public __jni_impl::android::widget::LinearLayout
	{
	public:
		LinearLayout(QAndroidJniObject obj) { __thiz = obj; }
		LinearLayout(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		LinearLayout(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		LinearLayout(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		LinearLayout(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_LINEARLAYOUT

