#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::bluetooth
{
	class BluetoothClass : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint PROFILE_A2DP();
		static jint PROFILE_HEADSET();
		static jint PROFILE_HID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothClass(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothClass(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean doesClassMatch(jint arg0) const;
		jboolean equals(JObject arg0) const;
		jint getDeviceClass() const;
		jint getMajorDeviceClass() const;
		jboolean hasService(jint arg0) const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::bluetooth

