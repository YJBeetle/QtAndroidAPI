#pragma once

#ifndef ANDROID_MTP_MTPDEVICEINFO
#define ANDROID_MTP_MTPDEVICEINFO

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::mtp
{
	class MtpDeviceInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getVersion();
		jintArray getOperationsSupported();
		jintArray getEventsSupported();
		jboolean isOperationSupported(jint arg0);
		jboolean isEventSupported(jint arg0);
		jstring getManufacturer();
		jstring getModel();
		jstring getSerialNumber();
	};
} // namespace __jni_impl::android::mtp


namespace __jni_impl::android::mtp
{
	// Fields
	
	// Constructors
	void MtpDeviceInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.mtp.MtpDeviceInfo",
			"(V)V");
	}
	
	// Methods
	jstring MtpDeviceInfo::getVersion()
	{
		return __thiz.callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jintArray MtpDeviceInfo::getOperationsSupported()
	{
		return __thiz.callObjectMethod(
			"getOperationsSupported",
			"()[I"
		).object<jintArray>();
	}
	jintArray MtpDeviceInfo::getEventsSupported()
	{
		return __thiz.callObjectMethod(
			"getEventsSupported",
			"()[I"
		).object<jintArray>();
	}
	jboolean MtpDeviceInfo::isOperationSupported(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isOperationSupported",
			"(I)Z",
			arg0
		);
	}
	jboolean MtpDeviceInfo::isEventSupported(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isEventSupported",
			"(I)Z",
			arg0
		);
	}
	jstring MtpDeviceInfo::getManufacturer()
	{
		return __thiz.callObjectMethod(
			"getManufacturer",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MtpDeviceInfo::getModel()
	{
		return __thiz.callObjectMethod(
			"getModel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MtpDeviceInfo::getSerialNumber()
	{
		return __thiz.callObjectMethod(
			"getSerialNumber",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::mtp

namespace android::mtp
{
	class MtpDeviceInfo : public __jni_impl::android::mtp::MtpDeviceInfo
	{
	public:
		MtpDeviceInfo(QAndroidJniObject obj) { __thiz = obj; }
		MtpDeviceInfo()
		{
			__constructor();
		}
	};
} // namespace android::mtp

#endif // ANDROID_MTP_MTPDEVICEINFO

