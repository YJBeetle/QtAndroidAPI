#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth::le
{
	class ScanResult;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class ParcelUuid;
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
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getDeviceAddress();
		jstring getDeviceName();
		jbyteArray getManufacturerData();
		jbyteArray getManufacturerDataMask();
		jint getManufacturerId();
		jbyteArray getServiceData();
		jbyteArray getServiceDataMask();
		QAndroidJniObject getServiceDataUuid();
		QAndroidJniObject getServiceSolicitationUuid();
		QAndroidJniObject getServiceSolicitationUuidMask();
		QAndroidJniObject getServiceUuid();
		QAndroidJniObject getServiceUuidMask();
		jint hashCode();
		jboolean matches(__jni_impl::android::bluetooth::le::ScanResult arg0);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::bluetooth::le

#include "./ScanResult.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/ParcelUuid.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	QAndroidJniObject ScanFilter::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.le.ScanFilter",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void ScanFilter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.ScanFilter",
			"(V)V");
	}
	
	// Methods
	jint ScanFilter::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ScanFilter::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ScanFilter::getDeviceAddress()
	{
		return __thiz.callObjectMethod(
			"getDeviceAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ScanFilter::getDeviceName()
	{
		return __thiz.callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray ScanFilter::getManufacturerData()
	{
		return __thiz.callObjectMethod(
			"getManufacturerData",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray ScanFilter::getManufacturerDataMask()
	{
		return __thiz.callObjectMethod(
			"getManufacturerDataMask",
			"()[B"
		).object<jbyteArray>();
	}
	jint ScanFilter::getManufacturerId()
	{
		return __thiz.callMethod<jint>(
			"getManufacturerId",
			"()I"
		);
	}
	jbyteArray ScanFilter::getServiceData()
	{
		return __thiz.callObjectMethod(
			"getServiceData",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray ScanFilter::getServiceDataMask()
	{
		return __thiz.callObjectMethod(
			"getServiceDataMask",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject ScanFilter::getServiceDataUuid()
	{
		return __thiz.callObjectMethod(
			"getServiceDataUuid",
			"()Landroid/os/ParcelUuid;"
		);
	}
	QAndroidJniObject ScanFilter::getServiceSolicitationUuid()
	{
		return __thiz.callObjectMethod(
			"getServiceSolicitationUuid",
			"()Landroid/os/ParcelUuid;"
		);
	}
	QAndroidJniObject ScanFilter::getServiceSolicitationUuidMask()
	{
		return __thiz.callObjectMethod(
			"getServiceSolicitationUuidMask",
			"()Landroid/os/ParcelUuid;"
		);
	}
	QAndroidJniObject ScanFilter::getServiceUuid()
	{
		return __thiz.callObjectMethod(
			"getServiceUuid",
			"()Landroid/os/ParcelUuid;"
		);
	}
	QAndroidJniObject ScanFilter::getServiceUuidMask()
	{
		return __thiz.callObjectMethod(
			"getServiceUuidMask",
			"()Landroid/os/ParcelUuid;"
		);
	}
	jint ScanFilter::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ScanFilter::matches(__jni_impl::android::bluetooth::le::ScanResult arg0)
	{
		return __thiz.callMethod<jboolean>(
			"matches",
			"(Landroid/bluetooth/le/ScanResult;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring ScanFilter::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ScanFilter::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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

