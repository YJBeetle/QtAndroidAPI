#include "../../JByteArray.hpp"
#include "./OutputStream.hpp"
#include "../../JObject.hpp"
#include "./FilterOutputStream.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	FilterOutputStream::FilterOutputStream(QAndroidJniObject obj) : java::io::OutputStream(obj) {}
	
	// Constructors
	FilterOutputStream::FilterOutputStream(java::io::OutputStream arg0)
		: java::io::OutputStream(
			"java.io.FilterOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	void FilterOutputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void FilterOutputStream::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	void FilterOutputStream::write(JByteArray arg0)
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void FilterOutputStream::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void FilterOutputStream::write(JByteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::io

