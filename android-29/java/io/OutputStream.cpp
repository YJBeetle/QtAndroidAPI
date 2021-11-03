#include "../../JByteArray.hpp"
#include "./OutputStream.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	OutputStream::OutputStream(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	OutputStream::OutputStream()
		: JObject(
			"java.io.OutputStream",
			"()V"
		) {}
	
	// Methods
	java::io::OutputStream OutputStream::nullOutputStream()
	{
		return callStaticObjectMethod(
			"java.io.OutputStream",
			"nullOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	void OutputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void OutputStream::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	void OutputStream::write(JByteArray arg0)
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void OutputStream::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void OutputStream::write(JByteArray arg0, jint arg1, jint arg2)
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

