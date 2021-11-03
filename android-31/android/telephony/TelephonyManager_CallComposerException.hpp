#pragma once

#include "../../java/lang/Exception.hpp"

namespace java::io
{
	class IOException;
}

namespace android::telephony
{
	class TelephonyManager_CallComposerException : public java::lang::Exception
	{
	public:
		// Fields
		static jint ERROR_AUTHENTICATION_FAILED();
		static jint ERROR_FILE_TOO_LARGE();
		static jint ERROR_INPUT_CLOSED();
		static jint ERROR_IO_EXCEPTION();
		static jint ERROR_NETWORK_UNAVAILABLE();
		static jint ERROR_REMOTE_END_CLOSED();
		static jint ERROR_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TelephonyManager_CallComposerException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyManager_CallComposerException(QAndroidJniObject obj);
		
		// Constructors
		TelephonyManager_CallComposerException(jint arg0, java::io::IOException arg1);
		
		// Methods
		jint getErrorCode();
		java::io::IOException getIOException();
	};
} // namespace android::telephony

