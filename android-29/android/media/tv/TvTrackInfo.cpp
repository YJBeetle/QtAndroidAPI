#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TvTrackInfo.hpp"

namespace android::media::tv
{
	// Fields
	JObject TvTrackInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.TvTrackInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint TvTrackInfo::TYPE_AUDIO()
	{
		return getStaticField<jint>(
			"android.media.tv.TvTrackInfo",
			"TYPE_AUDIO"
		);
	}
	jint TvTrackInfo::TYPE_SUBTITLE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvTrackInfo",
			"TYPE_SUBTITLE"
		);
	}
	jint TvTrackInfo::TYPE_VIDEO()
	{
		return getStaticField<jint>(
			"android.media.tv.TvTrackInfo",
			"TYPE_VIDEO"
		);
	}
	
	// QAndroidJniObject forward
	TvTrackInfo::TvTrackInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint TvTrackInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean TvTrackInfo::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint TvTrackInfo::getAudioChannelCount()
	{
		return callMethod<jint>(
			"getAudioChannelCount",
			"()I"
		);
	}
	jint TvTrackInfo::getAudioSampleRate()
	{
		return callMethod<jint>(
			"getAudioSampleRate",
			"()I"
		);
	}
	JString TvTrackInfo::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::os::Bundle TvTrackInfo::getExtra()
	{
		return callObjectMethod(
			"getExtra",
			"()Landroid/os/Bundle;"
		);
	}
	JString TvTrackInfo::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	JString TvTrackInfo::getLanguage()
	{
		return callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		);
	}
	jint TvTrackInfo::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jbyte TvTrackInfo::getVideoActiveFormatDescription()
	{
		return callMethod<jbyte>(
			"getVideoActiveFormatDescription",
			"()B"
		);
	}
	jfloat TvTrackInfo::getVideoFrameRate()
	{
		return callMethod<jfloat>(
			"getVideoFrameRate",
			"()F"
		);
	}
	jint TvTrackInfo::getVideoHeight()
	{
		return callMethod<jint>(
			"getVideoHeight",
			"()I"
		);
	}
	jfloat TvTrackInfo::getVideoPixelAspectRatio()
	{
		return callMethod<jfloat>(
			"getVideoPixelAspectRatio",
			"()F"
		);
	}
	jint TvTrackInfo::getVideoWidth()
	{
		return callMethod<jint>(
			"getVideoWidth",
			"()I"
		);
	}
	jint TvTrackInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void TvTrackInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::tv

