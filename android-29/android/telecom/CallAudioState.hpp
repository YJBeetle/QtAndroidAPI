#pragma once

#include "../../JObject.hpp"

namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telecom
{
	class CallAudioState : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint ROUTE_BLUETOOTH();
		static jint ROUTE_EARPIECE();
		static jint ROUTE_SPEAKER();
		static jint ROUTE_WIRED_HEADSET();
		static jint ROUTE_WIRED_OR_EARPIECE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CallAudioState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CallAudioState(QAndroidJniObject obj);
		
		// Constructors
		CallAudioState(jboolean arg0, jint arg1, jint arg2);
		
		// Methods
		static JString audioRouteToString(jint arg0);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::bluetooth::BluetoothDevice getActiveBluetoothDevice() const;
		jint getRoute() const;
		JObject getSupportedBluetoothDevices() const;
		jint getSupportedRouteMask() const;
		jboolean isMuted() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telecom

