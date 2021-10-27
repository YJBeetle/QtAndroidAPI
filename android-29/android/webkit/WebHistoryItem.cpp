#include "../graphics/Bitmap.hpp"
#include "./WebHistoryItem.hpp"

namespace android::webkit
{
	// Fields
	
	WebHistoryItem::WebHistoryItem(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WebHistoryItem::WebHistoryItem()
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
} // namespace android::webkit

