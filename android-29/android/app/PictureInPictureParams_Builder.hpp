#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class PictureInPictureParams;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::util
{
	class Rational;
}

namespace __jni_impl::android::app
{
	class PictureInPictureParams_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setActions(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setAspectRatio(__jni_impl::android::util::Rational arg0);
		QAndroidJniObject setSourceRectHint(__jni_impl::android::graphics::Rect arg0);
	};
} // namespace __jni_impl::android::app

#include "PictureInPictureParams.hpp"
#include "../graphics/Rect.hpp"
#include "../util/Rational.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void PictureInPictureParams_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.PictureInPictureParams$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject PictureInPictureParams_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/app/PictureInPictureParams;"
		);
	}
	QAndroidJniObject PictureInPictureParams_Builder::setActions(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setActions",
			"(Ljava/util/List;)Landroid/app/PictureInPictureParams$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PictureInPictureParams_Builder::setAspectRatio(__jni_impl::android::util::Rational arg0)
	{
		return __thiz.callObjectMethod(
			"setAspectRatio",
			"(Landroid/util/Rational;)Landroid/app/PictureInPictureParams$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PictureInPictureParams_Builder::setSourceRectHint(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callObjectMethod(
			"setSourceRectHint",
			"(Landroid/graphics/Rect;)Landroid/app/PictureInPictureParams$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class PictureInPictureParams_Builder : public __jni_impl::android::app::PictureInPictureParams_Builder
	{
	public:
		PictureInPictureParams_Builder(QAndroidJniObject obj) { __thiz = obj; }
		PictureInPictureParams_Builder()
		{
			__constructor();
		}
	};
} // namespace android::app

