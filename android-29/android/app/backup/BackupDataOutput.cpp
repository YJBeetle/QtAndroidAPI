#include "../../../java/io/FileDescriptor.hpp"
#include "./BackupDataOutput.hpp"

namespace android::app::backup
{
	// Fields
	
	BackupDataOutput::BackupDataOutput(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jlong BackupDataOutput::getQuota()
	{
		return __thiz.callMethod<jlong>(
			"getQuota",
			"()J"
		);
	}
	jint BackupDataOutput::getTransportFlags()
	{
		return __thiz.callMethod<jint>(
			"getTransportFlags",
			"()I"
		);
	}
	jint BackupDataOutput::writeEntityData(jbyteArray arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"writeEntityData",
			"([BI)I",
			arg0,
			arg1
		);
	}
	jint BackupDataOutput::writeEntityHeader(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"writeEntityHeader",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jint BackupDataOutput::writeEntityHeader(const QString &arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"writeEntityHeader",
			"(Ljava/lang/String;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
} // namespace android::app::backup

