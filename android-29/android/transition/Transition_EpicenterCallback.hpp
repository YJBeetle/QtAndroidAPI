#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::transition
{
	class Transition;
}

namespace __jni_impl::android::transition
{
	class Transition_EpicenterCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onGetEpicenter(__jni_impl::android::transition::Transition arg0);
	};
} // namespace __jni_impl::android::transition

#include "../graphics/Rect.hpp"
#include "./Transition.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	
	// Constructors
	void Transition_EpicenterCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.Transition$EpicenterCallback",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Transition_EpicenterCallback::onGetEpicenter(__jni_impl::android::transition::Transition arg0)
	{
		return __thiz.callObjectMethod(
			"onGetEpicenter",
			"(Landroid/transition/Transition;)Landroid/graphics/Rect;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::transition

namespace android::transition
{
	class Transition_EpicenterCallback : public __jni_impl::android::transition::Transition_EpicenterCallback
	{
	public:
		Transition_EpicenterCallback(QAndroidJniObject obj) { __thiz = obj; }
		Transition_EpicenterCallback()
		{
			__constructor();
		}
	};
} // namespace android::transition

