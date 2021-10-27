#pragma once

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
		QAndroidJniObject getFavicon();
		jstring getOriginalUrl();
		jstring getTitle();
		jstring getUrl();
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
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject WebHistoryItem::getFavicon()
	{
		return __thiz.callObjectMethod(
			"getFavicon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	jstring WebHistoryItem::getOriginalUrl()
	{
		return __thiz.callObjectMethod(
			"getOriginalUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
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

