#include "../hardware/HardwareBuffer.hpp"
#include "./MediaCodec_LinearBlock.hpp"
#include "./MediaFormat.hpp"
#include "./MediaCodec_OutputFrame.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaCodec_OutputFrame::MediaCodec_OutputFrame(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject MediaCodec_OutputFrame::getChangedKeys() const
	{
		return callObjectMethod(
			"getChangedKeys",
			"()Ljava/util/Set;"
		);
	}
	jint MediaCodec_OutputFrame::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	android::media::MediaFormat MediaCodec_OutputFrame::getFormat() const
	{
		return callObjectMethod(
			"getFormat",
			"()Landroid/media/MediaFormat;"
		);
	}
	android::hardware::HardwareBuffer MediaCodec_OutputFrame::getHardwareBuffer() const
	{
		return callObjectMethod(
			"getHardwareBuffer",
			"()Landroid/hardware/HardwareBuffer;"
		);
	}
	android::media::MediaCodec_LinearBlock MediaCodec_OutputFrame::getLinearBlock() const
	{
		return callObjectMethod(
			"getLinearBlock",
			"()Landroid/media/MediaCodec$LinearBlock;"
		);
	}
	jlong MediaCodec_OutputFrame::getPresentationTimeUs() const
	{
		return callMethod<jlong>(
			"getPresentationTimeUs",
			"()J"
		);
	}
} // namespace android::media

