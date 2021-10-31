#include "../../java/io/InputStream.hpp"
#include "../../java/io/OutputStream.hpp"
#include "./MemoryFile.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	MemoryFile::MemoryFile(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MemoryFile::MemoryFile(jstring arg0, jint arg1)
		: __JniBaseClass(
			"android.os.MemoryFile",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean MemoryFile::allowPurging(jboolean arg0)
	{
		return callMethod<jboolean>(
			"allowPurging",
			"(Z)Z",
			arg0
		);
	}
	void MemoryFile::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	java::io::InputStream MemoryFile::getInputStream()
	{
		return callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	java::io::OutputStream MemoryFile::getOutputStream()
	{
		return callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	jboolean MemoryFile::isPurgingAllowed()
	{
		return callMethod<jboolean>(
			"isPurgingAllowed",
			"()Z"
		);
	}
	jint MemoryFile::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jint MemoryFile::readBytes(jbyteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return callMethod<jint>(
			"readBytes",
			"([BIII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void MemoryFile::writeBytes(jbyteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"writeBytes",
			"([BIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::os

