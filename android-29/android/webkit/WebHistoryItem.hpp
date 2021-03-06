#pragma once

#ifndef ANDROID_WEBKIT_WEBHISTORYITEM
#define ANDROID_WEBKIT_WEBHISTORYITEM

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}

namespace __jni_impl::android::webkit
{
	class WebHistoryItem : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getTitle();
		jstring getUrl();
		jstring getOriginalUrl();
		QAndroidJniObject getFavicon();
	};
} // namespace __jni_impl::android::webkit

#include "../graphics/Bitmap.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void WebHistoryItem::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebHistoryItem",
			"()V");
	}
	
	// Methods
	jstring WebHistoryItem::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WebHistoryItem::getUrl()
	{
		return __thiz.callObjectMethod(
			"getUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WebHistoryItem::getOriginalUrl()
	{
		return __thiz.callObjectMethod(
			"getOriginalUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject WebHistoryItem::getFavicon()
	{
		return __thiz.callObjectMethod(
			"getFavicon",
			"()Landroid/graphics/Bitmap;"
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebHistoryItem : public __jni_impl::android::webkit::WebHistoryItem
	{
	public:
		WebHistoryItem(QAndroidJniObject obj) { __thiz = obj; }
		WebHistoryItem()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBHISTORYITEM

