#include "./OutputStream.hpp"
#include "./FilterOutputStream.hpp"

namespace java::io
{
	// Fields
	
	FilterOutputStream::FilterOutputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FilterOutputStream::FilterOutputStream(java::io::OutputStream &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FilterOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void FilterOutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void FilterOutputStream::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	void FilterOutputStream::write(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"([B)V",
			arg0
		);
	}
	void FilterOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void FilterOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io

