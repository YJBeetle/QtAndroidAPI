#include "./FullBackupDataOutput.hpp"

namespace android::app::backup
{
	// Fields
	
	// QAndroidJniObject forward
	FullBackupDataOutput::FullBackupDataOutput(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jlong FullBackupDataOutput::getQuota() const
	{
		return callMethod<jlong>(
			"getQuota",
			"()J"
		);
	}
	jint FullBackupDataOutput::getTransportFlags() const
	{
		return callMethod<jint>(
			"getTransportFlags",
			"()I"
		);
	}
} // namespace android::app::backup

