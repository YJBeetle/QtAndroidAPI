#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::media::midi
{
	class MidiDeviceInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jstring PROPERTY_BLUETOOTH_DEVICE();
		static jstring PROPERTY_MANUFACTURER();
		static jstring PROPERTY_NAME();
		static jstring PROPERTY_PRODUCT();
		static jstring PROPERTY_SERIAL_NUMBER();
		static jstring PROPERTY_USB_DEVICE();
		static jstring PROPERTY_VERSION();
		static jint TYPE_BLUETOOTH();
		static jint TYPE_USB();
		static jint TYPE_VIRTUAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit MidiDeviceInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MidiDeviceInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getId();
		jint getInputPortCount();
		jint getOutputPortCount();
		jarray getPorts();
		android::os::Bundle getProperties();
		jint getType();
		jint hashCode();
		jboolean isPrivate();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::midi

