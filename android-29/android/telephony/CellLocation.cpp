#include "./CellLocation.hpp"

namespace android::telephony
{
	// Fields
	
	CellLocation::CellLocation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CellLocation::CellLocation()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellLocation",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CellLocation::getEmpty()
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

