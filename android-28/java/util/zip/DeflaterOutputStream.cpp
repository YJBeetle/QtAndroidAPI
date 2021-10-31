#include "../../io/OutputStream.hpp"
#include "./Deflater.hpp"
#include "./DeflaterOutputStream.hpp"

namespace java::util::zip
{
	// Fields
	
	// QAndroidJniObject forward
	DeflaterOutputStream::DeflaterOutputStream(QAndroidJniObject obj) : java::io::FilterOutputStream(obj) {}
	
	// Constructors
	DeflaterOutputStream::DeflaterOutputStream(java::io::OutputStream arg0)
		: java::io::FilterOutputStream(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	DeflaterOutputStream::DeflaterOutputStream(java::io::OutputStream arg0, jboolean arg1)
		: java::io::FilterOutputStream(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;Z)V",
			arg0.object(),
			arg1
		) {}
	DeflaterOutputStream::DeflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Deflater arg1)
		: java::io::FilterOutputStream(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Deflater;)V",
			arg0.object(),
			arg1.object()
		) {}
	DeflaterOutputStream::DeflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Deflater arg1, jboolean arg2)
		: java::io::FilterOutputStream(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Deflater;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	DeflaterOutputStream::DeflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Deflater arg1, jint arg2)
		: java::io::FilterOutputStream(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Deflater;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	DeflaterOutputStream::DeflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Deflater arg1, jint arg2, jboolean arg3)
		: java::io::FilterOutputStream(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Deflater;IZ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void DeflaterOutputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void DeflaterOutputStream::finish()
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	void DeflaterOutputStream::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	void DeflaterOutputStream::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void DeflaterOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::util::zip

