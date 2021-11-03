#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaCodec_CryptoInfo_Pattern : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCodec_CryptoInfo_Pattern(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec_CryptoInfo_Pattern(QAndroidJniObject obj);
		
		// Constructors
		MediaCodec_CryptoInfo_Pattern(jint arg0, jint arg1);
		
		// Methods
		jint getEncryptBlocks() const;
		jint getSkipBlocks() const;
		void set(jint arg0, jint arg1) const;
	};
} // namespace android::media

