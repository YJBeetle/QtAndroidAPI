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
		
		ScanSettings_Builder(QAndroidJniObject obj);
		// Constructors
		ScanSettings_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setCallbackType(jint arg0);
		QAndroidJniObject setLegacy(jboolean arg0);
		QAndroidJniObject setMatchMode(jint arg0);
		QAndroidJniObject setNumOfMatches(jint arg0);
		QAndroidJniObject setPhy(jint arg0);
		QAndroidJniObject setReportDelay(jlong arg0);
		QAndroidJniObject setScanMode(jint arg0);
	};
} // namespace android::bluetooth::le

