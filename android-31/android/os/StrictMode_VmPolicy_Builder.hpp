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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StrictMode_VmPolicy_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StrictMode_VmPolicy_Builder(QAndroidJniObject obj);
		
		// Constructors
		StrictMode_VmPolicy_Builder();
		StrictMode_VmPolicy_Builder(android::os::StrictMode_VmPolicy arg0);
		
		// Methods
		android::os::StrictMode_VmPolicy build() const;
		android::os::StrictMode_VmPolicy_Builder detectActivityLeaks() const;
		android::os::StrictMode_VmPolicy_Builder detectAll() const;
		android::os::StrictMode_VmPolicy_Builder detectCleartextNetwork() const;
		android::os::StrictMode_VmPolicy_Builder detectContentUriWithoutPermission() const;
		android::os::StrictMode_VmPolicy_Builder detectCredentialProtectedWhileLocked() const;
		android::os::StrictMode_VmPolicy_Builder detectFileUriExposure() const;
		android::os::StrictMode_VmPolicy_Builder detectImplicitDirectBoot() const;
		android::os::StrictMode_VmPolicy_Builder detectIncorrectContextUse() const;
		android::os::StrictMode_VmPolicy_Builder detectLeakedClosableObjects() const;
		android::os::StrictMode_VmPolicy_Builder detectLeakedRegistrationObjects() const;
		android::os::StrictMode_VmPolicy_Builder detectLeakedSqlLiteObjects() const;
		android::os::StrictMode_VmPolicy_Builder detectNonSdkApiUsage() const;
		android::os::StrictMode_VmPolicy_Builder detectUnsafeIntentLaunch() const;
		android::os::StrictMode_VmPolicy_Builder detectUntaggedSockets() const;
		android::os::StrictMode_VmPolicy_Builder penaltyDeath() const;
		android::os::StrictMode_VmPolicy_Builder penaltyDeathOnCleartextNetwork() const;
		android::os::StrictMode_VmPolicy_Builder penaltyDeathOnFileUriExposure() const;
		android::os::StrictMode_VmPolicy_Builder penaltyDropBox() const;
		android::os::StrictMode_VmPolicy_Builder penaltyListener(JObject arg0, JObject arg1) const;
		android::os::StrictMode_VmPolicy_Builder penaltyLog() const;
		android::os::StrictMode_VmPolicy_Builder permitNonSdkApiUsage() const;
		android::os::StrictMode_VmPolicy_Builder permitUnsafeIntentLaunch() const;
		android::os::StrictMode_VmPolicy_Builder setClassInstanceLimit(JClass arg0, jint arg1) const;
	};
} // namespace android::os

