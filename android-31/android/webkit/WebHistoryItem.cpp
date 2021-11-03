#include "../graphics/Bitmap.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	JString WebHistoryItem::getOriginalUrl()
	{
		return callObjectMethod(
			"getOriginalUrl",
			"()Ljava/lang/String;"
		);
	}
	JString WebHistoryItem::getTitle()
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/String;"
		);
	}
	JString WebHistoryItem::getUrl()
	{
		return callObjectMethod(
			"getUrl",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::webkit

