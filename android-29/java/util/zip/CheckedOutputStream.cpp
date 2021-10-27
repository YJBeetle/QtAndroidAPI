#include "../../io/OutputStream.hpp"
#include "./CheckedOutputStream.hpp"

namespace java::util::zip
{
	// Fields
	
	CheckedOutputStream::CheckedOutputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CheckedOutputStream::CheckedOutputStream(java::io::OutputStream &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.CheckedOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Checksum;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject CheckedOutputStream::getChecksum()
	{
		return __thiz.callObjectMethod(
			"getChecksum",
			"()Ljava/util/zip/Checksum;"
		);
	}
	void CheckedOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void CheckedOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::util::zip

