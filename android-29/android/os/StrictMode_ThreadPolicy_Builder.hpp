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
		QAndroidJniObject build();
		QAndroidJniObject detectAll();
		QAndroidJniObject detectCustomSlowCalls();
		QAndroidJniObject detectDiskReads();
		QAndroidJniObject detectDiskWrites();
		QAndroidJniObject detectNetwork();
		QAndroidJniObject detectResourceMismatches();
		QAndroidJniObject detectUnbufferedIo();
		QAndroidJniObject penaltyDeath();
		QAndroidJniObject penaltyDeathOnNetwork();
		QAndroidJniObject penaltyDialog();
		QAndroidJniObject penaltyDropBox();
		QAndroidJniObject penaltyFlashScreen();
		QAndroidJniObject penaltyListener(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject penaltyLog();
		QAndroidJniObject permitAll();
		QAndroidJniObject permitCustomSlowCalls();
		QAndroidJniObject permitDiskReads();
		QAndroidJniObject permitDiskWrites();
		QAndroidJniObject permitNetwork();
		QAndroidJniObject permitResourceMismatches();
		QAndroidJniObject permitUnbufferedIo();
	};
} // namespace android::os

