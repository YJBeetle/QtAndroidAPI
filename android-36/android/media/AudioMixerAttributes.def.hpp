#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class AudioFormat;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::media
{
	class AudioMixerAttributes : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint MIXER_BEHAVIOR_BIT_PERFECT();
		static jint MIXER_BEHAVIOR_DEFAULT();
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioMixerAttributes(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioMixerAttributes(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::media::AudioFormat getFormat() const;
		jint getMixerBehavior() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media

