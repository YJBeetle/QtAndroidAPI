#pragma once

#include "./BackupAgent.def.hpp"

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
class JString;

namespace android::app::backup
{
	class BackupAgentHelper : public android::app::backup::BackupAgent
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BackupAgentHelper(const char *className, const char *sig, Ts...agv) : android::app::backup::BackupAgent(className, sig, std::forward<Ts>(agv)...) {}
		BackupAgentHelper(QJniObject obj) : android::app::backup::BackupAgent(obj) {}
		
		// Constructors
		BackupAgentHelper();
		
		// Methods
		void addHelper(JString arg0, JObject arg1) const;
		void onBackup(android::os::ParcelFileDescriptor arg0, android::app::backup::BackupDataOutput arg1, android::os::ParcelFileDescriptor arg2) const;
		void onRestore(android::app::backup::BackupDataInput arg0, jint arg1, android::os::ParcelFileDescriptor arg2) const;
	};
} // namespace android::app::backup

