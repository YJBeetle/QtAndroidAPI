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
	
	// QJniObject forward
	TvTrackInfo::TvTrackInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint TvTrackInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean TvTrackInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint TvTrackInfo::getAudioChannelCount() const
	{
		return callMethod<jint>(
			"getAudioChannelCount",
			"()I"
		);
	}
	jint TvTrackInfo::getAudioSampleRate() const
	{
		return callMethod<jint>(
			"getAudioSampleRate",
			"()I"
		);
	}
	JString TvTrackInfo::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::os::Bundle TvTrackInfo::getExtra() const
	{
		return callObjectMethod(
			"getExtra",
			"()Landroid/os/Bundle;"
		);
	}
	JString TvTrackInfo::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	JString TvTrackInfo::getLanguage() const
	{
		return callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		);
	}
	jint TvTrackInfo::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jbyte TvTrackInfo::getVideoActiveFormatDescription() const
	{
		return callMethod<jbyte>(
			"getVideoActiveFormatDescription",
			"()B"
		);
	}
	jfloat TvTrackInfo::getVideoFrameRate() const
	{
		return callMethod<jfloat>(
			"getVideoFrameRate",
			"()F"
		);
	}
	jint TvTrackInfo::getVideoHeight() const
	{
		return callMethod<jint>(
			"getVideoHeight",
			"()I"
		);
	}
	jfloat TvTrackInfo::getVideoPixelAspectRatio() const
	{
		return callMethod<jfloat>(
			"getVideoPixelAspectRatio",
			"()F"
		);
	}
	jint TvTrackInfo::getVideoWidth() const
	{
		return callMethod<jint>(
			"getVideoWidth",
			"()I"
		);
	}
	jint TvTrackInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void TvTrackInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::tv

