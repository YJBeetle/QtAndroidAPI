#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::bluetooth
{
	class BluetoothHealthAppConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothHealthAppConfiguration(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothHealthAppConfiguration(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jint getDataType();
		jstring getName();
		jint getRole();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth

