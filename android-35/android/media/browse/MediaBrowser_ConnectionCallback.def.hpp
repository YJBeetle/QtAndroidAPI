#pragma once

#include "../../../JObject.hpp"

namespace android::media::browse
{
	class MediaBrowser_ConnectionCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaBrowser_ConnectionCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaBrowser_ConnectionCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaBrowser_ConnectionCallback();
		
		// Methods
		void onConnected() const;
		void onConnectionFailed() const;
		void onConnectionSuspended() const;
	};
} // namespace android::media::browse

