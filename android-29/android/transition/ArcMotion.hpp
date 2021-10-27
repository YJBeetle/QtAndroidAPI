#pragma once

#include "../../__JniBaseClass.hpp"
#include "PathMotion.hpp"

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
	class ArcMotion : public __jni_impl::android::transition::PathMotion
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		jfloat getMaximumAngle();
		jfloat getMinimumHorizontalAngle();
		jfloat getMinimumVerticalAngle();
		QAndroidJniObject getPath(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void setMaximumAngle(jfloat arg0);
		void setMinimumHorizontalAngle(jfloat arg0);
		void setMinimumVerticalAngle(jfloat arg0);
	};
} // namespace __jni_impl::android::transition

#include "../content/Context.hpp"
#include "../graphics/Path.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	
	// Constructors
	void ArcMotion::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.ArcMotion",
			"()V"
		);
	}
	void ArcMotion::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.ArcMotion",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jfloat ArcMotion::getMaximumAngle()
	{
		return __thiz.callMethod<jfloat>(
			"getMaximumAngle",
			"()F"
		);
	}
	jfloat ArcMotion::getMinimumHorizontalAngle()
	{
		return __thiz.callMethod<jfloat>(
			"getMinimumHorizontalAngle",
			"()F"
		);
	}
	jfloat ArcMotion::getMinimumVerticalAngle()
	{
		return __thiz.callMethod<jfloat>(
			"getMinimumVerticalAngle",
			"()F"
		);
	}
	QAndroidJniObject ArcMotion::getPath(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
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
	void ArcMotion::setMaximumAngle(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setMaximumAngle",
			"(F)V",
			arg0
		);
	}
	void ArcMotion::setMinimumHorizontalAngle(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setMinimumHorizontalAngle",
			"(F)V",
			arg0
		);
	}
	void ArcMotion::setMinimumVerticalAngle(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setMinimumVerticalAngle",
			"(F)V",
			arg0
		);
	}
} // namespace __jni_impl::android::transition

namespace android::transition
{
	class ArcMotion : public __jni_impl::android::transition::ArcMotion
	{
	public:
		ArcMotion(QAndroidJniObject obj) { __thiz = obj; }
		ArcMotion()
		{
			__constructor();
		}
		ArcMotion(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::transition

