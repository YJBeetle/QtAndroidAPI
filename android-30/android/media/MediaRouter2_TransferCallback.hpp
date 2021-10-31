#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaRoute2Info;
}
namespace android::media
{
	class MediaRouter2_RoutingController;
}

namespace android::media
{
	class MediaRouter2_TransferCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRouter2_TransferCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter2_TransferCallback(QAndroidJniObject obj);
		
		// Constructors
		MediaRouter2_TransferCallback();
		
		// Methods
		void onStop(android::media::MediaRouter2_RoutingController arg0);
		void onTransfer(android::media::MediaRouter2_RoutingController arg0, android::media::MediaRouter2_RoutingController arg1);
		void onTransferFailure(android::media::MediaRoute2Info arg0);
	};
} // namespace android::media
