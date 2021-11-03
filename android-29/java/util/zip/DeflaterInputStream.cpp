#include "../../../JByteArray.hpp"
#include "../../io/InputStream.hpp"
#include "./Deflater.hpp"
#include "./DeflaterInputStream.hpp"

namespace java::util::zip
{
	// Fields
	
	// QAndroidJniObject forward
	DeflaterInputStream::DeflaterInputStream(QAndroidJniObject obj) : java::io::FilterInputStream(obj) {}
	
	// Constructors
	DeflaterInputStream::DeflaterInputStream(java::io::InputStream arg0)
		: java::io::FilterInputStream(
			"java.util.zip.DeflaterInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	DeflaterInputStream::DeflaterInputStream(java::io::InputStream arg0, java::util::zip::Deflater arg1)
		: java::io::FilterInputStream(
			"java.util.zip.DeflaterInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Deflater;)V",
			arg0.object(),
			arg1.object()
		) {}
	DeflaterInputStream::DeflaterInputStream(java::io::InputStream arg0, java::util::zip::Deflater arg1, jint arg2)
		: java::io::FilterInputStream(
			"java.util.zip.DeflaterInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Deflater;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	jint DeflaterInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void DeflaterInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void DeflaterInputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean DeflaterInputStream::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint DeflaterInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint DeflaterInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void DeflaterInputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong DeflaterInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::util::zip

