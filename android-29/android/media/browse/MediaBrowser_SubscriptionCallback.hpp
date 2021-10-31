#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::media::browse
{
	class MediaBrowser_SubscriptionCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaBrowser_SubscriptionCallback(QAndroidJniObject obj);
		// Constructors
		MediaBrowser_SubscriptionCallback();
		
		// Methods
		void onChildrenLoaded(jstring arg0, __JniBaseClass arg1);
		void onChildrenLoaded(jstring arg0, __JniBaseClass arg1, android::os::Bundle arg2);
		void onError(jstring arg0);
		void onError(jstring arg0, android::os::Bundle arg1);
	};
} // namespace android::media::browse

