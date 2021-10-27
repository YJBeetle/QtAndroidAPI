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
		
		BluetoothHealthAppConfiguration(QAndroidJniObject obj);
		// Constructors
		BluetoothHealthAppConfiguration() = default;
		
		// Methods
		jint describeContents();
		jint getDataType();
		jstring getName();
		jint getRole();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth

