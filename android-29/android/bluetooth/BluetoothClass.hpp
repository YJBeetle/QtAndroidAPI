#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::bluetooth
{
	class BluetoothClass : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		BluetoothClass(QAndroidJniObject obj);
		// Constructors
		BluetoothClass() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getDeviceClass();
		jint getMajorDeviceClass();
		jboolean hasService(jint arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth

