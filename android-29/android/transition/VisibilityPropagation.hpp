#pragma once

#include "../../__JniBaseClass.hpp"
#include "TransitionPropagation.hpp"

namespace __jni_impl::android::transition
{
	class TransitionValues;
}

namespace __jni_impl::android::transition
{
	class VisibilityPropagation : public __jni_impl::android::transition::TransitionPropagation
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void captureValues(__jni_impl::android::transition::TransitionValues arg0);
		jarray getPropagationProperties();
		jint getViewVisibility(__jni_impl::android::transition::TransitionValues arg0);
		jint getViewX(__jni_impl::android::transition::TransitionValues arg0);
		jint getViewY(__jni_impl::android::transition::TransitionValues arg0);
	};
} // namespace __jni_impl::android::transition

#include "TransitionValues.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	
	// Constructors
	void VisibilityPropagation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.VisibilityPropagation",
			"()V"
		);
	}
	
	// Methods
	void VisibilityPropagation::captureValues(__jni_impl::android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	jarray VisibilityPropagation::getPropagationProperties()
	{
		return __thiz.callObjectMethod(
			"getPropagationProperties",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint VisibilityPropagation::getViewVisibility(__jni_impl::android::transition::TransitionValues arg0)
	{
		return __thiz.callMethod<jint>(
			"getViewVisibility",
			"(Landroid/transition/TransitionValues;)I",
			arg0.__jniObject().object()
		);
	}
	jint VisibilityPropagation::getViewX(__jni_impl::android::transition::TransitionValues arg0)
	{
		return __thiz.callMethod<jint>(
			"getViewX",
			"(Landroid/transition/TransitionValues;)I",
			arg0.__jniObject().object()
		);
	}
	jint VisibilityPropagation::getViewY(__jni_impl::android::transition::TransitionValues arg0)
	{
		return __thiz.callMethod<jint>(
			"getViewY",
			"(Landroid/transition/TransitionValues;)I",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::transition

namespace android::transition
{
	class VisibilityPropagation : public __jni_impl::android::transition::VisibilityPropagation
	{
	public:
		VisibilityPropagation(QAndroidJniObject obj) { __thiz = obj; }
		VisibilityPropagation()
		{
			__constructor();
		}
	};
} // namespace android::transition

