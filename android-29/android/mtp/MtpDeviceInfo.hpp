#pragma once

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
		jintArray getEventsSupported();
		jstring getManufacturer();
		jstring getModel();
		jintArray getOperationsSupported();
		jstring getSerialNumber();
		jstring getVersion();
		jboolean isEventSupported(jint arg0);
		jboolean isOperationSupported(jint arg0);
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
	jintArray MtpDeviceInfo::getEventsSupported()
	{
		return __thiz.callObjectMethod(
			"getEventsSupported",
			"()[I"
		).object<jintArray>();
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
	jintArray MtpDeviceInfo::getOperationsSupported()
	{
		return __thiz.callObjectMethod(
			"getOperationsSupported",
			"()[I"
		).object<jintArray>();
	}
	jstring MtpDeviceInfo::getSerialNumber()
	{
		return __thiz.callObjectMethod(
			"getSerialNumber",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MtpDeviceInfo::getVersion()
	{
		return __thiz.callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean MtpDeviceInfo::isEventSupported(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isEventSupported",
			"(I)Z",
			arg0
		);
	}
	jboolean MtpDeviceInfo::isOperationSupported(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isOperationSupported",
			"(I)Z",
			arg0
		);
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

