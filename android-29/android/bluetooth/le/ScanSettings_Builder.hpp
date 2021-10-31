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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScanSettings_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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

