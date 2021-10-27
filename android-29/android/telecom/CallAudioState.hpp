#pragma once

#include "../../__JniBaseClass.hpp"

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
	class CallAudioState : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint ROUTE_BLUETOOTH();
		static jint ROUTE_EARPIECE();
		static jint ROUTE_SPEAKER();
		static jint ROUTE_WIRED_HEADSET();
		static jint ROUTE_WIRED_OR_EARPIECE();
		
		CallAudioState(QAndroidJniObject obj);
		// Constructors
		CallAudioState(jboolean &arg0, jint &arg1, jint &arg2);
		CallAudioState() = default;
		
		// Methods
		static jstring audioRouteToString(jint arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getActiveBluetoothDevice();
		jint getRoute();
		QAndroidJniObject getSupportedBluetoothDevices();
		jint getSupportedRouteMask();
		jboolean isMuted();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telecom

