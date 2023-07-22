#pragma once

#include "../../java/io/IOException.def.hpp"
#include "./TelephonyManager_CallComposerException.def.hpp"

namespace android::telephony
{
	// Fields
	inline jint TelephonyManager_CallComposerException::ERROR_AUTHENTICATION_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager$CallComposerException",
			"ERROR_AUTHENTICATION_FAILED"
		);
	}
	inline jint TelephonyManager_CallComposerException::ERROR_FILE_TOO_LARGE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager$CallComposerException",
			"ERROR_FILE_TOO_LARGE"
		);
	}
	inline jint TelephonyManager_CallComposerException::ERROR_INPUT_CLOSED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager$CallComposerException",
			"ERROR_INPUT_CLOSED"
		);
	}
	inline jint TelephonyManager_CallComposerException::ERROR_IO_EXCEPTION()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager$CallComposerException",
			"ERROR_IO_EXCEPTION"
		);
	}
	inline jint TelephonyManager_CallComposerException::ERROR_NETWORK_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager$CallComposerException",
			"ERROR_NETWORK_UNAVAILABLE"
		);
	}
	inline jint TelephonyManager_CallComposerException::ERROR_REMOTE_END_CLOSED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager$CallComposerException",
			"ERROR_REMOTE_END_CLOSED"
		);
	}
	inline jint TelephonyManager_CallComposerException::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager$CallComposerException",
			"ERROR_UNKNOWN"
		);
	}
	
	// Constructors
	inline TelephonyManager_CallComposerException::TelephonyManager_CallComposerException(jint arg0, java::io::IOException arg1)
		: java::lang::Exception(
			"android.telephony.TelephonyManager$CallComposerException",
			"(ILjava/io/IOException;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline jint TelephonyManager_CallComposerException::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	inline java::io::IOException TelephonyManager_CallComposerException::getIOException() const
	{
		return callObjectMethod(
			"getIOException",
			"()Ljava/io/IOException;"
		);
	}
} // namespace android::telephony

// Base class headers
#include "../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
