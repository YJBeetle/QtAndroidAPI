#pragma once

#include "../../JObject.hpp"


namespace android::media
{
	class AudioProfile : public JObject
	{
	public:
		// Fields
		static jint AUDIO_ENCAPSULATION_TYPE_IEC61937();
		static jint AUDIO_ENCAPSULATION_TYPE_NONE();
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioProfile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioProfile(QJniObject obj);
		
		// Constructors
		
		// Methods
		jintArray getChannelIndexMasks();
		jintArray getChannelMasks();
		jint getEncapsulationType();
		jint getFormat();
		jintArray getSampleRates();
		jstring toString();
	};
} // namespace android::media

