#pragma once

#ifndef ANDROID_BLUETOOTH_LE_ADVERTISEDATA
#define ANDROID_BLUETOOTH_LE_ADVERTISEDATA

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::util
{
	class SparseArray;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::bluetooth::le
{
	class AdvertiseData : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		QAndroidJniObject getServiceUuids();
		QAndroidJniObject getManufacturerSpecificData();
		jboolean getIncludeTxPowerLevel();
		jboolean getIncludeDeviceName();
		QAndroidJniObject getServiceData();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::bluetooth::le

#include "../../util/SparseArray.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	QAndroidJniObject AdvertiseData::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.le.AdvertiseData",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void AdvertiseData::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.AdvertiseData",
			"(V)V");
	}
	
	// Methods
	jboolean AdvertiseData::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring AdvertiseData::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AdvertiseData::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject AdvertiseData::getServiceUuids()
	{
		return __thiz.callObjectMethod(
			"getServiceUuids",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject AdvertiseData::getManufacturerSpecificData()
	{
		return __thiz.callObjectMethod(
			"getManufacturerSpecificData",
			"()Landroid/util/SparseArray;"
		);
	}
	jboolean AdvertiseData::getIncludeTxPowerLevel()
	{
		return __thiz.callMethod<jboolean>(
			"getIncludeTxPowerLevel",
			"()Z"
		);
	}
	jboolean AdvertiseData::getIncludeDeviceName()
	{
		return __thiz.callMethod<jboolean>(
			"getIncludeDeviceName",
			"()Z"
		);
	}
	QAndroidJniObject AdvertiseData::getServiceData()
	{
		return __thiz.callObjectMethod(
			"getServiceData",
			"()Ljava/util/Map;"
		);
	}
	jint AdvertiseData::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void AdvertiseData::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::bluetooth::le

namespace android::bluetooth::le
{
	class AdvertiseData : public __jni_impl::android::bluetooth::le::AdvertiseData
	{
	public:
		AdvertiseData(QAndroidJniObject obj) { __thiz = obj; }
		AdvertiseData()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth::le

#endif // ANDROID_BLUETOOTH_LE_ADVERTISEDATA

