#include "../../io/InputStream.hpp"
#include "./CheckedInputStream.hpp"

namespace java::util::zip
{
	// Fields
	
	CheckedInputStream::CheckedInputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CheckedInputStream::CheckedInputStream(java::io::InputStream arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.CheckedInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Checksum;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject CheckedInputStream::getChecksum()
	{
		return __thiz.callObjectMethod(
			"getChecksum",
			"()Ljava/util/zip/Checksum;"
		);
	}
	jint CheckedInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint CheckedInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jlong CheckedInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::util::zip

