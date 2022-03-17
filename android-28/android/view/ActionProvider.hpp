#pragma once

#include "../content/Context.def.hpp"
#include "./View.def.hpp"
#include "./ActionProvider.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline ActionProvider::ActionProvider(android::content::Context arg0)
		: JObject(
			"android.view.ActionProvider",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean ActionProvider::hasSubMenu() const
	{
		return callMethod<jboolean>(
			"hasSubMenu",
			"()Z"
		);
	}
	inline jboolean ActionProvider::isVisible() const
	{
		return callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	inline android::view::View ActionProvider::onCreateActionView() const
	{
		return callObjectMethod(
			"onCreateActionView",
			"()Landroid/view/View;"
		);
	}
	inline android::view::View ActionProvider::onCreateActionView(JObject arg0) const
	{
		return callObjectMethod(
			"onCreateActionView",
			"(Landroid/view/MenuItem;)Landroid/view/View;",
			arg0.object()
		);
	}
	inline jboolean ActionProvider::onPerformDefaultAction() const
	{
		return callMethod<jboolean>(
			"onPerformDefaultAction",
			"()Z"
		);
	}
	inline void ActionProvider::onPrepareSubMenu(JObject arg0) const
	{
		callMethod<void>(
			"onPrepareSubMenu",
			"(Landroid/view/SubMenu;)V",
			arg0.object()
		);
	}
	inline jboolean ActionProvider::overridesItemVisibility() const
	{
		return callMethod<jboolean>(
			"overridesItemVisibility",
			"()Z"
		);
	}
	inline void ActionProvider::refreshVisibility() const
	{
		callMethod<void>(
			"refreshVisibility",
			"()V"
		);
	}
	inline void ActionProvider::setVisibilityListener(JObject arg0) const
	{
		callMethod<void>(
			"setVisibilityListener",
			"(Landroid/view/ActionProvider$VisibilityListener;)V",
			arg0.object()
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
