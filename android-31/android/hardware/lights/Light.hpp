#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::hardware::lights
{
	class Light : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint LIGHT_CAPABILITY_BRIGHTNESS();
		static jint LIGHT_CAPABILITY_RGB();
		static jint LIGHT_TYPE_INPUT();
		static jint LIGHT_TYPE_MICROPHONE();
		static jint LIGHT_TYPE_PLAYER_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Light(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Light(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getId();
		jstring getName();
		jint getOrdinal();
		jint getType();
		jboolean hasBrightnessControl();
		jboolean hasRgbControl();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::hardware::lights

