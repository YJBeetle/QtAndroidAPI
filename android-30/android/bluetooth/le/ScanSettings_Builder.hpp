#pragma once

#include "./ScanSettings.def.hpp"
#include "./ScanSettings_Builder.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// Constructors
	inline ScanSettings_Builder::ScanSettings_Builder()
		: JObject(
			"android.bluetooth.le.ScanSettings$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::bluetooth::le::ScanSettings ScanSettings_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/ScanSettings;"
		);
	}
	inline android::bluetooth::le::ScanSettings_Builder ScanSettings_Builder::setCallbackType(jint arg0) const
	{
		return callObjectMethod(
			"setCallbackType",
			"(I)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	inline android::bluetooth::le::ScanSettings_Builder ScanSettings_Builder::setLegacy(jboolean arg0) const
	{
		return callObjectMethod(
			"setLegacy",
			"(Z)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	inline android::bluetooth::le::ScanSettings_Builder ScanSettings_Builder::setMatchMode(jint arg0) const
	{
		return callObjectMethod(
			"setMatchMode",
			"(I)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	inline android::bluetooth::le::ScanSettings_Builder ScanSettings_Builder::setNumOfMatches(jint arg0) const
	{
		return callObjectMethod(
			"setNumOfMatches",
			"(I)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	inline android::bluetooth::le::ScanSettings_Builder ScanSettings_Builder::setPhy(jint arg0) const
	{
		return callObjectMethod(
			"setPhy",
			"(I)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	inline android::bluetooth::le::ScanSettings_Builder ScanSettings_Builder::setReportDelay(jlong arg0) const
	{
		return callObjectMethod(
			"setReportDelay",
			"(J)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	inline android::bluetooth::le::ScanSettings_Builder ScanSettings_Builder::setScanMode(jint arg0) const
	{
		return callObjectMethod(
			"setScanMode",
			"(I)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth::le

// Base class headers

