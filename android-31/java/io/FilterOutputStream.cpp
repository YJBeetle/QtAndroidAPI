#include "../../JByteArray.hpp"
#include "./OutputStream.hpp"
#include "../../JObject.hpp"
#include "./FilterOutputStream.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	FilterOutputStream::FilterOutputStream(java::io::OutputStream arg0)
		: java::io::OutputStream(
			"java.io.FilterOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	void FilterOutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void FilterOutputStream::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	void FilterOutputStream::write(JByteArray arg0) const
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void FilterOutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void FilterOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
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

