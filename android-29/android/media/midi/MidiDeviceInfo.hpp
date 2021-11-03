#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::media::midi
{
	class MidiDeviceInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString PROPERTY_BLUETOOTH_DEVICE();
		static JString PROPERTY_MANUFACTURER();
		static JString PROPERTY_NAME();
		static JString PROPERTY_PRODUCT();
		static JString PROPERTY_SERIAL_NUMBER();
		static JString PROPERTY_USB_DEVICE();
		static JString PROPERTY_VERSION();
		static jint TYPE_BLUETOOTH();
		static jint TYPE_USB();
		static jint TYPE_VIRTUAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MidiDeviceInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MidiDeviceInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getId();
		jint getInputPortCount();
		jint getOutputPortCount();
		JArray getPorts();
		android::os::Bundle getProperties();
		jint getType();
		jint hashCode();
		jboolean isPrivate();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::midi

