#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaRouter2_RouteCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRouter2_RouteCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter2_RouteCallback(QJniObject obj);
		
		// Constructors
		MediaRouter2_RouteCallback();
		
		// Methods
		void onRoutesAdded(__JniBaseClass arg0);
		void onRoutesChanged(__JniBaseClass arg0);
		void onRoutesRemoved(__JniBaseClass arg0);
	};
} // namespace android::media

