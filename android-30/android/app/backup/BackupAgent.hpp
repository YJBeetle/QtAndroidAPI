#pragma once

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
		void fullBackupFile(java::io::File arg0, android::app::backup::FullBackupDataOutput arg1) const;
		void onBackup(android::os::ParcelFileDescriptor arg0, android::app::backup::BackupDataOutput arg1, android::os::ParcelFileDescriptor arg2) const;
		void onCreate() const;
		void onDestroy() const;
		void onFullBackup(android::app::backup::FullBackupDataOutput arg0) const;
		void onQuotaExceeded(jlong arg0, jlong arg1) const;
		void onRestore(android::app::backup::BackupDataInput arg0, jint arg1, android::os::ParcelFileDescriptor arg2) const;
		void onRestore(android::app::backup::BackupDataInput arg0, jlong arg1, android::os::ParcelFileDescriptor arg2) const;
		void onRestoreFile(android::os::ParcelFileDescriptor arg0, jlong arg1, java::io::File arg2, jint arg3, jlong arg4, jlong arg5) const;
		void onRestoreFinished() const;
	};
} // namespace android::app::backup

