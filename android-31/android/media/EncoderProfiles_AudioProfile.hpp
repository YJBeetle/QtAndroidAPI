#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::media
{
	class EncoderProfiles_AudioProfile : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EncoderProfiles_AudioProfile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EncoderProfiles_AudioProfile(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getBitrate() const;
		jint getChannels() const;
		jint getCodec() const;
		JString getMediaType() const;
		jint getProfile() const;
		jint getSampleRate() const;
	};
} // namespace android::media

