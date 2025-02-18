#pragma once

#include "./ClipData_Item.def.hpp"
#include "./Intent.def.hpp"
#include "./IntentSender.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./ClipData_Item_Builder.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline ClipData_Item_Builder::ClipData_Item_Builder()
		: JObject(
			"android.content.ClipData$Item$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::content::ClipData_Item ClipData_Item_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/ClipData$Item;"
		);
	}
	inline android::content::ClipData_Item_Builder ClipData_Item_Builder::setHtmlText(JString arg0) const
	{
		return callObjectMethod(
			"setHtmlText",
			"(Ljava/lang/String;)Landroid/content/ClipData$Item$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::content::ClipData_Item_Builder ClipData_Item_Builder::setIntent(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"setIntent",
			"(Landroid/content/Intent;)Landroid/content/ClipData$Item$Builder;",
			arg0.object()
		);
	}
	inline android::content::ClipData_Item_Builder ClipData_Item_Builder::setIntentSender(android::content::IntentSender arg0) const
	{
		return callObjectMethod(
			"setIntentSender",
			"(Landroid/content/IntentSender;)Landroid/content/ClipData$Item$Builder;",
			arg0.object()
		);
	}
	inline android::content::ClipData_Item_Builder ClipData_Item_Builder::setText(JString arg0) const
	{
		return callObjectMethod(
			"setText",
			"(Ljava/lang/CharSequence;)Landroid/content/ClipData$Item$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::content::ClipData_Item_Builder ClipData_Item_Builder::setUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setUri",
			"(Landroid/net/Uri;)Landroid/content/ClipData$Item$Builder;",
			arg0.object()
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
