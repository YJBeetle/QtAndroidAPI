#pragma once

#include "../../JObject.hpp"

namespace android::hardware
{
	class HardwareBuffer;
}
namespace android::media
{
	class MediaCodec;
}
namespace android::media
{
	class MediaCodec_CryptoInfo;
}
namespace android::media
{
	class MediaCodec_LinearBlock;
}
namespace java::nio
{
	class ByteBuffer;
}

namespace android::media
{
	class MediaCodec_QueueRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodec_QueueRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec_QueueRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		void queue();
		android::media::MediaCodec_QueueRequest setByteBufferParameter(jstring arg0, java::nio::ByteBuffer arg1);
		android::media::MediaCodec_QueueRequest setEncryptedLinearBlock(android::media::MediaCodec_LinearBlock arg0, jint arg1, jint arg2, android::media::MediaCodec_CryptoInfo arg3);
		android::media::MediaCodec_QueueRequest setFlags(jint arg0);
		android::media::MediaCodec_QueueRequest setFloatParameter(jstring arg0, jfloat arg1);
		android::media::MediaCodec_QueueRequest setHardwareBuffer(android::hardware::HardwareBuffer arg0);
		android::media::MediaCodec_QueueRequest setIntegerParameter(jstring arg0, jint arg1);
		android::media::MediaCodec_QueueRequest setLinearBlock(android::media::MediaCodec_LinearBlock arg0, jint arg1, jint arg2);
		android::media::MediaCodec_QueueRequest setLongParameter(jstring arg0, jlong arg1);
		android::media::MediaCodec_QueueRequest setPresentationTimeUs(jlong arg0);
		android::media::MediaCodec_QueueRequest setStringParameter(jstring arg0, jstring arg1);
	};
} // namespace android::media

