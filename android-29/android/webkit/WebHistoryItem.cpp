#include "../graphics/Bitmap.hpp"
#include "./WebHistoryItem.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	WebHistoryItem::WebHistoryItem(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WebHistoryItem::WebHistoryItem()
		: JObject(
			"android.webkit.WebHistoryItem",
			"()V"
		) {}
	
	// Methods
	android::graphics::Bitmap WebHistoryItem::getFavicon()
	{
		return callObjectMethod(
			"getFavicon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	jstring WebHistoryItem::getOriginalUrl()
	{
		return callObjectMethod(
			"getOriginalUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WebHistoryItem::getTitle()
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WebHistoryItem::getUrl()
	{
		return callObjectMethod(
			"getUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::webkit

