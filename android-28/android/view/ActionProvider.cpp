#include "../content/Context.hpp"
#include "./View.hpp"
#include "./ActionProvider.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	ActionProvider::ActionProvider(android::content::Context arg0)
		: JObject(
			"android.view.ActionProvider",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean ActionProvider::hasSubMenu() const
	{
		return callMethod<jboolean>(
			"hasSubMenu",
			"()Z"
		);
	}
	jboolean ActionProvider::isVisible() const
	{
		return callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	android::view::View ActionProvider::onCreateActionView() const
	{
		return callObjectMethod(
			"onCreateActionView",
			"()Landroid/view/View;"
		);
	}
	android::view::View ActionProvider::onCreateActionView(JObject arg0) const
	{
		return callObjectMethod(
			"onCreateActionView",
			"(Landroid/view/MenuItem;)Landroid/view/View;",
			arg0.object()
		);
	}
	jboolean ActionProvider::onPerformDefaultAction() const
	{
		return callMethod<jboolean>(
			"onPerformDefaultAction",
			"()Z"
		);
	}
	void ActionProvider::onPrepareSubMenu(JObject arg0) const
	{
		callMethod<void>(
			"onPrepareSubMenu",
			"(Landroid/view/SubMenu;)V",
			arg0.object()
		);
	}
	jboolean ActionProvider::overridesItemVisibility() const
	{
		return callMethod<jboolean>(
			"overridesItemVisibility",
			"()Z"
		);
	}
	void ActionProvider::refreshVisibility() const
	{
		callMethod<void>(
			"refreshVisibility",
			"()V"
		);
	}
	void ActionProvider::setVisibilityListener(JObject arg0) const
	{
		callMethod<void>(
			"setVisibilityListener",
			"(Landroid/view/ActionProvider$VisibilityListener;)V",
			arg0.object()
		);
	}
} // namespace android::view

