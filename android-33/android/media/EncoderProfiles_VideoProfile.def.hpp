#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::media
{
	class EncoderProfiles_VideoProfile : public JObject
	{
	public:
		// Fields
		static jint HDR_DOLBY_VISION();
		static jint HDR_HDR10();
		static jint HDR_HDR10PLUS();
		static jint HDR_HLG();
		static jint HDR_NONE();
		static jint YUV_420();
		static jint YUV_422();
		static jint YUV_444();
		
		// QJniObject forward
		template<typename ...Ts> explicit EncoderProfiles_VideoProfile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EncoderProfiles_VideoProfile(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getBitDepth() const;
		jint getBitrate() const;
		jint getChromaSubsampling() const;
		jint getCodec() const;
		jint getFrameRate() const;
		jint getHdrFormat() const;
		jint getHeight() const;
		JString getMediaType() const;
		jint getProfile() const;
		jint getWidth() const;
	};
} // namespace android::media

