#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
class JString;

namespace android::media::browse
{
	class MediaBrowser_SubscriptionCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaBrowser_SubscriptionCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaBrowser_SubscriptionCallback(QAndroidJniObject obj);
		
		// Constructors
		MediaBrowser_SubscriptionCallback();
		
		// Methods
		void onChildrenLoaded(JString arg0, JObject arg1);
		void onChildrenLoaded(JString arg0, JObject arg1, android::os::Bundle arg2);
		void onError(JString arg0);
		void onError(JString arg0, android::os::Bundle arg1);
	};
} // namespace android::media::browse

