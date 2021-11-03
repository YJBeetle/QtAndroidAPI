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
		
		// QJniObject forward
		template<typename ...Ts> explicit CallAudioState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CallAudioState(QJniObject obj);
		
		// Constructors
		CallAudioState(jboolean arg0, jint arg1, jint arg2);
		
		// Methods
		static jstring audioRouteToString(jint arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		android::bluetooth::BluetoothDevice getActiveBluetoothDevice();
		jint getRoute();
		JObject getSupportedBluetoothDevices();
		jint getSupportedRouteMask();
		jboolean isMuted();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telecom

