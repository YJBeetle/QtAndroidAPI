#include "../../../JByteArray.hpp"
#include "../../io/InputStream.hpp"
#include "./Inflater.hpp"
#include "./InflaterInputStream.hpp"

namespace java::util::zip
{
	// Fields
	
	// QJniObject forward
	InflaterInputStream::InflaterInputStream(QJniObject obj) : java::io::FilterInputStream(obj) {}
	
	// Constructors
	InflaterInputStream::InflaterInputStream(java::io::InputStream arg0)
		: java::io::FilterInputStream(
			"java.util.zip.InflaterInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	InflaterInputStream::InflaterInputStream(java::io::InputStream arg0, java::util::zip::Inflater arg1)
		: java::io::FilterInputStream(
			"java.util.zip.InflaterInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Inflater;)V",
			arg0.object(),
			arg1.object()
		) {}
	InflaterInputStream::InflaterInputStream(java::io::InputStream arg0, java::util::zip::Inflater arg1, jint arg2)
		: java::io::FilterInputStream(
			"java.util.zip.InflaterInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Inflater;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	jint InflaterInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void InflaterInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void InflaterInputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean InflaterInputStream::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint InflaterInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint InflaterInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void InflaterInputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong InflaterInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::util::zip

