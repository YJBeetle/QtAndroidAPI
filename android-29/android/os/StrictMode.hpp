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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StrictMode(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StrictMode(QAndroidJniObject obj);
		
		// Constructors
		
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

