#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::hardware::usb
{
	class UsbAccessory : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit UsbAccessory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UsbAccessory(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		JString getDescription();
		JString getManufacturer();
		JString getModel();
		JString getSerial();
		JString getUri();
		JString getVersion();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::hardware::usb

