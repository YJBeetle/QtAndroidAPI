#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::hardware::lights
{
	class Light : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint LIGHT_CAPABILITY_BRIGHTNESS();
		static jint LIGHT_CAPABILITY_COLOR_RGB();
		static jint LIGHT_CAPABILITY_RGB();
		static jint LIGHT_TYPE_INPUT();
		static jint LIGHT_TYPE_KEYBOARD_BACKLIGHT();
		static jint LIGHT_TYPE_MICROPHONE();
		static jint LIGHT_TYPE_PLAYER_ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit Light(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Light(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getId() const;
		JString getName() const;
		jint getOrdinal() const;
		jint getType() const;
		jboolean hasBrightnessControl() const;
		jboolean hasRgbControl() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::hardware::lights

