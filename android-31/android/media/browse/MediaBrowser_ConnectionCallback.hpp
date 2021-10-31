#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::browse
{
	class MediaBrowser_ConnectionCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaBrowser_ConnectionCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaBrowser_ConnectionCallback(QAndroidJniObject obj);
		
		// Constructors
		MediaBrowser_ConnectionCallback();
		
		// Methods
		void onConnected();
		void onConnectionFailed();
		void onConnectionSuspended();
	};
} // namespace android::media::browse

