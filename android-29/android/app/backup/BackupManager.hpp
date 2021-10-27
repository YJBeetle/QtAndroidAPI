#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::backup
{
	class RestoreObserver;
}
namespace android::content
{
	class Context;
}
namespace android::os
{
	class UserHandle;
}

namespace android::app::backup
{
	class BackupManager : public __JniBaseClass
	{
	public:
		// Fields
		
		BackupManager(QAndroidJniObject obj);
		// Constructors
		BackupManager(android::content::Context &arg0);
		BackupManager() = default;
		
		// Methods
		static void dataChanged(jstring arg0);
		static void dataChanged(const QString &arg0);
		void dataChanged();
		QAndroidJniObject getUserForAncestralSerialNumber(jlong arg0);
		jint requestRestore(android::app::backup::RestoreObserver arg0);
	};
} // namespace android::app::backup

