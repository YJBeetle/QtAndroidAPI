#include "./FullBackupDataOutput.hpp"

namespace android::app::backup
{
	// Fields
	
	FullBackupDataOutput::FullBackupDataOutput(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jlong FullBackupDataOutput::getQuota()
	{
		return __thiz.callMethod<jlong>(
			"getQuota",
			"()J"
		);
	}
	jint FullBackupDataOutput::getTransportFlags()
	{
		return __thiz.callMethod<jint>(
			"getTransportFlags",
			"()I"
		);
	}
} // namespace android::app::backup

