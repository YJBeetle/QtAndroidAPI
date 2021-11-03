#include "../../../JByteArray.hpp"
#include "./BackupDataInput.hpp"
#include "../../../JString.hpp"
#include "./BackupDataInputStream.hpp"

namespace android::app::backup
{
	// Fields
	
	// QJniObject forward
	BackupDataInputStream::BackupDataInputStream(QJniObject obj) : java::io::InputStream(obj) {}
	
	// Constructors
	
	// Methods
	JString BackupDataInputStream::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	jint BackupDataInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint BackupDataInputStream::read(JByteArray arg0) const
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	jint BackupDataInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	jint BackupDataInputStream::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
} // namespace android::app::backup

