#pragma once

#include "../content/Context.def.hpp"
#include "../view/View.def.hpp"
#include "./MediaRouteActionProvider.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline MediaRouteActionProvider::MediaRouteActionProvider(android::content::Context arg0)
		: android::view::ActionProvider(
			"android.app.MediaRouteActionProvider",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean MediaRouteActionProvider::isVisible() const
	{
		return callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	inline android::view::View MediaRouteActionProvider::onCreateActionView() const
	{
		return callObjectMethod(
			"onCreateActionView",
			"()Landroid/view/View;"
		);
	}
	inline android::view::View MediaRouteActionProvider::onCreateActionView(JObject arg0) const
	{
		return callObjectMethod(
			"onCreateActionView",
			"(Landroid/view/MenuItem;)Landroid/view/View;",
			arg0.object()
		);
	}
	inline jboolean MediaRouteActionProvider::onPerformDefaultAction() const
	{
		return callMethod<jboolean>(
			"onPerformDefaultAction",
			"()Z"
		);
	}
	inline jboolean MediaRouteActionProvider::overridesItemVisibility() const
	{
		return callMethod<jboolean>(
			"overridesItemVisibility",
			"()Z"
		);
	}
	inline void MediaRouteActionProvider::setExtendedSettingsClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setExtendedSettingsClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	inline void MediaRouteActionProvider::setRouteTypes(jint arg0) const
	{
		callMethod<void>(
			"setRouteTypes",
			"(I)V",
			arg0
		);
	}
} // namespace android::app

// Base class headers
#include "../view/ActionProvider.hpp"

