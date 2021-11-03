#include "../graphics/drawable/Drawable.hpp"
#include "./MediaRouter_RouteCategory.hpp"
#include "./MediaRouter_VolumeCallback.hpp"
#include "./RemoteControlClient.hpp"
#include "../../JString.hpp"
#include "./MediaRouter_UserRouteInfo.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaRouter_UserRouteInfo::MediaRouter_UserRouteInfo(QJniObject obj) : android::media::MediaRouter_RouteInfo(obj) {}
	
	// Constructors
	
	// Methods
	android::media::RemoteControlClient MediaRouter_UserRouteInfo::getRemoteControlClient() const
	{
		return callObjectMethod(
			"getRemoteControlClient",
			"()Landroid/media/RemoteControlClient;"
		);
	}
	void MediaRouter_UserRouteInfo::requestSetVolume(jint arg0) const
	{
		callMethod<void>(
			"requestSetVolume",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::requestUpdateVolume(jint arg0) const
	{
		callMethod<void>(
			"requestUpdateVolume",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setDescription(JString arg0) const
	{
		callMethod<void>(
			"setDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void MediaRouter_UserRouteInfo::setIconDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setIconDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void MediaRouter_UserRouteInfo::setIconResource(jint arg0) const
	{
		callMethod<void>(
			"setIconResource",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setName(jint arg0) const
	{
		callMethod<void>(
			"setName",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setName(JString arg0) const
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void MediaRouter_UserRouteInfo::setPlaybackStream(jint arg0) const
	{
		callMethod<void>(
			"setPlaybackStream",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setPlaybackType(jint arg0) const
	{
		callMethod<void>(
			"setPlaybackType",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setRemoteControlClient(android::media::RemoteControlClient arg0) const
	{
		callMethod<void>(
			"setRemoteControlClient",
			"(Landroid/media/RemoteControlClient;)V",
			arg0.object()
		);
	}
	void MediaRouter_UserRouteInfo::setStatus(JString arg0) const
	{
		callMethod<void>(
			"setStatus",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void MediaRouter_UserRouteInfo::setVolume(jint arg0) const
	{
		callMethod<void>(
			"setVolume",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setVolumeCallback(android::media::MediaRouter_VolumeCallback arg0) const
	{
		callMethod<void>(
			"setVolumeCallback",
			"(Landroid/media/MediaRouter$VolumeCallback;)V",
			arg0.object()
		);
	}
	void MediaRouter_UserRouteInfo::setVolumeHandling(jint arg0) const
	{
		callMethod<void>(
			"setVolumeHandling",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setVolumeMax(jint arg0) const
	{
		callMethod<void>(
			"setVolumeMax",
			"(I)V",
			arg0
		);
	}
} // namespace android::media

