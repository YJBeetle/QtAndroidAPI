#include "./BackupDataInput.hpp"
#include "./BackupDataInputStream.hpp"

namespace android::app::backup
{
	// Fields
	
	BackupDataInputStream::BackupDataInputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring BackupDataInputStream::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint BackupDataInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint BackupDataInputStream::read(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jint BackupDataInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint BackupDataInputStream::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
} // namespace android::app::backup

