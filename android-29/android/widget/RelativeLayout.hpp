#pragma once

#ifndef ANDROID_WIDGET_RELATIVELAYOUT
#define ANDROID_WIDGET_RELATIVELAYOUT

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
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
	class RelativeLayout_LayoutParams;
}

namespace __jni_impl::android::widget
{
	class RelativeLayout : public __jni_impl::android::view::ViewGroup
	{
	public:
		// Fields
		static jint ABOVE();
		static jint ALIGN_BASELINE();
		static jint ALIGN_BOTTOM();
		static jint ALIGN_END();
		static jint ALIGN_LEFT();
		static jint ALIGN_PARENT_BOTTOM();
		static jint ALIGN_PARENT_END();
		static jint ALIGN_PARENT_LEFT();
		static jint ALIGN_PARENT_RIGHT();
		static jint ALIGN_PARENT_START();
		static jint ALIGN_PARENT_TOP();
		static jint ALIGN_RIGHT();
		static jint ALIGN_START();
		static jint ALIGN_TOP();
		static jint BELOW();
		static jint CENTER_HORIZONTAL();
		static jint CENTER_IN_PARENT();
		static jint CENTER_VERTICAL();
		static jint END_OF();
		static jint LEFT_OF();
		static jint RIGHT_OF();
		static jint START_OF();
		static jint TRUE();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void setIgnoreGravity(jint arg0);
		jint getIgnoreGravity();
		void setGravity(jint arg0);
		jint getGravity();
		jstring getAccessibilityClassName();
		QAndroidJniObject generateLayoutParams(__jni_impl::__JniBaseClass arg0);
		jboolean shouldDelayChildPressedState();
		void requestLayout();
		jint getBaseline();
		void setHorizontalGravity(jint arg0);
		void setVerticalGravity(jint arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "RelativeLayout_LayoutParams.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jint RelativeLayout::ABOVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ABOVE"
		);
	}
	jint RelativeLayout::ALIGN_BASELINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_BASELINE"
		);
	}
	jint RelativeLayout::ALIGN_BOTTOM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_BOTTOM"
		);
	}
	jint RelativeLayout::ALIGN_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_END"
		);
	}
	jint RelativeLayout::ALIGN_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_LEFT"
		);
	}
	jint RelativeLayout::ALIGN_PARENT_BOTTOM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_PARENT_BOTTOM"
		);
	}
	jint RelativeLayout::ALIGN_PARENT_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_PARENT_END"
		);
	}
	jint RelativeLayout::ALIGN_PARENT_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_PARENT_LEFT"
		);
	}
	jint RelativeLayout::ALIGN_PARENT_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_PARENT_RIGHT"
		);
	}
	jint RelativeLayout::ALIGN_PARENT_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_PARENT_START"
		);
	}
	jint RelativeLayout::ALIGN_PARENT_TOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_PARENT_TOP"
		);
	}
	jint RelativeLayout::ALIGN_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_RIGHT"
		);
	}
	jint RelativeLayout::ALIGN_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_START"
		);
	}
	jint RelativeLayout::ALIGN_TOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"ALIGN_TOP"
		);
	}
	jint RelativeLayout::BELOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"BELOW"
		);
	}
	jint RelativeLayout::CENTER_HORIZONTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"CENTER_HORIZONTAL"
		);
	}
	jint RelativeLayout::CENTER_IN_PARENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"CENTER_IN_PARENT"
		);
	}
	jint RelativeLayout::CENTER_VERTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"CENTER_VERTICAL"
		);
	}
	jint RelativeLayout::END_OF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"END_OF"
		);
	}
	jint RelativeLayout::LEFT_OF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"LEFT_OF"
		);
	}
	jint RelativeLayout::RIGHT_OF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"RIGHT_OF"
		);
	}
	jint RelativeLayout::START_OF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"START_OF"
		);
	}
	jint RelativeLayout::TRUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.RelativeLayout",
			"TRUE"
		);
	}
	
	// Constructors
	void RelativeLayout::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RelativeLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void RelativeLayout::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RelativeLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void RelativeLayout::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RelativeLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void RelativeLayout::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RelativeLayout",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void RelativeLayout::setIgnoreGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIgnoreGravity",
			"(I)V",
			arg0
		);
	}
	jint RelativeLayout::getIgnoreGravity()
	{
		return __thiz.callMethod<jint>(
			"getIgnoreGravity",
			"()I"
		);
	}
	void RelativeLayout::setGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	jint RelativeLayout::getGravity()
	{
		return __thiz.callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	jstring RelativeLayout::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject RelativeLayout::generateLayoutParams(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/RelativeLayout$LayoutParams;",
			arg0.__jniObject().object()
		);
	}
	jboolean RelativeLayout::shouldDelayChildPressedState()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
	void RelativeLayout::requestLayout()
	{
		__thiz.callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	jint RelativeLayout::getBaseline()
	{
		return __thiz.callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	void RelativeLayout::setHorizontalGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHorizontalGravity",
			"(I)V",
			arg0
		);
	}
	void RelativeLayout::setVerticalGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVerticalGravity",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class RelativeLayout : public __jni_impl::android::widget::RelativeLayout
	{
	public:
		RelativeLayout(QAndroidJniObject obj) { __thiz = obj; }
		RelativeLayout(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		RelativeLayout(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		RelativeLayout(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		RelativeLayout(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_RELATIVELAYOUT

