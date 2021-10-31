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
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.ZipOutputStream",
			"DEFLATED"
		);
	}
	jint ZipOutputStream::STORED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.ZipOutputStream",
			"STORED"
		);
	}
	
	ZipOutputStream::ZipOutputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ZipOutputStream::ZipOutputStream(java::io::OutputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	ZipOutputStream::ZipOutputStream(java::io::OutputStream arg0, java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipOutputStream",
			"(Ljava/io/OutputStream;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void ZipOutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void ZipOutputStream::closeEntry()
	{
		__thiz.callMethod<void>(
			"closeEntry",
			"()V"
		);
	}
	void ZipOutputStream::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V"
		);
	}
	void ZipOutputStream::putNextEntry(java::util::zip::ZipEntry arg0)
	{
		__thiz.callMethod<void>(
			"putNextEntry",
			"(Ljava/util/zip/ZipEntry;)V",
			arg0.__jniObject().object()
		);
	}
	void ZipOutputStream::setComment(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ZipOutputStream::setLevel(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLevel",
			"(I)V",
			arg0
		);
	}
	void ZipOutputStream::setMethod(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMethod",
			"(I)V",
			arg0
		);
	}
	void ZipOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::util::zip

