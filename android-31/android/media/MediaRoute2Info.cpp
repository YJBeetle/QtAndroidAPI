#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./MediaRoute2Info.hpp"

namespace android::media
{
	// Fields
	jint MediaRoute2Info::CONNECTION_STATE_CONNECTED()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"CONNECTION_STATE_CONNECTED"
		);
	}
	jint MediaRoute2Info::CONNECTION_STATE_CONNECTING()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"CONNECTION_STATE_CONNECTING"
		);
	}
	jint MediaRoute2Info::CONNECTION_STATE_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"CONNECTION_STATE_DISCONNECTED"
		);
	}
	__JniBaseClass MediaRoute2Info::CREATOR()
	{
		return getStaticObjectField(
			"android.media.MediaRoute2Info",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring MediaRoute2Info::FEATURE_LIVE_AUDIO()
	{
		return getStaticObjectField(
			"android.media.MediaRoute2Info",
			"FEATURE_LIVE_AUDIO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRoute2Info::FEATURE_LIVE_VIDEO()
	{
		return getStaticObjectField(
			"android.media.MediaRoute2Info",
			"FEATURE_LIVE_VIDEO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRoute2Info::FEATURE_REMOTE_AUDIO_PLAYBACK()
	{
		return getStaticObjectField(
			"android.media.MediaRoute2Info",
			"FEATURE_REMOTE_AUDIO_PLAYBACK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRoute2Info::FEATURE_REMOTE_PLAYBACK()
	{
		return getStaticObjectField(
			"android.media.MediaRoute2Info",
			"FEATURE_REMOTE_PLAYBACK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRoute2Info::FEATURE_REMOTE_VIDEO_PLAYBACK()
	{
		return getStaticObjectField(
			"android.media.MediaRoute2Info",
			"FEATURE_REMOTE_VIDEO_PLAYBACK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaRoute2Info::PLAYBACK_VOLUME_FIXED()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"PLAYBACK_VOLUME_FIXED"
		);
	}
	jint MediaRoute2Info::PLAYBACK_VOLUME_VARIABLE()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"PLAYBACK_VOLUME_VARIABLE"
		);
	}
	
	// QAndroidJniObject forward
	MediaRoute2Info::MediaRoute2Info(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint MediaRoute2Info::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean MediaRoute2Info::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring MediaRoute2Info::getClientPackageName()
	{
		return callObjectMethod(
			"getClientPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaRoute2Info::getConnectionState()
	{
		return callMethod<jint>(
			"getConnectionState",
			"()I"
		);
	}
	jstring MediaRoute2Info::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::os::Bundle MediaRoute2Info::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	__JniBaseClass MediaRoute2Info::getFeatures()
	{
		return callObjectMethod(
			"getFeatures",
			"()Ljava/util/List;"
		);
	}
	android::net::Uri MediaRoute2Info::getIconUri()
	{
		return callObjectMethod(
			"getIconUri",
			"()Landroid/net/Uri;"
		);
	}
	jstring MediaRoute2Info::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaRoute2Info::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint MediaRoute2Info::getVolume()
	{
		return callMethod<jint>(
			"getVolume",
			"()I"
		);
	}
	jint MediaRoute2Info::getVolumeHandling()
	{
		return callMethod<jint>(
			"getVolumeHandling",
			"()I"
		);
	}
	jint MediaRoute2Info::getVolumeMax()
	{
		return callMethod<jint>(
			"getVolumeMax",
			"()I"
		);
	}
	jint MediaRoute2Info::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean MediaRoute2Info::isSystemRoute()
	{
		return callMethod<jboolean>(
			"isSystemRoute",
			"()Z"
		);
	}
	jstring MediaRoute2Info::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void MediaRoute2Info::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media
