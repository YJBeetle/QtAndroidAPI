#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::bluetooth::le
{
	class ScanSettings;
}

namespace android::bluetooth::le
{
	class ScanSettings_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScanSettings_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ScanSettings_Builder(QJniObject obj);
		
		// Constructors
		ScanSettings_Builder();
		
		// Methods
		android::bluetooth::le::ScanSettings build();
		android::bluetooth::le::ScanSettings_Builder setCallbackType(jint arg0);
		android::bluetooth::le::ScanSettings_Builder setLegacy(jboolean arg0);
		android::bluetooth::le::ScanSettings_Builder setMatchMode(jint arg0);
		android::bluetooth::le::ScanSettings_Builder setNumOfMatches(jint arg0);
		android::bluetooth::le::ScanSettings_Builder setPhy(jint arg0);
		android::bluetooth::le::ScanSettings_Builder setReportDelay(jlong arg0);
		android::bluetooth::le::ScanSettings_Builder setScanMode(jint arg0);
	};
} // namespace android::bluetooth::le

