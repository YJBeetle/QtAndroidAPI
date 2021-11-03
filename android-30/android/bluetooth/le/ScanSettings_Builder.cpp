#include "./ScanSettings.hpp"
#include "./ScanSettings_Builder.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// QJniObject forward
	ScanSettings_Builder::ScanSettings_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ScanSettings_Builder::ScanSettings_Builder()
		: JObject(
			"android.bluetooth.le.ScanSettings$Builder",
			"()V"
		) {}
	
	// Methods
	android::bluetooth::le::ScanSettings ScanSettings_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/ScanSettings;"
		);
	}
	android::bluetooth::le::ScanSettings_Builder ScanSettings_Builder::setCallbackType(jint arg0)
	{
		return callObjectMethod(
			"setCallbackType",
			"(I)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	android::bluetooth::le::ScanSettings_Builder ScanSettings_Builder::setLegacy(jboolean arg0)
	{
		return callObjectMethod(
			"setLegacy",
			"(Z)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	android::bluetooth::le::ScanSettings_Builder ScanSettings_Builder::setMatchMode(jint arg0)
	{
		return callObjectMethod(
			"setMatchMode",
			"(I)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	android::bluetooth::le::ScanSettings_Builder ScanSettings_Builder::setNumOfMatches(jint arg0)
	{
		return callObjectMethod(
			"setNumOfMatches",
			"(I)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	android::bluetooth::le::ScanSettings_Builder ScanSettings_Builder::setPhy(jint arg0)
	{
		return callObjectMethod(
			"setPhy",
			"(I)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	android::bluetooth::le::ScanSettings_Builder ScanSettings_Builder::setReportDelay(jlong arg0)
	{
		return callObjectMethod(
			"setReportDelay",
			"(J)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	android::bluetooth::le::ScanSettings_Builder ScanSettings_Builder::setScanMode(jint arg0)
	{
		return callObjectMethod(
			"setScanMode",
			"(I)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth::le

