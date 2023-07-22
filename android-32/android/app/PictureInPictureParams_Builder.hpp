#pragma once

#include "./PictureInPictureParams.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../util/Rational.def.hpp"
#include "./PictureInPictureParams_Builder.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline PictureInPictureParams_Builder::PictureInPictureParams_Builder()
		: JObject(
			"android.app.PictureInPictureParams$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::app::PictureInPictureParams PictureInPictureParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/PictureInPictureParams;"
		);
	}
	inline android::app::PictureInPictureParams_Builder PictureInPictureParams_Builder::setActions(JObject arg0) const
	{
		return callObjectMethod(
			"setActions",
			"(Ljava/util/List;)Landroid/app/PictureInPictureParams$Builder;",
			arg0.object()
		);
	}
	inline android::app::PictureInPictureParams_Builder PictureInPictureParams_Builder::setAspectRatio(android::util::Rational arg0) const
	{
		return callObjectMethod(
			"setAspectRatio",
			"(Landroid/util/Rational;)Landroid/app/PictureInPictureParams$Builder;",
			arg0.object()
		);
	}
	inline android::app::PictureInPictureParams_Builder PictureInPictureParams_Builder::setAutoEnterEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setAutoEnterEnabled",
			"(Z)Landroid/app/PictureInPictureParams$Builder;",
			arg0
		);
	}
	inline android::app::PictureInPictureParams_Builder PictureInPictureParams_Builder::setSeamlessResizeEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setSeamlessResizeEnabled",
			"(Z)Landroid/app/PictureInPictureParams$Builder;",
			arg0
		);
	}
	inline android::app::PictureInPictureParams_Builder PictureInPictureParams_Builder::setSourceRectHint(android::graphics::Rect arg0) const
	{
		return callObjectMethod(
			"setSourceRectHint",
			"(Landroid/graphics/Rect;)Landroid/app/PictureInPictureParams$Builder;",
			arg0.object()
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
