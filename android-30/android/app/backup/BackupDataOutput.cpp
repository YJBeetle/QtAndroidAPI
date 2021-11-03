#include "./BackupDataOutput.hpp"

namespace android::app::backup
{
	// Fields
	
	// QJniObject forward
	BackupDataOutput::BackupDataOutput(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jlong BackupDataOutput::getQuota()
	{
		return callMethod<jlong>(
			"getQuota",
			"()J"
		);
	}
	jint BackupDataOutput::getTransportFlags()
	{
		return callMethod<jint>(
			"getTransportFlags",
			"()I"
		);
	}
	jint BackupDataOutput::writeEntityData(jbyteArray arg0, jint arg1)
	{
		return callMethod<jint>(
			"writeEntityData",
			"([BI)I",
			arg0,
			arg1
		);
	}
	jint BackupDataOutput::writeEntityHeader(jstring arg0, jint arg1)
	{
		return callMethod<jint>(
			"writeEntityHeader",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
} // namespace android::app::backup

