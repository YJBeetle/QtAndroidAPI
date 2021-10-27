#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class ParcelUuid;
}
namespace __jni_impl::android::util
{
	class SparseArray;
}

namespace __jni_impl::android::bluetooth::le
{
	class ScanRecord : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getAdvertiseFlags();
		jbyteArray getBytes();
		jstring getDeviceName();
		jbyteArray getManufacturerSpecificData(jint arg0);
		QAndroidJniObject getManufacturerSpecificData();
		jbyteArray getServiceData(__jni_impl::android::os::ParcelUuid arg0);
		QAndroidJniObject getServiceData();
		QAndroidJniObject getServiceSolicitationUuids();
		QAndroidJniObject getServiceUuids();
		jint getTxPowerLevel();
		jstring toString();
	};
} // namespace __jni_impl::android::bluetooth::le

#include "../../os/ParcelUuid.hpp"
#include "../../util/SparseArray.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	
	// Constructors
	void ScanRecord::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.ScanRecord",
			"(V)V");
	}
	
	// Methods
	jint ScanRecord::getAdvertiseFlags()
	{
		return __thiz.callMethod<jint>(
			"getAdvertiseFlags",
			"()I"
		);
	}
	jbyteArray ScanRecord::getBytes()
	{
		return __thiz.callObjectMethod(
			"getBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jstring ScanRecord::getDeviceName()
	{
		return __thiz.callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray ScanRecord::getManufacturerSpecificData(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getManufacturerSpecificData",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	QAndroidJniObject ScanRecord::getManufacturerSpecificData()
	{
		return __thiz.callObjectMethod(
			"getManufacturerSpecificData",
			"()Landroid/util/SparseArray;"
		);
	}
	jbyteArray ScanRecord::getServiceData(__jni_impl::android::os::ParcelUuid arg0)
	{
		return __thiz.callObjectMethod(
			"getServiceData",
			"(Landroid/os/ParcelUuid;)[B",
			arg0.__jniObject().object()
		).object<jbyteArray>();
	}
	QAndroidJniObject ScanRecord::getServiceData()
	{
		return __thiz.callObjectMethod(
			"getServiceData",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject ScanRecord::getServiceSolicitationUuids()
	{
		return __thiz.callObjectMethod(
			"getServiceSolicitationUuids",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject ScanRecord::getServiceUuids()
	{
		return __thiz.callObjectMethod(
			"getServiceUuids",
			"()Ljava/util/List;"
		);
	}
	jint ScanRecord::getTxPowerLevel()
	{
		return __thiz.callMethod<jint>(
			"getTxPowerLevel",
			"()I"
		);
	}
	jstring ScanRecord::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::bluetooth::le

namespace android::bluetooth::le
{
	class ScanRecord : public __jni_impl::android::bluetooth::le::ScanRecord
	{
	public:
		ScanRecord(QAndroidJniObject obj) { __thiz = obj; }
		ScanRecord()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth::le

