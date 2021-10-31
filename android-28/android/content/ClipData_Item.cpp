#include "./Context.hpp"
#include "./Intent.hpp"
#include "../net/Uri.hpp"
#include "./ClipData_Item.hpp"

namespace android::content
{
	// Fields
	
	// QJniObject forward
	ClipData_Item::ClipData_Item(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ClipData_Item::ClipData_Item(android::content::Intent arg0)
		: __JniBaseClass(
			"android.content.ClipData$Item",
			"(Landroid/content/Intent;)V",
			arg0.object()
		) {}
	ClipData_Item::ClipData_Item(android::net::Uri arg0)
		: __JniBaseClass(
			"android.content.ClipData$Item",
			"(Landroid/net/Uri;)V",
			arg0.object()
		) {}
	ClipData_Item::ClipData_Item(jstring arg0)
		: __JniBaseClass(
			"android.content.ClipData$Item",
			"(Ljava/lang/CharSequence;)V",
			arg0
		) {}
	ClipData_Item::ClipData_Item(jstring arg0, jstring arg1)
		: __JniBaseClass(
			"android.content.ClipData$Item",
			"(Ljava/lang/CharSequence;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	ClipData_Item::ClipData_Item(jstring arg0, android::content::Intent arg1, android::net::Uri arg2)
		: __JniBaseClass(
			"android.content.ClipData$Item",
			"(Ljava/lang/CharSequence;Landroid/content/Intent;Landroid/net/Uri;)V",
			arg0,
			arg1.object(),
			arg2.object()
		) {}
	ClipData_Item::ClipData_Item(jstring arg0, jstring arg1, android::content::Intent arg2, android::net::Uri arg3)
		: __JniBaseClass(
			"android.content.ClipData$Item",
			"(Ljava/lang/CharSequence;Ljava/lang/String;Landroid/content/Intent;Landroid/net/Uri;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	jstring ClipData_Item::coerceToHtmlText(android::content::Context arg0)
	{
		return callObjectMethod(
			"coerceToHtmlText",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring ClipData_Item::coerceToStyledText(android::content::Context arg0)
	{
		return callObjectMethod(
			"coerceToStyledText",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.object()
		).object<jstring>();
	}
	jstring ClipData_Item::coerceToText(android::content::Context arg0)
	{
		return callObjectMethod(
			"coerceToText",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.object()
		).object<jstring>();
	}
	jstring ClipData_Item::getHtmlText()
	{
		return callObjectMethod(
			"getHtmlText",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::content::Intent ClipData_Item::getIntent()
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	jstring ClipData_Item::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::net::Uri ClipData_Item::getUri()
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	jstring ClipData_Item::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::content

