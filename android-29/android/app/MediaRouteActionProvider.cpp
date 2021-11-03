#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "./MediaRouteActionProvider.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	MediaRouteActionProvider::MediaRouteActionProvider(QAndroidJniObject obj) : android::view::ActionProvider(obj) {}
	
	// Constructors
	MediaRouteActionProvider::MediaRouteActionProvider(android::content::Context arg0)
		: android::view::ActionProvider(
			"android.app.MediaRouteActionProvider",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean MediaRouteActionProvider::isVisible()
	{
		return callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	android::view::View MediaRouteActionProvider::onCreateActionView()
	{
		return callObjectMethod(
			"onCreateActionView",
			"()Landroid/view/View;"
		);
	}
	android::view::View MediaRouteActionProvider::onCreateActionView(JObject arg0)
	{
		return callObjectMethod(
			"onCreateActionView",
			"(Landroid/view/MenuItem;)Landroid/view/View;",
			arg0.object()
		);
	}
	jboolean MediaRouteActionProvider::onPerformDefaultAction()
	{
		return callMethod<jboolean>(
			"onPerformDefaultAction",
			"()Z"
		);
	}
	jboolean MediaRouteActionProvider::overridesItemVisibility()
	{
		return callMethod<jboolean>(
			"overridesItemVisibility",
			"()Z"
		);
	}
	void MediaRouteActionProvider::setExtendedSettingsClickListener(JObject arg0)
	{
		callMethod<void>(
			"setExtendedSettingsClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	void MediaRouteActionProvider::setRouteTypes(jint arg0)
	{
		callMethod<void>(
			"setRouteTypes",
			"(I)V",
			arg0
		);
	}
} // namespace android::app

