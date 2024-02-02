#pragma once

#include "../../graphics/PointF.def.hpp"
#include "./InsertGesture.def.hpp"
#include "../../../JString.hpp"
#include "./InsertGesture_Builder.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// Constructors
	inline InsertGesture_Builder::InsertGesture_Builder()
		: JObject(
			"android.view.inputmethod.InsertGesture$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::inputmethod::InsertGesture InsertGesture_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/InsertGesture;"
		);
	}
	inline android::view::inputmethod::InsertGesture_Builder InsertGesture_Builder::setFallbackText(JString arg0) const
	{
		return callObjectMethod(
			"setFallbackText",
			"(Ljava/lang/String;)Landroid/view/inputmethod/InsertGesture$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::inputmethod::InsertGesture_Builder InsertGesture_Builder::setInsertionPoint(android::graphics::PointF arg0) const
	{
		return callObjectMethod(
			"setInsertionPoint",
			"(Landroid/graphics/PointF;)Landroid/view/inputmethod/InsertGesture$Builder;",
			arg0.object()
		);
	}
	inline android::view::inputmethod::InsertGesture_Builder InsertGesture_Builder::setTextToInsert(JString arg0) const
	{
		return callObjectMethod(
			"setTextToInsert",
			"(Ljava/lang/String;)Landroid/view/inputmethod/InsertGesture$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
