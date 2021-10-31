#include "../../io/InputStream.hpp"
#include "./CheckedInputStream.hpp"

namespace java::util::zip
{
	// Fields
	
	// QAndroidJniObject forward
	CheckedInputStream::CheckedInputStream(QAndroidJniObject obj) : java::io::FilterInputStream(obj) {}
	
	// Constructors
	CheckedInputStream::CheckedInputStream(java::io::InputStream arg0, __JniBaseClass arg1)
		: java::io::FilterInputStream(
			"java.util.zip.CheckedInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Checksum;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	QAndroidJniObject CheckedInputStream::getChecksum()
	{
		return callObjectMethod(
			"getChecksum",
			"()Ljava/util/zip/Checksum;"
		);
	}
	jint CheckedInputStream::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint CheckedInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jlong CheckedInputStream::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::util::zip

