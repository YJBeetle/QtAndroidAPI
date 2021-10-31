#include "./OutputStream.hpp"
#include "./InputStream.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	InputStream::InputStream(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	InputStream::InputStream()
		: __JniBaseClass(
			"java.io.InputStream",
			"()V"
		) {}
	
	// Methods
	java::io::InputStream InputStream::nullInputStream()
	{
		return callStaticObjectMethod(
			"java.io.InputStream",
			"nullInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	jint InputStream::available()
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void InputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void InputStream::mark(jint arg0)
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean InputStream::markSupported()
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint InputStream::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint InputStream::read(jbyteArray arg0)
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jint InputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jbyteArray InputStream::readAllBytes()
	{
		return callObjectMethod(
			"readAllBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray InputStream::readNBytes(jint arg0)
	{
		return callObjectMethod(
			"readNBytes",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	jint InputStream::readNBytes(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"readNBytes",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void InputStream::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong InputStream::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	void InputStream::skipNBytes(jlong arg0)
	{
		callMethod<void>(
			"skipNBytes",
			"(J)V",
			arg0
		);
	}
	jlong InputStream::transferTo(java::io::OutputStream arg0)
	{
		return callMethod<jlong>(
			"transferTo",
			"(Ljava/io/OutputStream;)J",
			arg0.object()
		);
	}
} // namespace java::io

