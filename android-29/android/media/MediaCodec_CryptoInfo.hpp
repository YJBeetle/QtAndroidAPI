#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JIntArray;
namespace android::media
{
	class MediaCodec_CryptoInfo_Pattern;
}
class JString;

namespace android::media
{
	class MediaCodec_CryptoInfo : public JObject
	{
	public:
		// Fields
		JByteArray iv();
		JByteArray key();
		jint mode();
		JIntArray numBytesOfClearData();
		JIntArray numBytesOfEncryptedData();
		jint numSubSamples();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCodec_CryptoInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec_CryptoInfo(QAndroidJniObject obj);
		
		// Constructors
		MediaCodec_CryptoInfo();
		
		// Methods
		void set(jint arg0, JIntArray arg1, JIntArray arg2, JByteArray arg3, JByteArray arg4, jint arg5);
		void setPattern(android::media::MediaCodec_CryptoInfo_Pattern arg0);
		JString toString();
	};
} // namespace android::media

