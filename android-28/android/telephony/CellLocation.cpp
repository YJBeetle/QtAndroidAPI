#include "./CellLocation.hpp"

namespace android::telephony
{
	// Fields
	
	// QAndroidJniObject forward
	CellLocation::CellLocation(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	CellLocation::CellLocation()
		: JObject(
			"android.telephony.CellLocation",
			"()V"
		) {}
	
	// Methods
	android::telephony::CellLocation CellLocation::getEmpty()
	{
		return callStaticObjectMethod(
			"android.telephony.CellLocation",
			"getEmpty",
			"()Landroid/telephony/CellLocation;"
		);
	}
	void CellLocation::requestLocationUpdate()
	{
		callStaticMethod<void>(
			"android.telephony.CellLocation",
			"requestLocationUpdate",
			"()V"
		);
	}
} // namespace android::telephony

