#pragma once

#include "../../__JniBaseClass.hpp"
#include "./PathMotion.hpp"

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
	class PatternPathMotion : public __jni_impl::android::transition::PathMotion
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::graphics::Path arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject getPath(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		QAndroidJniObject getPatternPath();
		void setPatternPath(__jni_impl::android::graphics::Path arg0);
	};
} // namespace __jni_impl::android::transition

#include "../content/Context.hpp"
#include "../graphics/Path.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	
	// Constructors
	void PatternPathMotion::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.PatternPathMotion",
			"()V"
		);
	}
	void PatternPathMotion::__constructor(__jni_impl::android::graphics::Path arg0)
	{
		__thiz = QAndroidJniObject(
			"android.transition.PatternPathMotion",
			"(Landroid/graphics/Path;)V",
			arg0.__jniObject().object()
		);
	}
	void PatternPathMotion::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.PatternPathMotion",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject PatternPathMotion::getPath(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
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
	QAndroidJniObject PatternPathMotion::getPatternPath()
	{
		return __thiz.callObjectMethod(
			"getPatternPath",
			"()Landroid/graphics/Path;"
		);
	}
	void PatternPathMotion::setPatternPath(__jni_impl::android::graphics::Path arg0)
	{
		__thiz.callMethod<void>(
			"setPatternPath",
			"(Landroid/graphics/Path;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::transition

namespace android::transition
{
	class PatternPathMotion : public __jni_impl::android::transition::PatternPathMotion
	{
	public:
		PatternPathMotion(QAndroidJniObject obj) { __thiz = obj; }
		PatternPathMotion()
		{
			__constructor();
		}
		PatternPathMotion(__jni_impl::android::graphics::Path arg0)
		{
			__constructor(
				arg0);
		}
		PatternPathMotion(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::transition

