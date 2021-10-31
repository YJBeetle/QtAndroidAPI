#include "./BackupDataInputStream.hpp"

namespace android::app::backup
{
	// Fields
	
	// QJniObject forward
	BackupDataInputStream::BackupDataInputStream(QJniObject obj) : java::io::InputStream(obj) {}
	
	// Constructors
	
	// Methods
	jstring BackupDataInputStream::getKey()
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint BackupDataInputStream::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint BackupDataInputStream::read(jbyteArray arg0)
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jint BackupDataInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint BackupDataInputStream::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
} // namespace android::app::backup

