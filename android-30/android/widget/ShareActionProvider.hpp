#pragma once

#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../view/View.def.hpp"
#include "../../JString.hpp"
#include "./ShareActionProvider.def.hpp"

namespace android::widget
{
	// Fields
	inline JString ShareActionProvider::DEFAULT_SHARE_HISTORY_FILE_NAME()
	{
		return getStaticObjectField(
			"android.widget.ShareActionProvider",
			"DEFAULT_SHARE_HISTORY_FILE_NAME",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline ShareActionProvider::ShareActionProvider(android::content::Context arg0)
		: android::view::ActionProvider(
			"android.widget.ShareActionProvider",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean ShareActionProvider::hasSubMenu() const
	{
		return callMethod<jboolean>(
			"hasSubMenu",
			"()Z"
		);
	}
	inline android::view::View ShareActionProvider::onCreateActionView() const
	{
		return callObjectMethod(
			"onCreateActionView",
			"()Landroid/view/View;"
		);
	}
	inline void ShareActionProvider::onPrepareSubMenu(JObject arg0) const
	{
		callMethod<void>(
			"onPrepareSubMenu",
			"(Landroid/view/SubMenu;)V",
			arg0.object()
		);
	}
	inline void ShareActionProvider::setOnShareTargetSelectedListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnShareTargetSelectedListener",
			"(Landroid/widget/ShareActionProvider$OnShareTargetSelectedListener;)V",
			arg0.object()
		);
	}
	inline void ShareActionProvider::setShareHistoryFileName(JString arg0) const
	{
		callMethod<void>(
			"setShareHistoryFileName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void ShareActionProvider::setShareIntent(android::content::Intent arg0) const
	{
		callMethod<void>(
			"setShareIntent",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/ActionProvider.hpp"

