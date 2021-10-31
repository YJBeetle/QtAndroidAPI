#include "./Context.hpp"
#include "./Intent.hpp"
#include "../net/Uri.hpp"
#include "./ClipData_Item.hpp"

namespace android::content
{
	// Fields
	
	ClipData_Item::ClipData_Item(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ClipData_Item::ClipData_Item(android::content::Intent arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData$Item",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	ClipData_Item::ClipData_Item(android::net::Uri arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData$Item",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	ClipData_Item::ClipData_Item(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData$Item",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	ClipData_Item::ClipData_Item(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData$Item",
			"(Ljava/lang/CharSequence;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	ClipData_Item::ClipData_Item(jstring arg0, android::content::Intent arg1, android::net::Uri arg2)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData$Item",
			"(Ljava/lang/CharSequence;Landroid/content/Intent;Landroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	ClipData_Item::ClipData_Item(jstring arg0, jstring arg1, android::content::Intent arg2, android::net::Uri arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData$Item",
			"(Ljava/lang/CharSequence;Ljava/lang/String;Landroid/content/Intent;Landroid/net/Uri;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	jstring ClipData_Item::coerceToHtmlText(android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"coerceToHtmlText",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring ClipData_Item::coerceToStyledText(android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"coerceToStyledText",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring ClipData_Item::coerceToText(android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"coerceToText",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring ClipData_Item::getHtmlText()
	{
		return __thiz.callObjectMethod(
			"getHtmlText",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ClipData_Item::getIntent()
	{
		return __thiz.callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	jstring ClipData_Item::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject ClipData_Item::getUri()
	{
		return __thiz.callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	jstring ClipData_Item::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::content

