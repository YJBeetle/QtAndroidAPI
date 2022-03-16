#pragma once

#include "./MbmsErrors_GeneralErrors.def.hpp"

namespace android::telephony::mbms
{
	// Fields
	inline jint MbmsErrors_GeneralErrors::ERROR_CARRIER_CHANGE_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_CARRIER_CHANGE_NOT_ALLOWED"
		);
	}
	inline jint MbmsErrors_GeneralErrors::ERROR_IN_E911()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_IN_E911"
		);
	}
	inline jint MbmsErrors_GeneralErrors::ERROR_MIDDLEWARE_NOT_YET_READY()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_MIDDLEWARE_NOT_YET_READY"
		);
	}
	inline jint MbmsErrors_GeneralErrors::ERROR_MIDDLEWARE_TEMPORARILY_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_MIDDLEWARE_TEMPORARILY_UNAVAILABLE"
		);
	}
	inline jint MbmsErrors_GeneralErrors::ERROR_NOT_CONNECTED_TO_HOME_CARRIER_LTE()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_NOT_CONNECTED_TO_HOME_CARRIER_LTE"
		);
	}
	inline jint MbmsErrors_GeneralErrors::ERROR_OUT_OF_MEMORY()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_OUT_OF_MEMORY"
		);
	}
	inline jint MbmsErrors_GeneralErrors::ERROR_UNABLE_TO_READ_SIM()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_UNABLE_TO_READ_SIM"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony::mbms

// Base class headers

