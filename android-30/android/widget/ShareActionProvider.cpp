#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../view/View.hpp"
#include "../../JString.hpp"
#include "./ShareActionProvider.hpp"

namespace android::widget
{
	// Fields
	JString ShareActionProvider::DEFAULT_SHARE_HISTORY_FILE_NAME()
	{
		return getStaticObjectField(
			"android.widget.ShareActionProvider",
			"DEFAULT_SHARE_HISTORY_FILE_NAME",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	ShareActionProvider::ShareActionProvider(QJniObject obj) : android::view::ActionProvider(obj) {}
	
	// Constructors
	ShareActionProvider::ShareActionProvider(android::content::Context arg0)
		: android::view::ActionProvider(
			"android.widget.ShareActionProvider",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean ShareActionProvider::hasSubMenu()
	{
		return callMethod<jboolean>(
			"hasSubMenu",
			"()Z"
		);
	}
	android::view::View ShareActionProvider::onCreateActionView()
	{
		return callObjectMethod(
			"onCreateActionView",
			"()Landroid/view/View;"
		);
	}
	void ShareActionProvider::onPrepareSubMenu(JObject arg0)
	{
		callMethod<void>(
			"onPrepareSubMenu",
			"(Landroid/view/SubMenu;)V",
			arg0.object()
		);
	}
	void ShareActionProvider::setOnShareTargetSelectedListener(JObject arg0)
	{
		callMethod<void>(
			"setOnShareTargetSelectedListener",
			"(Landroid/widget/ShareActionProvider$OnShareTargetSelectedListener;)V",
			arg0.object()
		);
	}
	void ShareActionProvider::setShareHistoryFileName(JString arg0)
	{
		callMethod<void>(
			"setShareHistoryFileName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void ShareActionProvider::setShareIntent(android::content::Intent arg0)
	{
		callMethod<void>(
			"setShareIntent",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
} // namespace android::widget

