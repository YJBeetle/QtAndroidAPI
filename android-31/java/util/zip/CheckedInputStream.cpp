#include "../../../JByteArray.hpp"
#include "../../io/InputStream.hpp"
#include "./CheckedInputStream.hpp"

namespace java::util::zip
{
	// Fields
	
	// QAndroidJniObject forward
	CheckedInputStream::CheckedInputStream(QAndroidJniObject obj) : java::io::FilterInputStream(obj) {}
	
	// Constructors
	CheckedInputStream::CheckedInputStream(java::io::InputStream arg0, JObject arg1)
		: java::io::FilterInputStream(
			"java.util.zip.CheckedInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Checksum;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	JObject CheckedInputStream::getChecksum() const
	{
		return callObjectMethod(
			"getChecksum",
			"()Ljava/util/zip/Checksum;"
		);
	}
	jint CheckedInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint CheckedInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	jlong CheckedInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::util::zip

