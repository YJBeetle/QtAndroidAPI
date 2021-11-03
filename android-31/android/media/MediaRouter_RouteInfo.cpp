#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "./MediaRouter_RouteCategory.hpp"
#include "./MediaRouter_RouteGroup.hpp"
#include "../view/Display.hpp"
#include "./MediaRouter_RouteInfo.hpp"

namespace android::media
{
	// Fields
	jint MediaRouter_RouteInfo::DEVICE_TYPE_BLUETOOTH()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"DEVICE_TYPE_BLUETOOTH"
		);
	}
	jint MediaRouter_RouteInfo::DEVICE_TYPE_SPEAKER()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"DEVICE_TYPE_SPEAKER"
		);
	}
	jint MediaRouter_RouteInfo::DEVICE_TYPE_TV()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"DEVICE_TYPE_TV"
		);
	}
	jint MediaRouter_RouteInfo::DEVICE_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"DEVICE_TYPE_UNKNOWN"
		);
	}
	jint MediaRouter_RouteInfo::PLAYBACK_TYPE_LOCAL()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"PLAYBACK_TYPE_LOCAL"
		);
	}
	jint MediaRouter_RouteInfo::PLAYBACK_TYPE_REMOTE()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"PLAYBACK_TYPE_REMOTE"
		);
	}
	jint MediaRouter_RouteInfo::PLAYBACK_VOLUME_FIXED()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"PLAYBACK_VOLUME_FIXED"
		);
	}
	jint MediaRouter_RouteInfo::PLAYBACK_VOLUME_VARIABLE()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"PLAYBACK_VOLUME_VARIABLE"
		);
	}
	
	// QAndroidJniObject forward
	MediaRouter_RouteInfo::MediaRouter_RouteInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::media::MediaRouter_RouteCategory MediaRouter_RouteInfo::getCategory()
	{
		return callObjectMethod(
			"getCategory",
			"()Landroid/media/MediaRouter$RouteCategory;"
		);
	}
	jstring MediaRouter_RouteInfo::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint MediaRouter_RouteInfo::getDeviceType()
	{
		return callMethod<jint>(
			"getDeviceType",
			"()I"
		);
	}
	android::media::MediaRouter_RouteGroup MediaRouter_RouteInfo::getGroup()
	{
		return callObjectMethod(
			"getGroup",
			"()Landroid/media/MediaRouter$RouteGroup;"
		);
	}
	android::graphics::drawable::Drawable MediaRouter_RouteInfo::getIconDrawable()
	{
		return callObjectMethod(
			"getIconDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jstring MediaRouter_RouteInfo::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring MediaRouter_RouteInfo::getName(android::content::Context arg0)
	{
		return callObjectMethod(
			"getName",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.object()
		).object<jstring>();
	}
	jint MediaRouter_RouteInfo::getPlaybackStream()
	{
		return callMethod<jint>(
			"getPlaybackStream",
			"()I"
		);
	}
	jint MediaRouter_RouteInfo::getPlaybackType()
	{
		return callMethod<jint>(
			"getPlaybackType",
			"()I"
		);
	}
	android::view::Display MediaRouter_RouteInfo::getPresentationDisplay()
	{
		return callObjectMethod(
			"getPresentationDisplay",
			"()Landroid/view/Display;"
		);
	}
	jstring MediaRouter_RouteInfo::getStatus()
	{
		return callObjectMethod(
			"getStatus",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint MediaRouter_RouteInfo::getSupportedTypes()
	{
		return callMethod<jint>(
			"getSupportedTypes",
			"()I"
		);
	}
	jobject MediaRouter_RouteInfo::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint MediaRouter_RouteInfo::getVolume()
	{
		return callMethod<jint>(
			"getVolume",
			"()I"
		);
	}
	jint MediaRouter_RouteInfo::getVolumeHandling()
	{
		return callMethod<jint>(
			"getVolumeHandling",
			"()I"
		);
	}
	jint MediaRouter_RouteInfo::getVolumeMax()
	{
		return callMethod<jint>(
			"getVolumeMax",
			"()I"
		);
	}
	jboolean MediaRouter_RouteInfo::isConnecting()
	{
		return callMethod<jboolean>(
			"isConnecting",
			"()Z"
		);
	}
	jboolean MediaRouter_RouteInfo::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void MediaRouter_RouteInfo::requestSetVolume(jint arg0)
	{
		callMethod<void>(
			"requestSetVolume",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_RouteInfo::requestUpdateVolume(jint arg0)
	{
		callMethod<void>(
			"requestUpdateVolume",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_RouteInfo::setTag(jobject arg0)
	{
		callMethod<void>(
			"setTag",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jstring MediaRouter_RouteInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media

