#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class StrictMode_VmPolicy;
}
class JClass;

namespace android::os
{
	class StrictMode_VmPolicy_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StrictMode_VmPolicy_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StrictMode_VmPolicy_Builder(QJniObject obj);
		
		// Constructors
		StrictMode_VmPolicy_Builder();
		StrictMode_VmPolicy_Builder(android::os::StrictMode_VmPolicy arg0);
		
		// Methods
		android::os::StrictMode_VmPolicy build();
		android::os::StrictMode_VmPolicy_Builder detectActivityLeaks();
		android::os::StrictMode_VmPolicy_Builder detectAll();
		android::os::StrictMode_VmPolicy_Builder detectCleartextNetwork();
		android::os::StrictMode_VmPolicy_Builder detectContentUriWithoutPermission();
		android::os::StrictMode_VmPolicy_Builder detectCredentialProtectedWhileLocked();
		android::os::StrictMode_VmPolicy_Builder detectFileUriExposure();
		android::os::StrictMode_VmPolicy_Builder detectImplicitDirectBoot();
		android::os::StrictMode_VmPolicy_Builder detectIncorrectContextUse();
		android::os::StrictMode_VmPolicy_Builder detectLeakedClosableObjects();
		android::os::StrictMode_VmPolicy_Builder detectLeakedRegistrationObjects();
		android::os::StrictMode_VmPolicy_Builder detectLeakedSqlLiteObjects();
		android::os::StrictMode_VmPolicy_Builder detectNonSdkApiUsage();
		android::os::StrictMode_VmPolicy_Builder detectUnsafeIntentLaunch();
		android::os::StrictMode_VmPolicy_Builder detectUntaggedSockets();
		android::os::StrictMode_VmPolicy_Builder penaltyDeath();
		android::os::StrictMode_VmPolicy_Builder penaltyDeathOnCleartextNetwork();
		android::os::StrictMode_VmPolicy_Builder penaltyDeathOnFileUriExposure();
		android::os::StrictMode_VmPolicy_Builder penaltyDropBox();
		android::os::StrictMode_VmPolicy_Builder penaltyListener(JObject arg0, JObject arg1);
		android::os::StrictMode_VmPolicy_Builder penaltyLog();
		android::os::StrictMode_VmPolicy_Builder permitNonSdkApiUsage();
		android::os::StrictMode_VmPolicy_Builder permitUnsafeIntentLaunch();
		android::os::StrictMode_VmPolicy_Builder setClassInstanceLimit(JClass arg0, jint arg1);
	};
} // namespace android::os

