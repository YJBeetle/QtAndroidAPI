#pragma once

#include "../../JObject.hpp"

class JArray;
namespace java::nio
{
	class ByteBuffer;
}

namespace android::media
{
	class MediaCodec_LinearBlock : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCodec_LinearBlock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec_LinearBlock(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isCodecCopyFreeCompatible(JArray arg0);
		static android::media::MediaCodec_LinearBlock obtain(jint arg0, JArray arg1);
		jboolean isMappable();
		java::nio::ByteBuffer map();
		void recycle();
	};
} // namespace android::media

