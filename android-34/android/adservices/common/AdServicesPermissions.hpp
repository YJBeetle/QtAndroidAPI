#pragma once

#include "../../../JString.hpp"
#include "./AdServicesPermissions.def.hpp"

namespace android::adservices::common
{
	// Fields
	inline JString AdServicesPermissions::ACCESS_ADSERVICES_AD_ID()
	{
		return getStaticObjectField(
			"android.adservices.common.AdServicesPermissions",
			"ACCESS_ADSERVICES_AD_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString AdServicesPermissions::ACCESS_ADSERVICES_ATTRIBUTION()
	{
		return getStaticObjectField(
			"android.adservices.common.AdServicesPermissions",
			"ACCESS_ADSERVICES_ATTRIBUTION",
			"Ljava/lang/String;"
		);
	}
	inline JString AdServicesPermissions::ACCESS_ADSERVICES_CUSTOM_AUDIENCE()
	{
		return getStaticObjectField(
			"android.adservices.common.AdServicesPermissions",
			"ACCESS_ADSERVICES_CUSTOM_AUDIENCE",
			"Ljava/lang/String;"
		);
	}
	inline JString AdServicesPermissions::ACCESS_ADSERVICES_TOPICS()
	{
		return getStaticObjectField(
			"android.adservices.common.AdServicesPermissions",
			"ACCESS_ADSERVICES_TOPICS",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::adservices::common

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::common;
#endif
