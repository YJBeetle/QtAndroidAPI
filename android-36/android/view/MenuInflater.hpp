#pragma once

#include "../content/Context.def.hpp"
#include "./MenuInflater.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline MenuInflater::MenuInflater(android::content::Context arg0)
		: JObject(
			"android.view.MenuInflater",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void MenuInflater::inflate(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"inflate",
			"(ILandroid/view/Menu;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
