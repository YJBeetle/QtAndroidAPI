#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::media::browse
{
	class MediaBrowser_ConnectionCallback;
}
namespace android::media::browse
{
	class MediaBrowser_ItemCallback;
}
namespace android::media::browse
{
	class MediaBrowser_SubscriptionCallback;
}
namespace android::media::session
{
	class MediaSession_Token;
}
namespace android::os
{
	class Bundle;
}

namespace android::media::browse
{
	class MediaBrowser : public JObject
	{
	public:
		// Fields
		static jstring EXTRA_PAGE();
		static jstring EXTRA_PAGE_SIZE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaBrowser(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaBrowser(QAndroidJniObject obj);
		
		// Constructors
		MediaBrowser(android::content::Context arg0, android::content::ComponentName arg1, android::media::browse::MediaBrowser_ConnectionCallback arg2, android::os::Bundle arg3);
		
		// Methods
		void connect();
		void disconnect();
		android::os::Bundle getExtras();
		void getItem(jstring arg0, android::media::browse::MediaBrowser_ItemCallback arg1);
		jstring getRoot();
		android::content::ComponentName getServiceComponent();
		android::media::session::MediaSession_Token getSessionToken();
		jboolean isConnected();
		void subscribe(jstring arg0, android::media::browse::MediaBrowser_SubscriptionCallback arg1);
		void subscribe(jstring arg0, android::os::Bundle arg1, android::media::browse::MediaBrowser_SubscriptionCallback arg2);
		void unsubscribe(jstring arg0);
		void unsubscribe(jstring arg0, android::media::browse::MediaBrowser_SubscriptionCallback arg1);
	};
} // namespace android::media::browse

