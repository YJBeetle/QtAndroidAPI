#pragma once

#include "../../JObject.hpp"


namespace android::media
{
	class MediaRouter2_RouteCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRouter2_RouteCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter2_RouteCallback(QAndroidJniObject obj);
		
		// Constructors
		MediaRouter2_RouteCallback();
		
		// Methods
		void onRoutesAdded(JObject arg0);
		void onRoutesChanged(JObject arg0);
		void onRoutesRemoved(JObject arg0);
	};
} // namespace android::media

