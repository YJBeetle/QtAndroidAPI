#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
class JString;

namespace android::service::media
{
	class MediaBrowserService_BrowserRoot : public JObject
	{
	public:
		// Fields
		static JString EXTRA_OFFLINE();
		static JString EXTRA_RECENT();
		static JString EXTRA_SUGGESTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaBrowserService_BrowserRoot(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaBrowserService_BrowserRoot(QJniObject obj);
		
		// Constructors
		MediaBrowserService_BrowserRoot(JString arg0, android::os::Bundle arg1);
		
		// Methods
		android::os::Bundle getExtras() const;
		JString getRootId() const;
	};
} // namespace android::service::media

