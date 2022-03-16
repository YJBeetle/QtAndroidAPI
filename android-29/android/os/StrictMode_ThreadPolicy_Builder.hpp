#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class StrictMode_ThreadPolicy;
}

namespace android::os
{
	class StrictMode_ThreadPolicy_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StrictMode_ThreadPolicy_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StrictMode_ThreadPolicy_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		StrictMode_ThreadPolicy_Builder();
		StrictMode_ThreadPolicy_Builder(android::os::StrictMode_ThreadPolicy arg0);
		
		// Methods
		android::os::StrictMode_ThreadPolicy build() const;
		android::os::StrictMode_ThreadPolicy_Builder detectAll() const;
		android::os::StrictMode_ThreadPolicy_Builder detectCustomSlowCalls() const;
		android::os::StrictMode_ThreadPolicy_Builder detectDiskReads() const;
		android::os::StrictMode_ThreadPolicy_Builder detectDiskWrites() const;
		android::os::StrictMode_ThreadPolicy_Builder detectNetwork() const;
		android::os::StrictMode_ThreadPolicy_Builder detectResourceMismatches() const;
		android::os::StrictMode_ThreadPolicy_Builder detectUnbufferedIo() const;
		android::os::StrictMode_ThreadPolicy_Builder penaltyDeath() const;
		android::os::StrictMode_ThreadPolicy_Builder penaltyDeathOnNetwork() const;
		android::os::StrictMode_ThreadPolicy_Builder penaltyDialog() const;
		android::os::StrictMode_ThreadPolicy_Builder penaltyDropBox() const;
		android::os::StrictMode_ThreadPolicy_Builder penaltyFlashScreen() const;
		android::os::StrictMode_ThreadPolicy_Builder penaltyListener(JObject arg0, JObject arg1) const;
		android::os::StrictMode_ThreadPolicy_Builder penaltyLog() const;
		android::os::StrictMode_ThreadPolicy_Builder permitAll() const;
		android::os::StrictMode_ThreadPolicy_Builder permitCustomSlowCalls() const;
		android::os::StrictMode_ThreadPolicy_Builder permitDiskReads() const;
		android::os::StrictMode_ThreadPolicy_Builder permitDiskWrites() const;
		android::os::StrictMode_ThreadPolicy_Builder permitNetwork() const;
		android::os::StrictMode_ThreadPolicy_Builder permitResourceMismatches() const;
		android::os::StrictMode_ThreadPolicy_Builder permitUnbufferedIo() const;
	};
} // namespace android::os

