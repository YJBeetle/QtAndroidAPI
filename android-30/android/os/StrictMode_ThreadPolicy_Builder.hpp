#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class StrictMode_ThreadPolicy;
}

namespace android::os
{
	class StrictMode_ThreadPolicy_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StrictMode_ThreadPolicy_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StrictMode_ThreadPolicy_Builder(QAndroidJniObject obj);
		
		// Constructors
		StrictMode_ThreadPolicy_Builder();
		StrictMode_ThreadPolicy_Builder(android::os::StrictMode_ThreadPolicy arg0);
		
		// Methods
		android::os::StrictMode_ThreadPolicy build();
		android::os::StrictMode_ThreadPolicy_Builder detectAll();
		android::os::StrictMode_ThreadPolicy_Builder detectCustomSlowCalls();
		android::os::StrictMode_ThreadPolicy_Builder detectDiskReads();
		android::os::StrictMode_ThreadPolicy_Builder detectDiskWrites();
		android::os::StrictMode_ThreadPolicy_Builder detectNetwork();
		android::os::StrictMode_ThreadPolicy_Builder detectResourceMismatches();
		android::os::StrictMode_ThreadPolicy_Builder detectUnbufferedIo();
		android::os::StrictMode_ThreadPolicy_Builder penaltyDeath();
		android::os::StrictMode_ThreadPolicy_Builder penaltyDeathOnNetwork();
		android::os::StrictMode_ThreadPolicy_Builder penaltyDialog();
		android::os::StrictMode_ThreadPolicy_Builder penaltyDropBox();
		android::os::StrictMode_ThreadPolicy_Builder penaltyFlashScreen();
		android::os::StrictMode_ThreadPolicy_Builder penaltyListener(__JniBaseClass arg0, __JniBaseClass arg1);
		android::os::StrictMode_ThreadPolicy_Builder penaltyLog();
		android::os::StrictMode_ThreadPolicy_Builder permitAll();
		android::os::StrictMode_ThreadPolicy_Builder permitCustomSlowCalls();
		android::os::StrictMode_ThreadPolicy_Builder permitDiskReads();
		android::os::StrictMode_ThreadPolicy_Builder permitDiskWrites();
		android::os::StrictMode_ThreadPolicy_Builder permitNetwork();
		android::os::StrictMode_ThreadPolicy_Builder permitResourceMismatches();
		android::os::StrictMode_ThreadPolicy_Builder permitUnbufferedIo();
	};
} // namespace android::os

