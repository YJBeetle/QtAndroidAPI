#pragma once

#include "../../../JObject.hpp"

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
		static jint PROTOCOL_UMP_MIDI_1_0_UP_TO_128_BITS();
		static jint PROTOCOL_UMP_MIDI_1_0_UP_TO_128_BITS_AND_JRTS();
		static jint PROTOCOL_UMP_MIDI_1_0_UP_TO_64_BITS();
		static jint PROTOCOL_UMP_MIDI_1_0_UP_TO_64_BITS_AND_JRTS();
		static jint PROTOCOL_UMP_MIDI_2_0();
		static jint PROTOCOL_UMP_MIDI_2_0_AND_JRTS();
		static jint PROTOCOL_UMP_USE_MIDI_CI();
		static jint PROTOCOL_UNKNOWN();
		static jint TYPE_BLUETOOTH();
		static jint TYPE_USB();
		static jint TYPE_VIRTUAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit MidiDeviceInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MidiDeviceInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getDefaultProtocol() const;
		jint getId() const;
		jint getInputPortCount() const;
		jint getOutputPortCount() const;
		JArray getPorts() const;
		android::os::Bundle getProperties() const;
		jint getType() const;
		jint hashCode() const;
		jboolean isPrivate() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::midi

