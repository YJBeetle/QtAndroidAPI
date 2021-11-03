#include "../graphics/Bitmap.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./WebHistoryItem.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	WebHistoryItem::WebHistoryItem(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	WebHistoryItem::WebHistoryItem()
		: JObject(
			"android.webkit.WebHistoryItem",
			"()V"
		) {}
	
	// Methods
	android::graphics::Bitmap WebHistoryItem::getFavicon() const
	{
		return callObjectMethod(
			"getFavicon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	JString WebHistoryItem::getOriginalUrl() const
	{
		return callObjectMethod(
			"getOriginalUrl",
			"()Ljava/lang/String;"
		);
	}
	JString WebHistoryItem::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/String;"
		);
	}
	JString WebHistoryItem::getUrl() const
	{
		return callObjectMethod(
			"getUrl",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::webkit

