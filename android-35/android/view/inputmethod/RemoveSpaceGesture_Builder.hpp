#pragma once

#include "../../graphics/PointF.def.hpp"
#include "./RemoveSpaceGesture.def.hpp"
#include "../../../JString.hpp"
#include "./RemoveSpaceGesture_Builder.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// Constructors
	inline RemoveSpaceGesture_Builder::RemoveSpaceGesture_Builder()
		: JObject(
			"android.view.inputmethod.RemoveSpaceGesture$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::inputmethod::RemoveSpaceGesture RemoveSpaceGesture_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/RemoveSpaceGesture;"
		);
	}
	inline android::view::inputmethod::RemoveSpaceGesture_Builder RemoveSpaceGesture_Builder::setFallbackText(JString arg0) const
	{
		return callObjectMethod(
			"setFallbackText",
			"(Ljava/lang/String;)Landroid/view/inputmethod/RemoveSpaceGesture$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::inputmethod::RemoveSpaceGesture_Builder RemoveSpaceGesture_Builder::setPoints(android::graphics::PointF arg0, android::graphics::PointF arg1) const
	{
		return callObjectMethod(
			"setPoints",
			"(Landroid/graphics/PointF;Landroid/graphics/PointF;)Landroid/view/inputmethod/RemoveSpaceGesture$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
