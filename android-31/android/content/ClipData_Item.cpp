#include "./Context.hpp"
#include "./Intent.hpp"
#include "../net/Uri.hpp"
#include "../view/textclassifier/TextLinks.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./ClipData_Item.hpp"

namespace android::content
{
	// Fields
	
	// QJniObject forward
	ClipData_Item::ClipData_Item(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ClipData_Item::ClipData_Item(android::content::Intent arg0)
		: JObject(
			"android.content.ClipData$Item",
			"(Landroid/content/Intent;)V",
			arg0.object()
		) {}
	ClipData_Item::ClipData_Item(android::net::Uri arg0)
		: JObject(
			"android.content.ClipData$Item",
			"(Landroid/net/Uri;)V",
			arg0.object()
		) {}
	ClipData_Item::ClipData_Item(JString arg0)
		: JObject(
			"android.content.ClipData$Item",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		) {}
	ClipData_Item::ClipData_Item(JString arg0, JString arg1)
		: JObject(
			"android.content.ClipData$Item",
			"(Ljava/lang/CharSequence;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	ClipData_Item::ClipData_Item(JString arg0, android::content::Intent arg1, android::net::Uri arg2)
		: JObject(
			"android.content.ClipData$Item",
			"(Ljava/lang/CharSequence;Landroid/content/Intent;Landroid/net/Uri;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	ClipData_Item::ClipData_Item(JString arg0, JString arg1, android::content::Intent arg2, android::net::Uri arg3)
		: JObject(
			"android.content.ClipData$Item",
			"(Ljava/lang/CharSequence;Ljava/lang/String;Landroid/content/Intent;Landroid/net/Uri;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	JString ClipData_Item::coerceToHtmlText(android::content::Context arg0)
	{
		return callObjectMethod(
			"coerceToHtmlText",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString ClipData_Item::coerceToStyledText(android::content::Context arg0)
	{
		return callObjectMethod(
			"coerceToStyledText",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	JString ClipData_Item::coerceToText(android::content::Context arg0)
	{
		return callObjectMethod(
			"coerceToText",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	JString ClipData_Item::getHtmlText()
	{
		return callObjectMethod(
			"getHtmlText",
			"()Ljava/lang/String;"
		);
	}
	android::content::Intent ClipData_Item::getIntent()
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	JString ClipData_Item::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::view::textclassifier::TextLinks ClipData_Item::getTextLinks()
	{
		return callObjectMethod(
			"getTextLinks",
			"()Landroid/view/textclassifier/TextLinks;"
		);
	}
	android::net::Uri ClipData_Item::getUri()
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	JString ClipData_Item::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::content

