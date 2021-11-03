#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Bitmap;
}
class JObject;
class JString;

namespace android::webkit
{
	class WebHistoryItem : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebHistoryItem(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebHistoryItem(QAndroidJniObject obj);
		
		// Constructors
		WebHistoryItem();
		
		// Methods
		android::graphics::Bitmap getFavicon();
		JString getOriginalUrl();
		JString getTitle();
		JString getUrl();
	};
} // namespace android::webkit

