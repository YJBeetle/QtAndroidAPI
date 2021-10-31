#include "./FullBackupDataOutput.hpp"

namespace android::app::backup
{
	// Fields
	
	// QAndroidJniObject forward
	FullBackupDataOutput::FullBackupDataOutput(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jlong FullBackupDataOutput::getQuota()
	{
		return callMethod<jlong>(
			"getQuota",
			"()J"
		);
	}
	jint FullBackupDataOutput::getTransportFlags()
	{
		return callMethod<jint>(
			"getTransportFlags",
			"()I"
		);
	}
} // namespace android::app::backup

