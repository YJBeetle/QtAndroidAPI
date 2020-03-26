#pragma once

#ifndef ANDROID_TRANSITION_TRANSITIONVALUES
#define ANDROID_TRANSITION_TRANSITIONVALUES

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::transition
{
	class TransitionValues : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject values();
		QAndroidJniObject view();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::view::View arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
	};
} // namespace __jni_impl::android::transition

#include "../view/View.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	QAndroidJniObject TransitionValues::values()
	{
		return __thiz.getObjectField(
			"values",
			"Ljava/util/Map;"
		);
	}
	QAndroidJniObject TransitionValues::view()
	{
		return __thiz.getObjectField(
			"view",
			"Landroid/view/View;"
		);
	}
	
	// Constructors
	void TransitionValues::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.TransitionValues",
			"()V");
	}
	void TransitionValues::__constructor(__jni_impl::android::view::View arg0)
	{
		__thiz = QAndroidJniObject(
			"android.transition.TransitionValues",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean TransitionValues::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring TransitionValues::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint TransitionValues::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace __jni_impl::android::transition

namespace android::transition
{
	class TransitionValues : public __jni_impl::android::transition::TransitionValues
	{
	public:
		TransitionValues(QAndroidJniObject obj) { __thiz = obj; }
		TransitionValues()
		{
			__constructor();
		}
		TransitionValues(__jni_impl::android::view::View arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::transition

#endif // ANDROID_TRANSITION_TRANSITIONVALUES

