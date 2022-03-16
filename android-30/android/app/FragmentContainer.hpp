#pragma once

#include "../view/View.def.hpp"
#include "./FragmentContainer.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline FragmentContainer::FragmentContainer()
		: JObject(
			"android.app.FragmentContainer",
			"()V"
		) {}
	
	// Methods
	inline android::view::View FragmentContainer::onFindViewById(jint arg0) const
	{
		return callObjectMethod(
			"onFindViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	inline jboolean FragmentContainer::onHasView() const
	{
		return callMethod<jboolean>(
			"onHasView",
			"()Z"
		);
	}
} // namespace android::app

// Base class headers

