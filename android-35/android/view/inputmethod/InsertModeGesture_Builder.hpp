#pragma once

#include "../../graphics/PointF.def.hpp"
#include "../../os/CancellationSignal.def.hpp"
#include "./InsertModeGesture.def.hpp"
#include "../../../JString.hpp"
#include "./InsertModeGesture_Builder.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// Constructors
	inline InsertModeGesture_Builder::InsertModeGesture_Builder()
		: JObject(
			"android.view.inputmethod.InsertModeGesture$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::inputmethod::InsertModeGesture InsertModeGesture_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/InsertModeGesture;"
		);
	}
	inline android::view::inputmethod::InsertModeGesture_Builder InsertModeGesture_Builder::setCancellationSignal(android::os::CancellationSignal arg0) const
	{
		return callObjectMethod(
			"setCancellationSignal",
			"(Landroid/os/CancellationSignal;)Landroid/view/inputmethod/InsertModeGesture$Builder;",
			arg0.object()
		);
	}
	inline android::view::inputmethod::InsertModeGesture_Builder InsertModeGesture_Builder::setFallbackText(JString arg0) const
	{
		return callObjectMethod(
			"setFallbackText",
			"(Ljava/lang/String;)Landroid/view/inputmethod/InsertModeGesture$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::inputmethod::InsertModeGesture_Builder InsertModeGesture_Builder::setInsertionPoint(android::graphics::PointF arg0) const
	{
		return callObjectMethod(
			"setInsertionPoint",
			"(Landroid/graphics/PointF;)Landroid/view/inputmethod/InsertModeGesture$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
