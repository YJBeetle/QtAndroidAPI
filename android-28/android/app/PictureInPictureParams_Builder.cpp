#include "./PictureInPictureParams.hpp"
#include "../graphics/Rect.hpp"
#include "../util/Rational.hpp"
#include "./PictureInPictureParams_Builder.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	PictureInPictureParams_Builder::PictureInPictureParams_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PictureInPictureParams_Builder::PictureInPictureParams_Builder()
		: JObject(
			"android.app.PictureInPictureParams$Builder",
			"()V"
		) {}
	
	// Methods
	android::app::PictureInPictureParams PictureInPictureParams_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/PictureInPictureParams;"
		);
	}
	android::app::PictureInPictureParams_Builder PictureInPictureParams_Builder::setActions(JObject arg0)
	{
		return callObjectMethod(
			"setActions",
			"(Ljava/util/List;)Landroid/app/PictureInPictureParams$Builder;",
			arg0.object()
		);
	}
	android::app::PictureInPictureParams_Builder PictureInPictureParams_Builder::setAspectRatio(android::util::Rational arg0)
	{
		return callObjectMethod(
			"setAspectRatio",
			"(Landroid/util/Rational;)Landroid/app/PictureInPictureParams$Builder;",
			arg0.object()
		);
	}
	android::app::PictureInPictureParams_Builder PictureInPictureParams_Builder::setSourceRectHint(android::graphics::Rect arg0)
	{
		return callObjectMethod(
			"setSourceRectHint",
			"(Landroid/graphics/Rect;)Landroid/app/PictureInPictureParams$Builder;",
			arg0.object()
		);
	}
} // namespace android::app

