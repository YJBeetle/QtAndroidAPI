#pragma once

#include "../../../JObject.hpp"

namespace android::bluetooth::le
{
	class ScanSettings;
}

namespace android::bluetooth::le
{
	class ScanSettings_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScanSettings_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScanSettings_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ScanSettings_Builder();
		
		// Methods
		android::bluetooth::le::ScanSettings build() const;
		android::bluetooth::le::ScanSettings_Builder setCallbackType(jint arg0) const;
		android::bluetooth::le::ScanSettings_Builder setLegacy(jboolean arg0) const;
		android::bluetooth::le::ScanSettings_Builder setMatchMode(jint arg0) const;
		android::bluetooth::le::ScanSettings_Builder setNumOfMatches(jint arg0) const;
		android::bluetooth::le::ScanSettings_Builder setPhy(jint arg0) const;
		android::bluetooth::le::ScanSettings_Builder setReportDelay(jlong arg0) const;
		android::bluetooth::le::ScanSettings_Builder setScanMode(jint arg0) const;
	};
} // namespace android::bluetooth::le

