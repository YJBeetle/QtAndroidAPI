#include "../hardware/HardwareBuffer.hpp"
#include "./MediaCodec_LinearBlock.hpp"
#include "./MediaFormat.hpp"
#include "./MediaCodec_OutputFrame.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaCodec_OutputFrame::MediaCodec_OutputFrame(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass MediaCodec_OutputFrame::getChangedKeys()
	{
		return callObjectMethod(
			"getChangedKeys",
			"()Ljava/util/Set;"
		);
	}
	jint MediaCodec_OutputFrame::getFlags()
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	android::media::MediaFormat MediaCodec_OutputFrame::getFormat()
	{
		return callObjectMethod(
			"getFormat",
			"()Landroid/media/MediaFormat;"
		);
	}
	android::hardware::HardwareBuffer MediaCodec_OutputFrame::getHardwareBuffer()
	{
		return callObjectMethod(
			"getHardwareBuffer",
			"()Landroid/hardware/HardwareBuffer;"
		);
	}
	android::media::MediaCodec_LinearBlock MediaCodec_OutputFrame::getLinearBlock()
	{
		return callObjectMethod(
			"getLinearBlock",
			"()Landroid/media/MediaCodec$LinearBlock;"
		);
	}
	jlong MediaCodec_OutputFrame::getPresentationTimeUs()
	{
		return callMethod<jlong>(
			"getPresentationTimeUs",
			"()J"
		);
	}
} // namespace android::media

