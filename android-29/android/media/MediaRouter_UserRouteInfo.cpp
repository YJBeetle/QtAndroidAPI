#include "../graphics/drawable/Drawable.hpp"
#include "./MediaRouter_RouteCategory.hpp"
#include "./MediaRouter_VolumeCallback.hpp"
#include "./RemoteControlClient.hpp"
#include "./MediaRouter_UserRouteInfo.hpp"

namespace android::media
{
	// Fields
	
	MediaRouter_UserRouteInfo::MediaRouter_UserRouteInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject MediaRouter_UserRouteInfo::getRemoteControlClient()
	{
		return __thiz.callObjectMethod(
			"getRemoteControlClient",
			"()Landroid/media/RemoteControlClient;"
		);
	}
	void MediaRouter_UserRouteInfo::requestSetVolume(jint arg0)
	{
		__thiz.callMethod<void>(
			"requestSetVolume",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::requestUpdateVolume(jint arg0)
	{
		__thiz.callMethod<void>(
			"requestUpdateVolume",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setIconDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setIconDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRouter_UserRouteInfo::setIconResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIconResource",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setName(jint arg0)
	{
		__thiz.callMethod<void>(
			"setName",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setName",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setPlaybackStream(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPlaybackStream",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setPlaybackType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPlaybackType",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setRemoteControlClient(android::media::RemoteControlClient arg0)
	{
		__thiz.callMethod<void>(
			"setRemoteControlClient",
			"(Landroid/media/RemoteControlClient;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRouter_UserRouteInfo::setStatus(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setStatus",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setVolume(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVolume",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setVolumeCallback(android::media::MediaRouter_VolumeCallback arg0)
	{
		__thiz.callMethod<void>(
			"setVolumeCallback",
			"(Landroid/media/MediaRouter$VolumeCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRouter_UserRouteInfo::setVolumeHandling(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVolumeHandling",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setVolumeMax(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVolumeMax",
			"(I)V",
			arg0
		);
	}
} // namespace android::media

