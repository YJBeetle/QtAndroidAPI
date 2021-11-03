#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Bitmap;
}

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
		jstring getOriginalUrl();
		jstring getTitle();
		jstring getUrl();
	};
} // namespace android::webkit

