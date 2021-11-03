#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./BackupDataOutput.hpp"

namespace android::app::backup
{
	// Fields
	
	// QAndroidJniObject forward
	BackupDataOutput::BackupDataOutput(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jlong BackupDataOutput::getQuota() const
	{
		return callMethod<jlong>(
			"getQuota",
			"()J"
		);
	}
	jint BackupDataOutput::getTransportFlags() const
	{
		return callMethod<jint>(
			"getTransportFlags",
			"()I"
		);
	}
	jint BackupDataOutput::writeEntityData(JByteArray arg0, jint arg1) const
	{
		return callMethod<jint>(
			"writeEntityData",
			"([BI)I",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	jint BackupDataOutput::writeEntityHeader(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"writeEntityHeader",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::app::backup

