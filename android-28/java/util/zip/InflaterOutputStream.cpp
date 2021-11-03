#include "../../../JByteArray.hpp"
#include "../../io/OutputStream.hpp"
#include "./Inflater.hpp"
#include "./InflaterOutputStream.hpp"

namespace java::util::zip
{
	// Fields
	
	// QJniObject forward
	InflaterOutputStream::InflaterOutputStream(QJniObject obj) : java::io::FilterOutputStream(obj) {}
	
	// Constructors
	InflaterOutputStream::InflaterOutputStream(java::io::OutputStream arg0)
		: java::io::FilterOutputStream(
			"java.util.zip.InflaterOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	InflaterOutputStream::InflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Inflater arg1)
		: java::io::FilterOutputStream(
			"java.util.zip.InflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Inflater;)V",
			arg0.object(),
			arg1.object()
		) {}
	InflaterOutputStream::InflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Inflater arg1, jint arg2)
		: java::io::FilterOutputStream(
			"java.util.zip.InflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Inflater;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	void InflaterOutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void InflaterOutputStream::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	void InflaterOutputStream::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	void InflaterOutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void InflaterOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::util::zip

