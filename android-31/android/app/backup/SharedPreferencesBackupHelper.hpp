#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::app::backup
{
	class BackupDataInputStream;
}
namespace android::app::backup
{
	class BackupDataOutput;
}
namespace android::content
{
	class Context;
}
namespace android::os
{
	class ParcelFileDescriptor;
}

namespace android::app::backup
{
	class SharedPreferencesBackupHelper : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SharedPreferencesBackupHelper(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SharedPreferencesBackupHelper(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		SharedPreferencesBackupHelper(android::content::Context arg0, JArray arg1);
		
		// Methods
		void performBackup(android::os::ParcelFileDescriptor arg0, android::app::backup::BackupDataOutput arg1, android::os::ParcelFileDescriptor arg2) const;
		void restoreEntity(android::app::backup::BackupDataInputStream arg0) const;
		void writeNewStateDescription(android::os::ParcelFileDescriptor arg0) const;
	};
} // namespace android::app::backup

