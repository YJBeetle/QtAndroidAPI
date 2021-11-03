#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JString;

namespace android::media
{
	class AudioProfile : public JObject
	{
	public:
		// Fields
		static jint AUDIO_ENCAPSULATION_TYPE_IEC61937();
		static jint AUDIO_ENCAPSULATION_TYPE_NONE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioProfile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioProfile(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JIntArray getChannelIndexMasks() const;
		JIntArray getChannelMasks() const;
		jint getEncapsulationType() const;
		jint getFormat() const;
		JIntArray getSampleRates() const;
		JString toString() const;
	};
} // namespace android::media

