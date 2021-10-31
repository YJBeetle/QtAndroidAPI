#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "./BackupAgent.hpp"

namespace android::app::backup
{
	class BackupDataInput;
}
namespace android::app::backup
{
	class BackupDataOutput;
}
namespace android::os
{
	class ParcelFileDescriptor;
}

namespace android::app::backup
{
	class BackupAgentHelper : public android::app::backup::BackupAgent
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BackupAgentHelper(const char *className, const char *sig, Ts...agv) : android::app::backup::BackupAgent(className, sig, std::forward<Ts>(agv)...) {}
		BackupAgentHelper(QAndroidJniObject obj);
		
		// Constructors
		BackupAgentHelper();
		
		// Methods
		void addHelper(jstring arg0, __JniBaseClass arg1);
		void onBackup(android::os::ParcelFileDescriptor arg0, android::app::backup::BackupDataOutput arg1, android::os::ParcelFileDescriptor arg2);
		void onRestore(android::app::backup::BackupDataInput arg0, jint arg1, android::os::ParcelFileDescriptor arg2);
	};
} // namespace android::app::backup

