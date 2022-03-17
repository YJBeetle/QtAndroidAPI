#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TvTrackInfo.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject TvTrackInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.TvTrackInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint TvTrackInfo::TYPE_AUDIO()
	{
		return getStaticField<jint>(
			"android.media.tv.TvTrackInfo",
			"TYPE_AUDIO"
		);
	}
	inline jint TvTrackInfo::TYPE_SUBTITLE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvTrackInfo",
			"TYPE_SUBTITLE"
		);
	}
	inline jint TvTrackInfo::TYPE_VIDEO()
	{
		return getStaticField<jint>(
			"android.media.tv.TvTrackInfo",
			"TYPE_VIDEO"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TvTrackInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean TvTrackInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint TvTrackInfo::getAudioChannelCount() const
	{
		return callMethod<jint>(
			"getAudioChannelCount",
			"()I"
		);
	}
	inline jint TvTrackInfo::getAudioSampleRate() const
	{
		return callMethod<jint>(
			"getAudioSampleRate",
			"()I"
		);
	}
	inline JString TvTrackInfo::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString TvTrackInfo::getEncoding() const
	{
		return callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		);
	}
	inline android::os::Bundle TvTrackInfo::getExtra() const
	{
		return callObjectMethod(
			"getExtra",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString TvTrackInfo::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline JString TvTrackInfo::getLanguage() const
	{
		return callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		);
	}
	inline jint TvTrackInfo::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jbyte TvTrackInfo::getVideoActiveFormatDescription() const
	{
		return callMethod<jbyte>(
			"getVideoActiveFormatDescription",
			"()B"
		);
	}
	inline jfloat TvTrackInfo::getVideoFrameRate() const
	{
		return callMethod<jfloat>(
			"getVideoFrameRate",
			"()F"
		);
	}
	inline jint TvTrackInfo::getVideoHeight() const
	{
		return callMethod<jint>(
			"getVideoHeight",
			"()I"
		);
	}
	inline jfloat TvTrackInfo::getVideoPixelAspectRatio() const
	{
		return callMethod<jfloat>(
			"getVideoPixelAspectRatio",
			"()F"
		);
	}
	inline jint TvTrackInfo::getVideoWidth() const
	{
		return callMethod<jint>(
			"getVideoWidth",
			"()I"
		);
	}
	inline jint TvTrackInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean TvTrackInfo::isAudioDescription() const
	{
		return callMethod<jboolean>(
			"isAudioDescription",
			"()Z"
		);
	}
	inline jboolean TvTrackInfo::isEncrypted() const
	{
		return callMethod<jboolean>(
			"isEncrypted",
			"()Z"
		);
	}
	inline jboolean TvTrackInfo::isHardOfHearing() const
	{
		return callMethod<jboolean>(
			"isHardOfHearing",
			"()Z"
		);
	}
	inline jboolean TvTrackInfo::isSpokenSubtitle() const
	{
		return callMethod<jboolean>(
			"isSpokenSubtitle",
			"()Z"
		);
	}
	inline void TvTrackInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::tv

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
