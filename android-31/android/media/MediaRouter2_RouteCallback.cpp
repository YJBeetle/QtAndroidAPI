#include "./MediaRouter2_RouteCallback.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	MediaRouter2_RouteCallback::MediaRouter2_RouteCallback()
		: JObject(
			"android.media.MediaRouter2$RouteCallback",
			"()V"
		) {}
	
	// Methods
	void MediaRouter2_RouteCallback::onRoutesAdded(JObject arg0) const
	{
		callMethod<void>(
			"onRoutesAdded",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void MediaRouter2_RouteCallback::onRoutesChanged(JObject arg0) const
	{
		callMethod<void>(
			"onRoutesChanged",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void MediaRouter2_RouteCallback::onRoutesRemoved(JObject arg0) const
	{
		callMethod<void>(
			"onRoutesRemoved",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::media

