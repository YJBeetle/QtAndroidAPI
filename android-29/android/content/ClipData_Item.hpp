#pragma once

#include "./Context.def.hpp"
#include "./Intent.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./ClipData_Item.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline ClipData_Item::ClipData_Item(android::content::Intent arg0)
		: JObject(
			"android.content.ClipData$Item",
			"(Landroid/content/Intent;)V",
			arg0.object()
		) {}
	inline ClipData_Item::ClipData_Item(android::net::Uri arg0)
		: JObject(
			"android.content.ClipData$Item",
			"(Landroid/net/Uri;)V",
			arg0.object()
		) {}
	inline ClipData_Item::ClipData_Item(JString arg0)
		: JObject(
			"android.content.ClipData$Item",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		) {}
	inline ClipData_Item::ClipData_Item(JString arg0, JString arg1)
		: JObject(
			"android.content.ClipData$Item",
			"(Ljava/lang/CharSequence;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline ClipData_Item::ClipData_Item(JString arg0, android::content::Intent arg1, android::net::Uri arg2)
		: JObject(
			"android.content.ClipData$Item",
			"(Ljava/lang/CharSequence;Landroid/content/Intent;Landroid/net/Uri;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	inline ClipData_Item::ClipData_Item(JString arg0, JString arg1, android::content::Intent arg2, android::net::Uri arg3)
		: JObject(
			"android.content.ClipData$Item",
			"(Ljava/lang/CharSequence;Ljava/lang/String;Landroid/content/Intent;Landroid/net/Uri;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline JString ClipData_Item::coerceToHtmlText(android::content::Context arg0) const
	{
		return callObjectMethod(
			"coerceToHtmlText",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString ClipData_Item::coerceToStyledText(android::content::Context arg0) const
	{
		return callObjectMethod(
			"coerceToStyledText",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline JString ClipData_Item::coerceToText(android::content::Context arg0) const
	{
		return callObjectMethod(
			"coerceToText",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline JString ClipData_Item::getHtmlText() const
	{
		return callObjectMethod(
			"getHtmlText",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::Intent ClipData_Item::getIntent() const
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline JString ClipData_Item::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::net::Uri ClipData_Item::getUri() const
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	inline JString ClipData_Item::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
