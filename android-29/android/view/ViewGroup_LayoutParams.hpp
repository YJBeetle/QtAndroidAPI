#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class TypedArray;
}
namespace __jni_impl::android::view::animation
{
	class LayoutAnimationController_AnimationParameters;
}

namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams : public __JniBaseClass
	{
	public:
		// Fields
		static jint FILL_PARENT();
		static jint MATCH_PARENT();
		static jint WRAP_CONTENT();
		jint height();
		QAndroidJniObject layoutAnimationParameters();
		jint width();
		
		// Constructors
		void __constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		void resolveLayoutDirection(jint arg0);
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"
#include "../content/res/TypedArray.hpp"
#include "animation/LayoutAnimationController_AnimationParameters.hpp"

namespace __jni_impl::android::view
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
	
	// Constructors
	void ViewGroup_LayoutParams::__constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup_LayoutParams::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ViewGroup_LayoutParams::__constructor(jint arg0, jint arg1)
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
} // namespace __jni_impl::android::view

namespace android::view
{
	class ViewGroup_LayoutParams : public __jni_impl::android::view::ViewGroup_LayoutParams
	{
	public:
		ViewGroup_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
		ViewGroup_LayoutParams(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		ViewGroup_LayoutParams(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ViewGroup_LayoutParams(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view

