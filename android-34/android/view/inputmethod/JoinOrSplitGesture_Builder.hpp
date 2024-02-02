#pragma once

#include "../../graphics/PointF.def.hpp"
#include "./JoinOrSplitGesture.def.hpp"
#include "../../../JString.hpp"
#include "./JoinOrSplitGesture_Builder.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// Constructors
	inline JoinOrSplitGesture_Builder::JoinOrSplitGesture_Builder()
		: JObject(
			"android.view.inputmethod.JoinOrSplitGesture$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::inputmethod::JoinOrSplitGesture JoinOrSplitGesture_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/JoinOrSplitGesture;"
		);
	}
	inline android::view::inputmethod::JoinOrSplitGesture_Builder JoinOrSplitGesture_Builder::setFallbackText(JString arg0) const
	{
		return callObjectMethod(
			"setFallbackText",
			"(Ljava/lang/String;)Landroid/view/inputmethod/JoinOrSplitGesture$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::inputmethod::JoinOrSplitGesture_Builder JoinOrSplitGesture_Builder::setJoinOrSplitPoint(android::graphics::PointF arg0) const
	{
		return callObjectMethod(
			"setJoinOrSplitPoint",
			"(Landroid/graphics/PointF;)Landroid/view/inputmethod/JoinOrSplitGesture$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
