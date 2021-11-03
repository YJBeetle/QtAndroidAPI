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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodec_LinearBlock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec_LinearBlock(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isCodecCopyFreeCompatible(JArray arg0);
		static android::media::MediaCodec_LinearBlock obtain(jint arg0, JArray arg1);
		jboolean isMappable() const;
		java::nio::ByteBuffer map() const;
		void recycle() const;
	};
} // namespace android::media

