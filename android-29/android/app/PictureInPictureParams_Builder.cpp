#include "./PictureInPictureParams.hpp"
#include "../graphics/Rect.hpp"
#include "../util/Rational.hpp"
#include "./PictureInPictureParams_Builder.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	PictureInPictureParams_Builder::PictureInPictureParams_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PictureInPictureParams_Builder::PictureInPictureParams_Builder()
		: __JniBaseClass(
			"android.app.PictureInPictureParams$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject PictureInPictureParams_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/PictureInPictureParams;"
		);
	}
	QAndroidJniObject PictureInPictureParams_Builder::setActions(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setActions",
			"(Ljava/util/List;)Landroid/app/PictureInPictureParams$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject PictureInPictureParams_Builder::setAspectRatio(android::util::Rational arg0)
	{
		return callObjectMethod(
			"setAspectRatio",
			"(Landroid/util/Rational;)Landroid/app/PictureInPictureParams$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject PictureInPictureParams_Builder::setSourceRectHint(android::graphics::Rect arg0)
	{
		return callObjectMethod(
			"setSourceRectHint",
			"(Landroid/graphics/Rect;)Landroid/app/PictureInPictureParams$Builder;",
			arg0.object()
		);
	}
} // namespace android::app

