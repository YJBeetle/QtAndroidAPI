#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class StrictMode_ThreadPolicy;
}
namespace android::os
{
	class StrictMode_VmPolicy;
}

namespace android::os
{
	class StrictMode : public __JniBaseClass
	{
	public:
		// Fields
		
		StrictMode(QAndroidJniObject obj);
		// Constructors
		StrictMode() = default;
		
		// Methods
		static QAndroidJniObject allowThreadDiskReads();
		static QAndroidJniObject allowThreadDiskWrites();
		static void enableDefaults();
		static QAndroidJniObject getThreadPolicy();
		static QAndroidJniObject getVmPolicy();
		static void noteSlowCall(jstring arg0);
		static void setThreadPolicy(android::os::StrictMode_ThreadPolicy arg0);
		static void setVmPolicy(android::os::StrictMode_VmPolicy arg0);
	};
} // namespace android::os

