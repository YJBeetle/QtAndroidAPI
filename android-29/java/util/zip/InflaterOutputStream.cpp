#include "../../io/OutputStream.hpp"
#include "./Inflater.hpp"
#include "./InflaterOutputStream.hpp"

namespace java::util::zip
{
	// Fields
	
	InflaterOutputStream::InflaterOutputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InflaterOutputStream::InflaterOutputStream(java::io::OutputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.InflaterOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	InflaterOutputStream::InflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Inflater arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.InflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Inflater;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	InflaterOutputStream::InflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Inflater arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.InflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Inflater;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
	void InflaterOutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void InflaterOutputStream::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V"
		);
	}
	void InflaterOutputStream::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	void InflaterOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void InflaterOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
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

