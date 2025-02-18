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
class JString;

namespace android::media::browse
{
	class MediaBrowser : public JObject
	{
	public:
		// Fields
		static JString EXTRA_PAGE();
		static JString EXTRA_PAGE_SIZE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaBrowser(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaBrowser(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaBrowser(android::content::Context arg0, android::content::ComponentName arg1, android::media::browse::MediaBrowser_ConnectionCallback arg2, android::os::Bundle arg3);
		
		// Methods
		void connect() const;
		void disconnect() const;
		android::os::Bundle getExtras() const;
		void getItem(JString arg0, android::media::browse::MediaBrowser_ItemCallback arg1) const;
		JString getRoot() const;
		android::content::ComponentName getServiceComponent() const;
		android::media::session::MediaSession_Token getSessionToken() const;
		jboolean isConnected() const;
		void subscribe(JString arg0, android::media::browse::MediaBrowser_SubscriptionCallback arg1) const;
		void subscribe(JString arg0, android::os::Bundle arg1, android::media::browse::MediaBrowser_SubscriptionCallback arg2) const;
		void unsubscribe(JString arg0) const;
		void unsubscribe(JString arg0, android::media::browse::MediaBrowser_SubscriptionCallback arg1) const;
	};
} // namespace android::media::browse

