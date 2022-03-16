#include "../../../JByteArray.hpp"
#include "../../io/OutputStream.hpp"
#include "../../../JString.hpp"
#include "../../nio/charset/Charset.hpp"
#include "../HashSet.hpp"
#include "../Vector.hpp"
#include "./CRC32.hpp"
#include "./ZipEntry.hpp"
#include "./ZipOutputStream.hpp"

namespace java::util::zip
{
	// Fields
	jint ZipOutputStream::DEFLATED()
	{
		return getStaticField<jint>(
			"java.util.zip.ZipOutputStream",
			"DEFLATED"
		);
	}
	jint ZipOutputStream::STORED()
	{
		return getStaticField<jint>(
			"java.util.zip.ZipOutputStream",
			"STORED"
		);
	}
	
	// Constructors
	ZipOutputStream::ZipOutputStream(java::io::OutputStream arg0)
		: java::util::zip::DeflaterOutputStream(
			"java.util.zip.ZipOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	ZipOutputStream::ZipOutputStream(java::io::OutputStream arg0, java::nio::charset::Charset arg1)
		: java::util::zip::DeflaterOutputStream(
			"java.util.zip.ZipOutputStream",
			"(Ljava/io/OutputStream;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void ZipOutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void ZipOutputStream::closeEntry() const
	{
		callMethod<void>(
			"closeEntry",
			"()V"
		);
	}
	void ZipOutputStream::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	void ZipOutputStream::putNextEntry(java::util::zip::ZipEntry arg0) const
	{
		callMethod<void>(
			"putNextEntry",
			"(Ljava/util/zip/ZipEntry;)V",
			arg0.object()
		);
	}
	void ZipOutputStream::setComment(JString arg0) const
	{
		callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void ZipOutputStream::setLevel(jint arg0) const
	{
		callMethod<void>(
			"setLevel",
			"(I)V",
			arg0
		);
	}
	void ZipOutputStream::setMethod(jint arg0) const
	{
		callMethod<void>(
			"setMethod",
			"(I)V",
			arg0
		);
	}
	void ZipOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
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

