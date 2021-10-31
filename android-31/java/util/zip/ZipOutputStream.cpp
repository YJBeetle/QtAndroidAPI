#include "../../io/OutputStream.hpp"
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
	
	// QAndroidJniObject forward
	ZipOutputStream::ZipOutputStream(QAndroidJniObject obj) : java::util::zip::DeflaterOutputStream(obj) {}
	
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
	void ZipOutputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void ZipOutputStream::closeEntry()
	{
		callMethod<void>(
			"closeEntry",
			"()V"
		);
	}
	void ZipOutputStream::finish()
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	void ZipOutputStream::putNextEntry(java::util::zip::ZipEntry arg0)
	{
		callMethod<void>(
			"putNextEntry",
			"(Ljava/util/zip/ZipEntry;)V",
			arg0.object()
		);
	}
	void ZipOutputStream::setComment(jstring arg0)
	{
		callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ZipOutputStream::setLevel(jint arg0)
	{
		callMethod<void>(
			"setLevel",
			"(I)V",
			arg0
		);
	}
	void ZipOutputStream::setMethod(jint arg0)
	{
		callMethod<void>(
			"setMethod",
			"(I)V",
			arg0
		);
	}
	void ZipOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
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

