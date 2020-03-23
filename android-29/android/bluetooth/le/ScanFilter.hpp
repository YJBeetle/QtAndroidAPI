#pragma once

#ifndef ANDROID_BLUETOOTH_LE_SCANFILTER
#define ANDROID_BLUETOOTH_LE_SCANFILTER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class ParcelUuid;
}
namespace __jni_impl::android::bluetooth::le
{
	class ScanResult;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::bluetooth::le
{
	class ScanFilter : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jboolean matches(__jni_impl::android::bluetooth::le::ScanResult arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getDeviceName();
		QAndroidJniObject getServiceUuid();
		QAndroidJniObject getServiceUuidMask();
		QAndroidJniObject getServiceSolicitationUuid();
		QAndroidJniObject getServiceSolicitationUuidMask();
		QAndroidJniObject getDeviceAddress();
		QAndroidJniObject getServiceData();
		QAndroidJniObject getServiceDataMask();
		QAndroidJniObject getServiceDataUuid();
		jint getManufacturerId();
		QAndroidJniObject getManufacturerData();
		QAndroidJniObject getManufacturerDataMask();
	};
} // namespace __jni_impl::android::bluetooth::le

#include "../../os/ParcelUuid.hpp"
#include "ScanResult.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	QAndroidJniObject ScanFilter::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.le.ScanFilter",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void ScanFilter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.ScanFilter",
			"(V)V");
	}
	
	// Methods
	jboolean ScanFilter::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject ScanFilter::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint ScanFilter::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jboolean ScanFilter::matches(__jni_impl::android::bluetooth::le::ScanResult arg0)
	{
		return __thiz.callMethod<jboolean>(
			"matches",
			"(Landroid/bluetooth/le/ScanResult;)Z",
			arg0.__jniObject().object());
	}
	jint ScanFilter::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void ScanFilter::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject ScanFilter::getDeviceName()
	{
		return __thiz.callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ScanFilter::getServiceUuid()
	{
		return __thiz.callObjectMethod(
			"getServiceUuid",
			"()Landroid/os/ParcelUuid;");
	}
	QAndroidJniObject ScanFilter::getServiceUuidMask()
	{
		return __thiz.callObjectMethod(
			"getServiceUuidMask",
			"()Landroid/os/ParcelUuid;");
	}
	QAndroidJniObject ScanFilter::getServiceSolicitationUuid()
	{
		return __thiz.callObjectMethod(
			"getServiceSolicitationUuid",
			"()Landroid/os/ParcelUuid;");
	}
	QAndroidJniObject ScanFilter::getServiceSolicitationUuidMask()
	{
		return __thiz.callObjectMethod(
			"getServiceSolicitationUuidMask",
			"()Landroid/os/ParcelUuid;");
	}
	QAndroidJniObject ScanFilter::getDeviceAddress()
	{
		return __thiz.callObjectMethod(
			"getDeviceAddress",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ScanFilter::getServiceData()
	{
		return __thiz.callObjectMethod(
			"getServiceData",
			"()[B");
	}
	QAndroidJniObject ScanFilter::getServiceDataMask()
	{
		return __thiz.callObjectMethod(
			"getServiceDataMask",
			"()[B");
	}
	QAndroidJniObject ScanFilter::getServiceDataUuid()
	{
		return __thiz.callObjectMethod(
			"getServiceDataUuid",
			"()Landroid/os/ParcelUuid;");
	}
	jint ScanFilter::getManufacturerId()
	{
		return __thiz.callMethod<jint>(
			"getManufacturerId",
			"()I");
	}
	QAndroidJniObject ScanFilter::getManufacturerData()
	{
		return __thiz.callObjectMethod(
			"getManufacturerData",
			"()[B");
	}
	QAndroidJniObject ScanFilter::getManufacturerDataMask()
	{
		return __thiz.callObjectMethod(
			"getManufacturerDataMask",
			"()[B");
	}
} // namespace __jni_impl::android::bluetooth::le

namespace android::bluetooth::le
{
	class ScanFilter : public __jni_impl::android::bluetooth::le::ScanFilter
	{
	public:
		ScanFilter(QAndroidJniObject obj) { __thiz = obj; }
		ScanFilter()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth::le

#endif // ANDROID_BLUETOOTH_LE_SCANFILTER

