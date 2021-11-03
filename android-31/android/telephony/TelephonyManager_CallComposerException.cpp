#include "../../java/io/IOException.hpp"
#include "./TelephonyManager_CallComposerException.hpp"

namespace android::telephony
{
	// Fields
	jint TelephonyManager_CallComposerException::ERROR_AUTHENTICATION_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager$CallComposerException",
			"ERROR_AUTHENTICATION_FAILED"
		);
	}
	jint TelephonyManager_CallComposerException::ERROR_FILE_TOO_LARGE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager$CallComposerException",
			"ERROR_FILE_TOO_LARGE"
		);
	}
	jint TelephonyManager_CallComposerException::ERROR_INPUT_CLOSED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager$CallComposerException",
			"ERROR_INPUT_CLOSED"
		);
	}
	jint TelephonyManager_CallComposerException::ERROR_IO_EXCEPTION()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager$CallComposerException",
			"ERROR_IO_EXCEPTION"
		);
	}
	jint TelephonyManager_CallComposerException::ERROR_NETWORK_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager$CallComposerException",
			"ERROR_NETWORK_UNAVAILABLE"
		);
	}
	jint TelephonyManager_CallComposerException::ERROR_REMOTE_END_CLOSED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager$CallComposerException",
			"ERROR_REMOTE_END_CLOSED"
		);
	}
	jint TelephonyManager_CallComposerException::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager$CallComposerException",
			"ERROR_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	TelephonyManager_CallComposerException::TelephonyManager_CallComposerException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	TelephonyManager_CallComposerException::TelephonyManager_CallComposerException(jint arg0, java::io::IOException arg1)
		: java::lang::Exception(
			"android.telephony.TelephonyManager$CallComposerException",
			"(ILjava/io/IOException;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jint TelephonyManager_CallComposerException::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	java::io::IOException TelephonyManager_CallComposerException::getIOException() const
	{
		return callObjectMethod(
			"getIOException",
			"()Ljava/io/IOException;"
		);
	}
} // namespace android::telephony

