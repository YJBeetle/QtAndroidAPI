#pragma once

#ifndef ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER
#define ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::fingerprint
{
	class FingerprintManager_CryptoObject;
}
namespace __jni_impl::android::os
{
	class CancellationSignal;
}
namespace __jni_impl::android::hardware::fingerprint
{
	class FingerprintManager_AuthenticationCallback;
}
namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::hardware::fingerprint
{
	class FingerprintManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint FINGERPRINT_ACQUIRED_GOOD();
		static jint FINGERPRINT_ACQUIRED_IMAGER_DIRTY();
		static jint FINGERPRINT_ACQUIRED_INSUFFICIENT();
		static jint FINGERPRINT_ACQUIRED_PARTIAL();
		static jint FINGERPRINT_ACQUIRED_TOO_FAST();
		static jint FINGERPRINT_ACQUIRED_TOO_SLOW();
		static jint FINGERPRINT_ERROR_CANCELED();
		static jint FINGERPRINT_ERROR_HW_NOT_PRESENT();
		static jint FINGERPRINT_ERROR_HW_UNAVAILABLE();
		static jint FINGERPRINT_ERROR_LOCKOUT();
		static jint FINGERPRINT_ERROR_LOCKOUT_PERMANENT();
		static jint FINGERPRINT_ERROR_NO_FINGERPRINTS();
		static jint FINGERPRINT_ERROR_NO_SPACE();
		static jint FINGERPRINT_ERROR_TIMEOUT();
		static jint FINGERPRINT_ERROR_UNABLE_TO_PROCESS();
		static jint FINGERPRINT_ERROR_USER_CANCELED();
		static jint FINGERPRINT_ERROR_VENDOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean hasEnrolledFingerprints();
		jboolean isHardwareDetected();
		void authenticate(__jni_impl::android::hardware::fingerprint::FingerprintManager_CryptoObject arg0, __jni_impl::android::os::CancellationSignal arg1, jint arg2, __jni_impl::android::hardware::fingerprint::FingerprintManager_AuthenticationCallback arg3, __jni_impl::android::os::Handler arg4);
	};
} // namespace __jni_impl::android::hardware::fingerprint

#include "FingerprintManager_CryptoObject.hpp"
#include "../../os/CancellationSignal.hpp"
#include "FingerprintManager_AuthenticationCallback.hpp"
#include "../../os/Handler.hpp"

namespace __jni_impl::android::hardware::fingerprint
{
	// Fields
	jint FingerprintManager::FINGERPRINT_ACQUIRED_GOOD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ACQUIRED_GOOD");
	}
	jint FingerprintManager::FINGERPRINT_ACQUIRED_IMAGER_DIRTY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ACQUIRED_IMAGER_DIRTY");
	}
	jint FingerprintManager::FINGERPRINT_ACQUIRED_INSUFFICIENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ACQUIRED_INSUFFICIENT");
	}
	jint FingerprintManager::FINGERPRINT_ACQUIRED_PARTIAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ACQUIRED_PARTIAL");
	}
	jint FingerprintManager::FINGERPRINT_ACQUIRED_TOO_FAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ACQUIRED_TOO_FAST");
	}
	jint FingerprintManager::FINGERPRINT_ACQUIRED_TOO_SLOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ACQUIRED_TOO_SLOW");
	}
	jint FingerprintManager::FINGERPRINT_ERROR_CANCELED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_CANCELED");
	}
	jint FingerprintManager::FINGERPRINT_ERROR_HW_NOT_PRESENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_HW_NOT_PRESENT");
	}
	jint FingerprintManager::FINGERPRINT_ERROR_HW_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_HW_UNAVAILABLE");
	}
	jint FingerprintManager::FINGERPRINT_ERROR_LOCKOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_LOCKOUT");
	}
	jint FingerprintManager::FINGERPRINT_ERROR_LOCKOUT_PERMANENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_LOCKOUT_PERMANENT");
	}
	jint FingerprintManager::FINGERPRINT_ERROR_NO_FINGERPRINTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_NO_FINGERPRINTS");
	}
	jint FingerprintManager::FINGERPRINT_ERROR_NO_SPACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_NO_SPACE");
	}
	jint FingerprintManager::FINGERPRINT_ERROR_TIMEOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_TIMEOUT");
	}
	jint FingerprintManager::FINGERPRINT_ERROR_UNABLE_TO_PROCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_UNABLE_TO_PROCESS");
	}
	jint FingerprintManager::FINGERPRINT_ERROR_USER_CANCELED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_USER_CANCELED");
	}
	jint FingerprintManager::FINGERPRINT_ERROR_VENDOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_VENDOR");
	}
	
	// Constructors
	void FingerprintManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.fingerprint.FingerprintManager",
			"(V)V");
	}
	
	// Methods
	jboolean FingerprintManager::hasEnrolledFingerprints()
	{
		return __thiz.callMethod<jboolean>(
			"hasEnrolledFingerprints",
			"()Z");
	}
	jboolean FingerprintManager::isHardwareDetected()
	{
		return __thiz.callMethod<jboolean>(
			"isHardwareDetected",
			"()Z");
	}
	void FingerprintManager::authenticate(__jni_impl::android::hardware::fingerprint::FingerprintManager_CryptoObject arg0, __jni_impl::android::os::CancellationSignal arg1, jint arg2, __jni_impl::android::hardware::fingerprint::FingerprintManager_AuthenticationCallback arg3, __jni_impl::android::os::Handler arg4)
	{
		__thiz.callMethod<void>(
			"authenticate",
			"(Landroid/hardware/fingerprint/FingerprintManager$CryptoObject;Landroid/os/CancellationSignal;ILandroid/hardware/fingerprint/FingerprintManager$AuthenticationCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
} // namespace __jni_impl::android::hardware::fingerprint

namespace android::hardware::fingerprint
{
	class FingerprintManager : public __jni_impl::android::hardware::fingerprint::FingerprintManager
	{
	public:
		FingerprintManager(QAndroidJniObject obj) { __thiz = obj; }
		FingerprintManager()
		{
			__constructor();
		}
	};
} // namespace android::hardware::fingerprint

#endif // ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER

