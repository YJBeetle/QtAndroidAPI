#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::companion
{
	class BluetoothLeDeviceFilter : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothLeDeviceFilter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothLeDeviceFilter(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getRenamePrefixLengthLimit();
		jint describeContents();
		jboolean equals(JObject arg0);
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::companion

