#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class ScaleGestureDetector;
}

namespace __jni_impl::android::view
{
	class ScaleGestureDetector_SimpleOnScaleGestureListener : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean onScale(__jni_impl::android::view::ScaleGestureDetector arg0);
		jboolean onScaleBegin(__jni_impl::android::view::ScaleGestureDetector arg0);
		void onScaleEnd(__jni_impl::android::view::ScaleGestureDetector arg0);
	};
} // namespace __jni_impl::android::view

#include "ScaleGestureDetector.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void ScaleGestureDetector_SimpleOnScaleGestureListener::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.ScaleGestureDetector$SimpleOnScaleGestureListener",
			"()V"
		);
	}
	
	// Methods
	jboolean ScaleGestureDetector_SimpleOnScaleGestureListener::onScale(__jni_impl::android::view::ScaleGestureDetector arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onScale",
			"(Landroid/view/ScaleGestureDetector;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ScaleGestureDetector_SimpleOnScaleGestureListener::onScaleBegin(__jni_impl::android::view::ScaleGestureDetector arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onScaleBegin",
			"(Landroid/view/ScaleGestureDetector;)Z",
			arg0.__jniObject().object()
		);
	}
	void ScaleGestureDetector_SimpleOnScaleGestureListener::onScaleEnd(__jni_impl::android::view::ScaleGestureDetector arg0)
	{
		__thiz.callMethod<void>(
			"onScaleEnd",
			"(Landroid/view/ScaleGestureDetector;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class ScaleGestureDetector_SimpleOnScaleGestureListener : public __jni_impl::android::view::ScaleGestureDetector_SimpleOnScaleGestureListener
	{
	public:
		ScaleGestureDetector_SimpleOnScaleGestureListener(QAndroidJniObject obj) { __thiz = obj; }
		ScaleGestureDetector_SimpleOnScaleGestureListener()
		{
			__constructor();
		}
	};
} // namespace android::view

