#include "../../io/OutputStream.hpp"
#include "./CRC32.hpp"
#include "./GZIPOutputStream.hpp"

namespace java::util::zip
{
	// Fields
	
	GZIPOutputStream::GZIPOutputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GZIPOutputStream::GZIPOutputStream(java::io::OutputStream &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.GZIPOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	GZIPOutputStream::GZIPOutputStream(java::io::OutputStream &arg0, jboolean &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.GZIPOutputStream",
			"(Ljava/io/OutputStream;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	GZIPOutputStream::GZIPOutputStream(java::io::OutputStream &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.GZIPOutputStream",
			"(Ljava/io/OutputStream;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	GZIPOutputStream::GZIPOutputStream(java::io::OutputStream &arg0, jint &arg1, jboolean &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.GZIPOutputStream",
			"(Ljava/io/OutputStream;IZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
	void GZIPOutputStream::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V"
		);
	}
	void GZIPOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
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

