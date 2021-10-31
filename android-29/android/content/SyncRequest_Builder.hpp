#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::accounts
{
	class Account;
}
namespace android::content
{
	class SyncRequest;
}
namespace android::os
{
	class Bundle;
}

namespace android::content
{
	class SyncRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		SyncRequest_Builder(QAndroidJniObject obj);
		// Constructors
		SyncRequest_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setDisallowMetered(jboolean arg0);
		QAndroidJniObject setExpedited(jboolean arg0);
		QAndroidJniObject setExtras(android::os::Bundle arg0);
		QAndroidJniObject setIgnoreBackoff(jboolean arg0);
		QAndroidJniObject setIgnoreSettings(jboolean arg0);
		QAndroidJniObject setManual(jboolean arg0);
		QAndroidJniObject setNoRetry(jboolean arg0);
		QAndroidJniObject setRequiresCharging(jboolean arg0);
		QAndroidJniObject setSyncAdapter(android::accounts::Account arg0, jstring arg1);
		QAndroidJniObject syncOnce();
		QAndroidJniObject syncPeriodic(jlong arg0, jlong arg1);
	};
} // namespace android::content

