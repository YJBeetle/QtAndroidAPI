#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"

namespace android::app::backup
{
	class BackupDataInput;
}
namespace android::app::backup
{
	class BackupDataOutput;
}
namespace android::app::backup
{
	class FullBackupDataOutput;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
namespace java::io
{
	class File;
}

namespace android::app::backup
{
	class BackupAgent : public android::content::ContextWrapper
	{
	public:
		// Fields
		static jint FLAG_CLIENT_SIDE_ENCRYPTION_ENABLED();
		static jint FLAG_DEVICE_TO_DEVICE_TRANSFER();
		static jint TYPE_DIRECTORY();
		static jint TYPE_FILE();
		
		// QJniObject forward
		template<typename ...Ts> explicit BackupAgent(const char *className, const char *sig, Ts...agv) : android::content::ContextWrapper(className, sig, std::forward<Ts>(agv)...) {}
		BackupAgent(QJniObject obj);
		
		// Constructors
		BackupAgent();
		
		// Methods
		void fullBackupFile(java::io::File arg0, android::app::backup::FullBackupDataOutput arg1);
		void onBackup(android::os::ParcelFileDescriptor arg0, android::app::backup::BackupDataOutput arg1, android::os::ParcelFileDescriptor arg2);
		void onCreate();
		void onDestroy();
		void onFullBackup(android::app::backup::FullBackupDataOutput arg0);
		void onQuotaExceeded(jlong arg0, jlong arg1);
		void onRestore(android::app::backup::BackupDataInput arg0, jint arg1, android::os::ParcelFileDescriptor arg2);
		void onRestore(android::app::backup::BackupDataInput arg0, jlong arg1, android::os::ParcelFileDescriptor arg2);
		void onRestoreFile(android::os::ParcelFileDescriptor arg0, jlong arg1, java::io::File arg2, jint arg3, jlong arg4, jlong arg5);
		void onRestoreFinished();
	};
} // namespace android::app::backup

