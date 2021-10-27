#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class MediaBrowser : public __JniBaseClass
	{
	public:
		// Fields
		static jstring EXTRA_PAGE();
		static jstring EXTRA_PAGE_SIZE();
		
		MediaBrowser(QAndroidJniObject obj);
		// Constructors
		MediaBrowser(android::content::Context &arg0, android::content::ComponentName &arg1, android::media::browse::MediaBrowser_ConnectionCallback &arg2, android::os::Bundle &arg3);
		MediaBrowser() = default;
		
		// Methods
		void connect();
		void disconnect();
		QAndroidJniObject getExtras();
		void getItem(jstring arg0, android::media::browse::MediaBrowser_ItemCallback arg1);
		void getItem(const QString &arg0, android::media::browse::MediaBrowser_ItemCallback arg1);
		jstring getRoot();
		QAndroidJniObject getServiceComponent();
		QAndroidJniObject getSessionToken();
		jboolean isConnected();
		void subscribe(jstring arg0, android::media::browse::MediaBrowser_SubscriptionCallback arg1);
		void subscribe(const QString &arg0, android::media::browse::MediaBrowser_SubscriptionCallback arg1);
		void subscribe(jstring arg0, android::os::Bundle arg1, android::media::browse::MediaBrowser_SubscriptionCallback arg2);
		void subscribe(const QString &arg0, android::os::Bundle arg1, android::media::browse::MediaBrowser_SubscriptionCallback arg2);
		void unsubscribe(jstring arg0);
		void unsubscribe(const QString &arg0);
		void unsubscribe(jstring arg0, android::media::browse::MediaBrowser_SubscriptionCallback arg1);
		void unsubscribe(const QString &arg0, android::media::browse::MediaBrowser_SubscriptionCallback arg1);
	};
} // namespace android::media::browse

