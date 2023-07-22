#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::media
{
	class AudioProfile : public JObject
	{
	public:
		// Fields
		static jint AUDIO_ENCAPSULATION_TYPE_IEC61937();
		static jint AUDIO_ENCAPSULATION_TYPE_NONE();
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioProfile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioProfile(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JIntArray getChannelIndexMasks() const;
		JIntArray getChannelMasks() const;
		jint getEncapsulationType() const;
		jint getFormat() const;
		JIntArray getSampleRates() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media

