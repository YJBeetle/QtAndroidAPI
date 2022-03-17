#pragma once

#include "./CellLocation.def.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	inline CellLocation::CellLocation()
		: JObject(
			"android.telephony.CellLocation",
			"()V"
		) {}
	
	// Methods
	inline android::telephony::CellLocation CellLocation::getEmpty()
	{
		return callStaticObjectMethod(
			"android.telephony.CellLocation",
			"getEmpty",
			"()Landroid/telephony/CellLocation;"
		);
	}
	inline void CellLocation::requestLocationUpdate()
	{
		callStaticMethod<void>(
			"android.telephony.CellLocation",
			"requestLocationUpdate",
			"()V"
		);
	}
} // namespace android::telephony

// Base class headers

