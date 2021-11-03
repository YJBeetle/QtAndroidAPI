#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::usb
{
	class UsbInterface;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::hardware::usb
{
	class UsbConfiguration : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit UsbConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UsbConfiguration(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jint getId();
		android::hardware::usb::UsbInterface getInterface(jint arg0);
		jint getInterfaceCount();
		jint getMaxPower();
		JString getName();
		jboolean isRemoteWakeup();
		jboolean isSelfPowered();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::hardware::usb

