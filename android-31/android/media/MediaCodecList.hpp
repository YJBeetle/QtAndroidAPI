#pragma once

#include "../../JArray.hpp"
#include "./MediaCodecInfo.def.hpp"
#include "./MediaFormat.def.hpp"
#include "../../JString.hpp"
#include "./MediaCodecList.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaCodecList::ALL_CODECS()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecList",
			"ALL_CODECS"
		);
	}
	inline jint MediaCodecList::REGULAR_CODECS()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecList",
			"REGULAR_CODECS"
		);
	}
	
	// Constructors
	inline MediaCodecList::MediaCodecList(jint arg0)
		: JObject(
			"android.media.MediaCodecList",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jint MediaCodecList::getCodecCount()
	{
		return callStaticMethod<jint>(
			"android.media.MediaCodecList",
			"getCodecCount",
			"()I"
		);
	}
	inline android::media::MediaCodecInfo MediaCodecList::getCodecInfoAt(jint arg0)
	{
		return callStaticObjectMethod(
			"android.media.MediaCodecList",
			"getCodecInfoAt",
			"(I)Landroid/media/MediaCodecInfo;",
			arg0
		);
	}
	inline JString MediaCodecList::findDecoderForFormat(android::media::MediaFormat arg0) const
	{
		return callObjectMethod(
			"findDecoderForFormat",
			"(Landroid/media/MediaFormat;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString MediaCodecList::findEncoderForFormat(android::media::MediaFormat arg0) const
	{
		return callObjectMethod(
			"findEncoderForFormat",
			"(Landroid/media/MediaFormat;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JArray MediaCodecList::getCodecInfos() const
	{
		return callObjectMethod(
			"getCodecInfos",
			"()[Landroid/media/MediaCodecInfo;"
		);
	}
} // namespace android::media

// Base class headers

