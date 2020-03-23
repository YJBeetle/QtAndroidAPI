#pragma once

#ifndef ANDROID_CONTENT_CLIPDATA_ITEM
#define ANDROID_CONTENT_CLIPDATA_ITEM

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::content
{
	class ClipData_Item : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, __jni_impl::android::content::Intent arg2, __jni_impl::android::net::Uri arg3);
		void __constructor(jstring arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::net::Uri arg2);
		void __constructor(__jni_impl::android::net::Uri arg0);
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(__jni_impl::android::content::Intent arg0);
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject getText();
		QAndroidJniObject getUri();
		QAndroidJniObject getIntent();
		QAndroidJniObject getHtmlText();
		QAndroidJniObject coerceToText(__jni_impl::android::content::Context arg0);
		QAndroidJniObject coerceToStyledText(__jni_impl::android::content::Context arg0);
		QAndroidJniObject coerceToHtmlText(__jni_impl::android::content::Context arg0);
	};
} // namespace __jni_impl::android::content

#include "Intent.hpp"
#include "../net/Uri.hpp"
#include "Context.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void ClipData_Item::__constructor(jstring arg0, jstring arg1, __jni_impl::android::content::Intent arg2, __jni_impl::android::net::Uri arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData$Item",
			"(Ljava/lang/CharSequence;Ljava/lang/String;Landroid/content/Intent;Landroid/net/Uri;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	void ClipData_Item::__constructor(jstring arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::net::Uri arg2)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData$Item",
			"(Ljava/lang/CharSequence;Landroid/content/Intent;Landroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ClipData_Item::__constructor(__jni_impl::android::net::Uri arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData$Item",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object());
	}
	void ClipData_Item::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData$Item",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	void ClipData_Item::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData$Item",
			"(Ljava/lang/CharSequence;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void ClipData_Item::__constructor(__jni_impl::android::content::Intent arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData$Item",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject ClipData_Item::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ClipData_Item::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject ClipData_Item::getUri()
	{
		return __thiz.callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;");
	}
	QAndroidJniObject ClipData_Item::getIntent()
	{
		return __thiz.callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;");
	}
	QAndroidJniObject ClipData_Item::getHtmlText()
	{
		return __thiz.callObjectMethod(
			"getHtmlText",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ClipData_Item::coerceToText(__jni_impl::android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"coerceToText",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ClipData_Item::coerceToStyledText(__jni_impl::android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"coerceToStyledText",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ClipData_Item::coerceToHtmlText(__jni_impl::android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"coerceToHtmlText",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class ClipData_Item : public __jni_impl::android::content::ClipData_Item
	{
	public:
		ClipData_Item(QAndroidJniObject obj) { __thiz = obj; }
		ClipData_Item(jstring arg0, jstring arg1, __jni_impl::android::content::Intent arg2, __jni_impl::android::net::Uri arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		ClipData_Item(jstring arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::net::Uri arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ClipData_Item(__jni_impl::android::net::Uri arg0)
		{
			__constructor(
				arg0);
		}
		ClipData_Item(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ClipData_Item(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ClipData_Item(__jni_impl::android::content::Intent arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_CLIPDATA_ITEM

