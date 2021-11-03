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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaBrowser_SubscriptionCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaBrowser_SubscriptionCallback(QJniObject obj);
		
		// Constructors
		MediaBrowser_SubscriptionCallback();
		
		// Methods
		void onChildrenLoaded(JString arg0, JObject arg1) const;
		void onChildrenLoaded(JString arg0, JObject arg1, android::os::Bundle arg2) const;
		void onError(JString arg0) const;
		void onError(JString arg0, android::os::Bundle arg1) const;
	};
} // namespace android::media::browse

