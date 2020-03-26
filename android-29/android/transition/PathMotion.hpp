#pragma once

#ifndef ANDROID_TRANSITION_PATHMOTION
#define ANDROID_TRANSITION_PATHMOTION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics
{
	class Path;
}

namespace __jni_impl::android::transition
{
	class PathMotion : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject getPath(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
	};
} // namespace __jni_impl::android::transition

#include "../content/Context.hpp"
#include "../graphics/Path.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	
	// Constructors
	void PathMotion::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.PathMotion",
			"()V");
	}
	void PathMotion::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.PathMotion",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject PathMotion::getPath(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callObjectMethod(
			"getPath",
			"(FFFF)Landroid/graphics/Path;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::android::transition

namespace android::transition
{
	class PathMotion : public __jni_impl::android::transition::PathMotion
	{
	public:
		PathMotion(QAndroidJniObject obj) { __thiz = obj; }
		PathMotion()
		{
			__constructor();
		}
		PathMotion(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::transition

#endif // ANDROID_TRANSITION_PATHMOTION

