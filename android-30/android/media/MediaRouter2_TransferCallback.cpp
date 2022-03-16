#include "./MediaRoute2Info.hpp"
#include "./MediaRouter2_RoutingController.hpp"
#include "./MediaRouter2_TransferCallback.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	MediaRouter2_TransferCallback::MediaRouter2_TransferCallback()
		: JObject(
			"android.media.MediaRouter2$TransferCallback",
			"()V"
		) {}
	
	// Methods
	void MediaRouter2_TransferCallback::onStop(android::media::MediaRouter2_RoutingController arg0) const
	{
		callMethod<void>(
			"onStop",
			"(Landroid/media/MediaRouter2$RoutingController;)V",
			arg0.object()
		);
	}
	void MediaRouter2_TransferCallback::onTransfer(android::media::MediaRouter2_RoutingController arg0, android::media::MediaRouter2_RoutingController arg1) const
	{
		callMethod<void>(
			"onTransfer",
			"(Landroid/media/MediaRouter2$RoutingController;Landroid/media/MediaRouter2$RoutingController;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaRouter2_TransferCallback::onTransferFailure(android::media::MediaRoute2Info arg0) const
	{
		callMethod<void>(
			"onTransferFailure",
			"(Landroid/media/MediaRoute2Info;)V",
			arg0.object()
		);
	}
} // namespace android::media

