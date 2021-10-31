#include "./CellLocation.hpp"

namespace android::telephony
{
	// Fields
	
	// QAndroidJniObject forward
	CellLocation::CellLocation(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CellLocation::CellLocation()
		: __JniBaseClass(
			"android.telephony.CellLocation",
			"()V"
		) {}
	
	// Methods
	android::telephony::CellLocation CellLocation::getEmpty()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.CellLocation",
			"getEmpty",
			"()Landroid/telephony/CellLocation;"
		);
	}
	void CellLocation::requestLocationUpdate()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.telephony.CellLocation",
			"requestLocationUpdate",
			"()V"
		);
	}
} // namespace android::telephony

