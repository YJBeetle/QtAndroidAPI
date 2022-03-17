#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/Resources.def.hpp"
#include "../view/Display.def.hpp"
#include "./Presentation.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Presentation::Presentation(android::content::Context arg0, android::view::Display arg1)
		: android::app::Dialog(
			"android.app.Presentation",
			"(Landroid/content/Context;Landroid/view/Display;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline Presentation::Presentation(android::content::Context arg0, android::view::Display arg1, jint arg2)
		: android::app::Dialog(
			"android.app.Presentation",
			"(Landroid/content/Context;Landroid/view/Display;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline android::view::Display Presentation::getDisplay() const
	{
		return callObjectMethod(
			"getDisplay",
			"()Landroid/view/Display;"
		);
	}
	inline android::content::res::Resources Presentation::getResources() const
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	inline void Presentation::onDisplayChanged() const
	{
		callMethod<void>(
			"onDisplayChanged",
			"()V"
		);
	}
	inline void Presentation::onDisplayRemoved() const
	{
		callMethod<void>(
			"onDisplayRemoved",
			"()V"
		);
	}
	inline void Presentation::show() const
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace android::app

// Base class headers
#include "./Dialog.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
