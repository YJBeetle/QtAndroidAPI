#include "./MbmsErrors_DownloadErrors.hpp"

namespace android::telephony::mbms
{
	// Fields
	jint MbmsErrors_DownloadErrors::ERROR_CANNOT_CHANGE_TEMP_FILE_ROOT()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$DownloadErrors",
			"ERROR_CANNOT_CHANGE_TEMP_FILE_ROOT"
		);
	}
	jint MbmsErrors_DownloadErrors::ERROR_UNKNOWN_DOWNLOAD_REQUEST()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$DownloadErrors",
			"ERROR_UNKNOWN_DOWNLOAD_REQUEST"
		);
	}
	jint MbmsErrors_DownloadErrors::ERROR_UNKNOWN_FILE_INFO()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$DownloadErrors",
			"ERROR_UNKNOWN_FILE_INFO"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony::mbms

