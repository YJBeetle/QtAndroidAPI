#pragma once

#ifndef ANDROID_TELEPHONY_NETWORKSCAN
#define ANDROID_TELEPHONY_NETWORKSCAN

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony
{
	class NetworkScan : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_INTERRUPTED();
		static jint ERROR_INVALID_SCAN();
		static jint ERROR_INVALID_SCANID();
		static jint ERROR_MODEM_ERROR();
		static jint ERROR_MODEM_UNAVAILABLE();
		static jint ERROR_RADIO_INTERFACE_ERROR();
		static jint ERROR_UNSUPPORTED();
		static jint SUCCESS();
		
		// Constructors
		void __constructor();
		
		// Methods
		void stopScan();
	};
} // namespace __jni_impl::android::telephony


namespace __jni_impl::android::telephony
{
	// Fields
	jint NetworkScan::ERROR_INTERRUPTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_INTERRUPTED"
		);
	}
	jint NetworkScan::ERROR_INVALID_SCAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_INVALID_SCAN"
		);
	}
	jint NetworkScan::ERROR_INVALID_SCANID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_INVALID_SCANID"
		);
	}
	jint NetworkScan::ERROR_MODEM_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_MODEM_ERROR"
		);
	}
	jint NetworkScan::ERROR_MODEM_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_MODEM_UNAVAILABLE"
		);
	}
	jint NetworkScan::ERROR_RADIO_INTERFACE_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_RADIO_INTERFACE_ERROR"
		);
	}
	jint NetworkScan::ERROR_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_UNSUPPORTED"
		);
	}
	jint NetworkScan::SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NetworkScan",
			"SUCCESS"
		);
	}
	
	// Constructors
	void NetworkScan::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.NetworkScan",
			"(V)V");
	}
	
	// Methods
	void NetworkScan::stopScan()
	{
		__thiz.callMethod<void>(
			"stopScan",
			"()V"
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class NetworkScan : public __jni_impl::android::telephony::NetworkScan
	{
	public:
		NetworkScan(QAndroidJniObject obj) { __thiz = obj; }
		NetworkScan()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_NETWORKSCAN

