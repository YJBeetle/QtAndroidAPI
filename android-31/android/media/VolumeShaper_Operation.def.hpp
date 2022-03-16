#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::media
{
	class VolumeShaper_Operation : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static android::media::VolumeShaper_Operation PLAY();
		static android::media::VolumeShaper_Operation REVERSE();
		
		// QJniObject forward
		template<typename ...Ts> explicit VolumeShaper_Operation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VolumeShaper_Operation(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media

