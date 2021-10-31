#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Bitmap;
}

namespace android::webkit
{
	class WebHistoryItem : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebHistoryItem(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WebHistoryItem(QJniObject obj);
		
		// Constructors
		WebHistoryItem();
		
		// Methods
		android::graphics::Bitmap getFavicon();
		jstring getOriginalUrl();
		jstring getTitle();
		jstring getUrl();
	};
} // namespace android::webkit

