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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UsbConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UsbConfiguration(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getId() const;
		android::hardware::usb::UsbInterface getInterface(jint arg0) const;
		jint getInterfaceCount() const;
		jint getMaxPower() const;
		JString getName() const;
		jboolean isRemoteWakeup() const;
		jboolean isSelfPowered() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::hardware::usb

