#pragma once

#include "./AccessNetworkConstants_AccessNetworkType.def.hpp"

namespace android::telephony
{
	// Fields
	inline jint AccessNetworkConstants_AccessNetworkType::CDMA2000()
	{
		return getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"CDMA2000"
		);
	}
	inline jint AccessNetworkConstants_AccessNetworkType::EUTRAN()
	{
		return getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"EUTRAN"
		);
	}
	inline jint AccessNetworkConstants_AccessNetworkType::GERAN()
	{
		return getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"GERAN"
		);
	}
	inline jint AccessNetworkConstants_AccessNetworkType::IWLAN()
	{
		return getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"IWLAN"
		);
	}
	inline jint AccessNetworkConstants_AccessNetworkType::NGRAN()
	{
		return getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"NGRAN"
		);
	}
	inline jint AccessNetworkConstants_AccessNetworkType::UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"UNKNOWN"
		);
	}
	inline jint AccessNetworkConstants_AccessNetworkType::UTRAN()
	{
		return getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"UTRAN"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
