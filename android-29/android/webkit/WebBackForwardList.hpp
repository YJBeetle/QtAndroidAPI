#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::webkit
{
	class WebHistoryItem;
}

namespace android::webkit
{
	class WebBackForwardList : public __JniBaseClass
	{
	public:
		// Fields
		
		WebBackForwardList(QAndroidJniObject obj);
		// Constructors
		WebBackForwardList();
		
		// Methods
		jint getCurrentIndex();
		QAndroidJniObject getCurrentItem();
		QAndroidJniObject getItemAtIndex(jint arg0);
		jint getSize();
	};
} // namespace android::webkit

