#pragma once

#include "./MbmsErrors_DownloadErrors.def.hpp"

namespace android::telephony::mbms
{
	// Fields
	inline jint MbmsErrors_DownloadErrors::ERROR_CANNOT_CHANGE_TEMP_FILE_ROOT()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$DownloadErrors",
			"ERROR_CANNOT_CHANGE_TEMP_FILE_ROOT"
		);
	}
	inline jint MbmsErrors_DownloadErrors::ERROR_MALFORMED_SERVICE_ANNOUNCEMENT()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$DownloadErrors",
			"ERROR_MALFORMED_SERVICE_ANNOUNCEMENT"
		);
	}
	inline jint MbmsErrors_DownloadErrors::ERROR_UNKNOWN_DOWNLOAD_REQUEST()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$DownloadErrors",
			"ERROR_UNKNOWN_DOWNLOAD_REQUEST"
		);
	}
	inline jint MbmsErrors_DownloadErrors::ERROR_UNKNOWN_FILE_INFO()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$DownloadErrors",
			"ERROR_UNKNOWN_FILE_INFO"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony::mbms

// Base class headers

