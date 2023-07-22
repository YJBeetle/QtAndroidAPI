#pragma once

#include "../../JString.hpp"
#include "./EncoderProfiles_VideoProfile.def.hpp"

namespace android::media
{
	// Fields
	inline jint EncoderProfiles_VideoProfile::HDR_DOLBY_VISION()
	{
		return getStaticField<jint>(
			"android.media.EncoderProfiles$VideoProfile",
			"HDR_DOLBY_VISION"
		);
	}
	inline jint EncoderProfiles_VideoProfile::HDR_HDR10()
	{
		return getStaticField<jint>(
			"android.media.EncoderProfiles$VideoProfile",
			"HDR_HDR10"
		);
	}
	inline jint EncoderProfiles_VideoProfile::HDR_HDR10PLUS()
	{
		return getStaticField<jint>(
			"android.media.EncoderProfiles$VideoProfile",
			"HDR_HDR10PLUS"
		);
	}
	inline jint EncoderProfiles_VideoProfile::HDR_HLG()
	{
		return getStaticField<jint>(
			"android.media.EncoderProfiles$VideoProfile",
			"HDR_HLG"
		);
	}
	inline jint EncoderProfiles_VideoProfile::HDR_NONE()
	{
		return getStaticField<jint>(
			"android.media.EncoderProfiles$VideoProfile",
			"HDR_NONE"
		);
	}
	inline jint EncoderProfiles_VideoProfile::YUV_420()
	{
		return getStaticField<jint>(
			"android.media.EncoderProfiles$VideoProfile",
			"YUV_420"
		);
	}
	inline jint EncoderProfiles_VideoProfile::YUV_422()
	{
		return getStaticField<jint>(
			"android.media.EncoderProfiles$VideoProfile",
			"YUV_422"
		);
	}
	inline jint EncoderProfiles_VideoProfile::YUV_444()
	{
		return getStaticField<jint>(
			"android.media.EncoderProfiles$VideoProfile",
			"YUV_444"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint EncoderProfiles_VideoProfile::getBitDepth() const
	{
		return callMethod<jint>(
			"getBitDepth",
			"()I"
		);
	}
	inline jint EncoderProfiles_VideoProfile::getBitrate() const
	{
		return callMethod<jint>(
			"getBitrate",
			"()I"
		);
	}
	inline jint EncoderProfiles_VideoProfile::getChromaSubsampling() const
	{
		return callMethod<jint>(
			"getChromaSubsampling",
			"()I"
		);
	}
	inline jint EncoderProfiles_VideoProfile::getCodec() const
	{
		return callMethod<jint>(
			"getCodec",
			"()I"
		);
	}
	inline jint EncoderProfiles_VideoProfile::getFrameRate() const
	{
		return callMethod<jint>(
			"getFrameRate",
			"()I"
		);
	}
	inline jint EncoderProfiles_VideoProfile::getHdrFormat() const
	{
		return callMethod<jint>(
			"getHdrFormat",
			"()I"
		);
	}
	inline jint EncoderProfiles_VideoProfile::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline JString EncoderProfiles_VideoProfile::getMediaType() const
	{
		return callObjectMethod(
			"getMediaType",
			"()Ljava/lang/String;"
		);
	}
	inline jint EncoderProfiles_VideoProfile::getProfile() const
	{
		return callMethod<jint>(
			"getProfile",
			"()I"
		);
	}
	inline jint EncoderProfiles_VideoProfile::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
