#pragma once

#ifndef ANDROID_TRANSITION_AUTOTRANSITION
#define ANDROID_TRANSITION_AUTOTRANSITION

#include "TransitionSet.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::transition
{
	class AutoTransition : public __jni_impl::android::transition::TransitionSet
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::transition

#include "../content/Context.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	
	// Constructors
	void AutoTransition::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.AutoTransition",
			"()V");
	}
	void AutoTransition::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.AutoTransition",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
} // namespace __jni_impl::android::transition

namespace android::transition
{
	class AutoTransition : public __jni_impl::android::transition::AutoTransition
	{
	public:
		AutoTransition(QAndroidJniObject obj) { __thiz = obj; }
		AutoTransition()
		{
			__constructor();
		}
		AutoTransition(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::transition

#endif // ANDROID_TRANSITION_AUTOTRANSITION

