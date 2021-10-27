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
		
		WebHistoryItem(QAndroidJniObject obj);
		// Constructors
		WebHistoryItem();
		
		// Methods
		QAndroidJniObject getFavicon();
		jstring getOriginalUrl();
		jstring getTitle();
		jstring getUrl();
	};
} // namespace android::webkit

