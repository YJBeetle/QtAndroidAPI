#include "../../java/io/InputStream.hpp"
#include "../../java/io/OutputStream.hpp"
#include "./MemoryFile.hpp"

namespace android::os
{
	// Fields
	
	MemoryFile::MemoryFile(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MemoryFile::MemoryFile(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.MemoryFile",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean MemoryFile::allowPurging(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"allowPurging",
			"(Z)Z",
			arg0
		);
	}
	void MemoryFile::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject MemoryFile::getInputStream()
	{
		return __thiz.callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	QAndroidJniObject MemoryFile::getOutputStream()
	{
		return __thiz.callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	jboolean MemoryFile::isPurgingAllowed()
	{
		return __thiz.callMethod<jboolean>(
			"isPurgingAllowed",
			"()Z"
		);
	}
	jint MemoryFile::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	jint MemoryFile::readBytes(jbyteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jint>(
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
		__thiz.callMethod<void>(
			"writeBytes",
			"([BIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::os

