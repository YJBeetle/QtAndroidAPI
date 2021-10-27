#include "./PictureInPictureParams.hpp"
#include "../graphics/Rect.hpp"
#include "../util/Rational.hpp"
#include "./PictureInPictureParams_Builder.hpp"

namespace android::app
{
	// Fields
	
	PictureInPictureParams_Builder::PictureInPictureParams_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PictureInPictureParams_Builder::PictureInPictureParams_Builder()
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
	QAndroidJniObject PictureInPictureParams_Builder::setActions(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setActions",
			"(Ljava/util/List;)Landroid/app/PictureInPictureParams$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PictureInPictureParams_Builder::setAspectRatio(android::util::Rational arg0)
	{
		return __thiz.callObjectMethod(
			"setAspectRatio",
			"(Landroid/util/Rational;)Landroid/app/PictureInPictureParams$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PictureInPictureParams_Builder::setSourceRectHint(android::graphics::Rect arg0)
	{
		return __thiz.callObjectMethod(
			"setSourceRectHint",
			"(Landroid/graphics/Rect;)Landroid/app/PictureInPictureParams$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app

