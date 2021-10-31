#include "../content/Context.hpp"
#include "./View.hpp"
#include "./ActionProvider.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	ActionProvider::ActionProvider(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ActionProvider::ActionProvider(android::content::Context arg0)
		: __JniBaseClass(
			"android.view.ActionProvider",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean ActionProvider::hasSubMenu()
	{
		return callMethod<jboolean>(
			"hasSubMenu",
			"()Z"
		);
	}
	jboolean ActionProvider::isVisible()
	{
		return callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	android::view::View ActionProvider::onCreateActionView()
	{
		return callObjectMethod(
			"onCreateActionView",
			"()Landroid/view/View;"
		);
	}
	android::view::View ActionProvider::onCreateActionView(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"onCreateActionView",
			"(Landroid/view/MenuItem;)Landroid/view/View;",
			arg0.object()
		);
	}
	jboolean ActionProvider::onPerformDefaultAction()
	{
		return callMethod<jboolean>(
			"onPerformDefaultAction",
			"()Z"
		);
	}
	void ActionProvider::onPrepareSubMenu(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onPrepareSubMenu",
			"(Landroid/view/SubMenu;)V",
			arg0.object()
		);
	}
	jboolean ActionProvider::overridesItemVisibility()
	{
		return callMethod<jboolean>(
			"overridesItemVisibility",
			"()Z"
		);
	}
	void ActionProvider::refreshVisibility()
	{
		callMethod<void>(
			"refreshVisibility",
			"()V"
		);
	}
	void ActionProvider::setVisibilityListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setVisibilityListener",
			"(Landroid/view/ActionProvider$VisibilityListener;)V",
			arg0.object()
		);
	}
} // namespace android::view

