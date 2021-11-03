#include "../../io/OutputStream.hpp"
#include "./CheckedOutputStream.hpp"

namespace java::util::zip
{
	// Fields
	
	// QJniObject forward
	CheckedOutputStream::CheckedOutputStream(QJniObject obj) : java::io::FilterOutputStream(obj) {}
	
	// Constructors
	CheckedOutputStream::CheckedOutputStream(java::io::OutputStream arg0, JObject arg1)
		: java::io::FilterOutputStream(
			"java.util.zip.CheckedOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Checksum;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	JObject CheckedOutputStream::getChecksum()
	{
		return callObjectMethod(
			"getChecksum",
			"()Ljava/util/zip/Checksum;"
		);
	}
	void CheckedOutputStream::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void CheckedOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::util::zip

