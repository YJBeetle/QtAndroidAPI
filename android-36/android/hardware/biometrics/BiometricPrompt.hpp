#pragma once

#include "../../graphics/Bitmap.def.hpp"
#include "./BiometricPrompt_AuthenticationCallback.def.hpp"
#include "./BiometricPrompt_CryptoObject.def.hpp"
#include "../../os/CancellationSignal.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./BiometricPrompt.def.hpp"

namespace android::hardware::biometrics
{
	// Fields
	inline jint BiometricPrompt::AUTHENTICATION_RESULT_TYPE_BIOMETRIC()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"AUTHENTICATION_RESULT_TYPE_BIOMETRIC"
		);
	}
	inline jint BiometricPrompt::AUTHENTICATION_RESULT_TYPE_DEVICE_CREDENTIAL()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"AUTHENTICATION_RESULT_TYPE_DEVICE_CREDENTIAL"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ACQUIRED_GOOD()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ACQUIRED_GOOD"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ACQUIRED_IMAGER_DIRTY()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ACQUIRED_IMAGER_DIRTY"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ACQUIRED_INSUFFICIENT()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ACQUIRED_INSUFFICIENT"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ACQUIRED_PARTIAL()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ACQUIRED_PARTIAL"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ACQUIRED_TOO_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ACQUIRED_TOO_FAST"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ACQUIRED_TOO_SLOW()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ACQUIRED_TOO_SLOW"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ERROR_CANCELED()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_CANCELED"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ERROR_HW_NOT_PRESENT()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_HW_NOT_PRESENT"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ERROR_HW_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_HW_UNAVAILABLE"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ERROR_IDENTITY_CHECK_NOT_ACTIVE()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_IDENTITY_CHECK_NOT_ACTIVE"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ERROR_LOCKOUT()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_LOCKOUT"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ERROR_LOCKOUT_PERMANENT()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_LOCKOUT_PERMANENT"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ERROR_NOT_ENABLED_FOR_APPS()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_NOT_ENABLED_FOR_APPS"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ERROR_NO_BIOMETRICS()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_NO_BIOMETRICS"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ERROR_NO_DEVICE_CREDENTIAL()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_NO_DEVICE_CREDENTIAL"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ERROR_NO_SPACE()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_NO_SPACE"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ERROR_SECURITY_UPDATE_REQUIRED()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_SECURITY_UPDATE_REQUIRED"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ERROR_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_TIMEOUT"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ERROR_UNABLE_TO_PROCESS()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_UNABLE_TO_PROCESS"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ERROR_USER_CANCELED()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_USER_CANCELED"
		);
	}
	inline jint BiometricPrompt::BIOMETRIC_ERROR_VENDOR()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_VENDOR"
		);
	}
	inline jlong BiometricPrompt::BIOMETRIC_NO_AUTHENTICATION()
	{
		return getStaticField<jlong>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_NO_AUTHENTICATION"
		);
	}
	
	// Constructors
	
	// Methods
	inline void BiometricPrompt::authenticate(android::os::CancellationSignal arg0, JObject arg1, android::hardware::biometrics::BiometricPrompt_AuthenticationCallback arg2) const
	{
		callMethod<void>(
			"authenticate",
			"(Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Landroid/hardware/biometrics/BiometricPrompt$AuthenticationCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void BiometricPrompt::authenticate(android::hardware::biometrics::BiometricPrompt_CryptoObject arg0, android::os::CancellationSignal arg1, JObject arg2, android::hardware::biometrics::BiometricPrompt_AuthenticationCallback arg3) const
	{
		callMethod<void>(
			"authenticate",
			"(Landroid/hardware/biometrics/BiometricPrompt$CryptoObject;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Landroid/hardware/biometrics/BiometricPrompt$AuthenticationCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline jint BiometricPrompt::getAllowedAuthenticators() const
	{
		return callMethod<jint>(
			"getAllowedAuthenticators",
			"()I"
		);
	}
	inline JObject BiometricPrompt::getContentView() const
	{
		return callObjectMethod(
			"getContentView",
			"()Landroid/hardware/biometrics/PromptContentView;"
		);
	}
	inline JString BiometricPrompt::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::graphics::Bitmap BiometricPrompt::getLogoBitmap() const
	{
		return callObjectMethod(
			"getLogoBitmap",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline JString BiometricPrompt::getLogoDescription() const
	{
		return callObjectMethod(
			"getLogoDescription",
			"()Ljava/lang/String;"
		);
	}
	inline jint BiometricPrompt::getLogoRes() const
	{
		return callMethod<jint>(
			"getLogoRes",
			"()I"
		);
	}
	inline JString BiometricPrompt::getNegativeButtonText() const
	{
		return callObjectMethod(
			"getNegativeButtonText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString BiometricPrompt::getSubtitle() const
	{
		return callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString BiometricPrompt::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean BiometricPrompt::isConfirmationRequired() const
	{
		return callMethod<jboolean>(
			"isConfirmationRequired",
			"()Z"
		);
	}
} // namespace android::hardware::biometrics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::biometrics;
#endif
