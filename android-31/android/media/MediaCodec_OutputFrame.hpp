#pragma once

#include "../hardware/HardwareBuffer.def.hpp"
#include "./MediaCodec_LinearBlock.def.hpp"
#include "./MediaFormat.def.hpp"
#include "./MediaCodec_OutputFrame.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject MediaCodec_OutputFrame::getChangedKeys() const
	{
		return callObjectMethod(
			"getChangedKeys",
			"()Ljava/util/Set;"
		);
	}
	inline jint MediaCodec_OutputFrame::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	inline android::media::MediaFormat MediaCodec_OutputFrame::getFormat() const
	{
		return callObjectMethod(
			"getFormat",
			"()Landroid/media/MediaFormat;"
		);
	}
	inline android::hardware::HardwareBuffer MediaCodec_OutputFrame::getHardwareBuffer() const
	{
		return callObjectMethod(
			"getHardwareBuffer",
			"()Landroid/hardware/HardwareBuffer;"
		);
	}
	inline android::media::MediaCodec_LinearBlock MediaCodec_OutputFrame::getLinearBlock() const
	{
		return callObjectMethod(
			"getLinearBlock",
			"()Landroid/media/MediaCodec$LinearBlock;"
		);
	}
	inline jlong MediaCodec_OutputFrame::getPresentationTimeUs() const
	{
		return callMethod<jlong>(
			"getPresentationTimeUs",
			"()J"
		);
	}
} // namespace android::media

// Base class headers

