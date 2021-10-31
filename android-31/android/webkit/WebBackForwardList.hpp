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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebBackForwardList(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WebBackForwardList(QAndroidJniObject obj);
		
		// Constructors
		WebBackForwardList();
		
		// Methods
		jint getCurrentIndex();
		android::webkit::WebHistoryItem getCurrentItem();
		android::webkit::WebHistoryItem getItemAtIndex(jint arg0);
		jint getSize();
	};
} // namespace android::webkit

