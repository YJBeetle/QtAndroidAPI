#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class StrictMode_VmPolicy;
}

namespace android::os
{
	class StrictMode_VmPolicy_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		StrictMode_VmPolicy_Builder(QAndroidJniObject obj);
		// Constructors
		StrictMode_VmPolicy_Builder();
		StrictMode_VmPolicy_Builder(android::os::StrictMode_VmPolicy arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject detectActivityLeaks();
		QAndroidJniObject detectAll();
		QAndroidJniObject detectCleartextNetwork();
		QAndroidJniObject detectContentUriWithoutPermission();
		QAndroidJniObject detectCredentialProtectedWhileLocked();
		QAndroidJniObject detectFileUriExposure();
		QAndroidJniObject detectImplicitDirectBoot();
		QAndroidJniObject detectLeakedClosableObjects();
		QAndroidJniObject detectLeakedRegistrationObjects();
		QAndroidJniObject detectLeakedSqlLiteObjects();
		QAndroidJniObject detectNonSdkApiUsage();
		QAndroidJniObject detectUntaggedSockets();
		QAndroidJniObject penaltyDeath();
		QAndroidJniObject penaltyDeathOnCleartextNetwork();
		QAndroidJniObject penaltyDeathOnFileUriExposure();
		QAndroidJniObject penaltyDropBox();
		QAndroidJniObject penaltyListener(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject penaltyLog();
		QAndroidJniObject permitNonSdkApiUsage();
		QAndroidJniObject setClassInstanceLimit(jclass arg0, jint arg1);
	};
} // namespace android::os

