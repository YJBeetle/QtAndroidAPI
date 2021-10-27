#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::telephony::mbms
{
	class MbmsErrors_DownloadErrors : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_CANNOT_CHANGE_TEMP_FILE_ROOT();
		static jint ERROR_UNKNOWN_DOWNLOAD_REQUEST();
		static jint ERROR_UNKNOWN_FILE_INFO();
		
		MbmsErrors_DownloadErrors(QAndroidJniObject obj);
		// Constructors
		MbmsErrors_DownloadErrors() = default;
		
		// Methods
	};
} // namespace android::telephony::mbms

