#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class VolumeShaper_Operation : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static android::media::VolumeShaper_Operation PLAY();
		static android::media::VolumeShaper_Operation REVERSE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VolumeShaper_Operation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VolumeShaper_Operation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

