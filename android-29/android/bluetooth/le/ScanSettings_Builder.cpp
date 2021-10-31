#include "./ScanSettings.hpp"
#include "./ScanSettings_Builder.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// QAndroidJniObject forward
	ScanSettings_Builder::ScanSettings_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ScanSettings_Builder::ScanSettings_Builder()
		: __JniBaseClass(
			"android.bluetooth.le.ScanSettings$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject ScanSettings_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/ScanSettings;"
		);
	}
	QAndroidJniObject ScanSettings_Builder::setCallbackType(jint arg0)
	{
		return callObjectMethod(
			"setCallbackType",
			"(I)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject ScanSettings_Builder::setLegacy(jboolean arg0)
	{
		return callObjectMethod(
			"setLegacy",
			"(Z)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject ScanSettings_Builder::setMatchMode(jint arg0)
	{
		return callObjectMethod(
			"setMatchMode",
			"(I)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject ScanSettings_Builder::setNumOfMatches(jint arg0)
	{
		return callObjectMethod(
			"setNumOfMatches",
			"(I)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject ScanSettings_Builder::setPhy(jint arg0)
	{
		return callObjectMethod(
			"setPhy",
			"(I)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject ScanSettings_Builder::setReportDelay(jlong arg0)
	{
		return callObjectMethod(
			"setReportDelay",
			"(J)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject ScanSettings_Builder::setScanMode(jint arg0)
	{
		return callObjectMethod(
			"setScanMode",
			"(I)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth::le

