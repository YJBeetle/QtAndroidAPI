#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::browse
{
	class MediaBrowser_ConnectionCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaBrowser_ConnectionCallback(QAndroidJniObject obj);
		// Constructors
		MediaBrowser_ConnectionCallback();
		
		// Methods
		void onConnected();
		void onConnectionFailed();
		void onConnectionSuspended();
	};
} // namespace android::media::browse

