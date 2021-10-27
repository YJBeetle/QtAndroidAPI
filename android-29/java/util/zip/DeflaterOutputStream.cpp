#include "../../io/OutputStream.hpp"
#include "./Deflater.hpp"
#include "./DeflaterOutputStream.hpp"

namespace java::util::zip
{
	// Fields
	
	DeflaterOutputStream::DeflaterOutputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DeflaterOutputStream::DeflaterOutputStream(java::io::OutputStream &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	DeflaterOutputStream::DeflaterOutputStream(java::io::OutputStream &arg0, jboolean &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	DeflaterOutputStream::DeflaterOutputStream(java::io::OutputStream &arg0, java::util::zip::Deflater &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Deflater;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	DeflaterOutputStream::DeflaterOutputStream(java::io::OutputStream &arg0, java::util::zip::Deflater &arg1, jboolean &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Deflater;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	DeflaterOutputStream::DeflaterOutputStream(java::io::OutputStream &arg0, java::util::zip::Deflater &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Deflater;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	DeflaterOutputStream::DeflaterOutputStream(java::io::OutputStream &arg0, java::util::zip::Deflater &arg1, jint &arg2, jboolean &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Deflater;IZ)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void DeflaterOutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void DeflaterOutputStream::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V"
		);
	}
	void DeflaterOutputStream::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	void DeflaterOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void DeflaterOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
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

