#include "../../nio/file/attribute/FileTime.hpp"
#include "../../time/LocalDateTime.hpp"
#include "./ZipEntry.hpp"

namespace java::util::zip
{
	// Fields
	jint ZipEntry::DEFLATED()
	{
		return getStaticField<jint>(
			"java.util.zip.ZipEntry",
			"DEFLATED"
		);
	}
	jint ZipEntry::STORED()
	{
		return getStaticField<jint>(
			"java.util.zip.ZipEntry",
			"STORED"
		);
	}
	
	// QJniObject forward
	ZipEntry::ZipEntry(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ZipEntry::ZipEntry(jstring arg0)
		: JObject(
			"java.util.zip.ZipEntry",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	ZipEntry::ZipEntry(java::util::zip::ZipEntry &arg0)
		: JObject(
			"java.util.zip.ZipEntry",
			"(Ljava/util/zip/ZipEntry;)V",
			arg0.object()
		) {}
	
	// Methods
	jobject ZipEntry::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring ZipEntry::getComment()
	{
		return callObjectMethod(
			"getComment",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong ZipEntry::getCompressedSize()
	{
		return callMethod<jlong>(
			"getCompressedSize",
			"()J"
		);
	}
	jlong ZipEntry::getCrc()
	{
		return callMethod<jlong>(
			"getCrc",
			"()J"
		);
	}
	java::nio::file::attribute::FileTime ZipEntry::getCreationTime()
	{
		return callObjectMethod(
			"getCreationTime",
			"()Ljava/nio/file/attribute/FileTime;"
		);
	}
	jbyteArray ZipEntry::getExtra()
	{
		return callObjectMethod(
			"getExtra",
			"()[B"
		).object<jbyteArray>();
	}
	java::nio::file::attribute::FileTime ZipEntry::getLastAccessTime()
	{
		return callObjectMethod(
			"getLastAccessTime",
			"()Ljava/nio/file/attribute/FileTime;"
		);
	}
	java::nio::file::attribute::FileTime ZipEntry::getLastModifiedTime()
	{
		return callObjectMethod(
			"getLastModifiedTime",
			"()Ljava/nio/file/attribute/FileTime;"
		);
	}
	jint ZipEntry::getMethod()
	{
		return callMethod<jint>(
			"getMethod",
			"()I"
		);
	}
	jstring ZipEntry::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong ZipEntry::getSize()
	{
		return callMethod<jlong>(
			"getSize",
			"()J"
		);
	}
	jlong ZipEntry::getTime()
	{
		return callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	java::time::LocalDateTime ZipEntry::getTimeLocal()
	{
		return callObjectMethod(
			"getTimeLocal",
			"()Ljava/time/LocalDateTime;"
		);
	}
	jint ZipEntry::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ZipEntry::isDirectory()
	{
		return callMethod<jboolean>(
			"isDirectory",
			"()Z"
		);
	}
	void ZipEntry::setComment(jstring arg0)
	{
		callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ZipEntry::setCompressedSize(jlong arg0)
	{
		callMethod<void>(
			"setCompressedSize",
			"(J)V",
			arg0
		);
	}
	void ZipEntry::setCrc(jlong arg0)
	{
		callMethod<void>(
			"setCrc",
			"(J)V",
			arg0
		);
	}
	java::util::zip::ZipEntry ZipEntry::setCreationTime(java::nio::file::attribute::FileTime arg0)
	{
		return callObjectMethod(
			"setCreationTime",
			"(Ljava/nio/file/attribute/FileTime;)Ljava/util/zip/ZipEntry;",
			arg0.object()
		);
	}
	void ZipEntry::setExtra(jbyteArray arg0)
	{
		callMethod<void>(
			"setExtra",
			"([B)V",
			arg0
		);
	}
	java::util::zip::ZipEntry ZipEntry::setLastAccessTime(java::nio::file::attribute::FileTime arg0)
	{
		return callObjectMethod(
			"setLastAccessTime",
			"(Ljava/nio/file/attribute/FileTime;)Ljava/util/zip/ZipEntry;",
			arg0.object()
		);
	}
	java::util::zip::ZipEntry ZipEntry::setLastModifiedTime(java::nio::file::attribute::FileTime arg0)
	{
		return callObjectMethod(
			"setLastModifiedTime",
			"(Ljava/nio/file/attribute/FileTime;)Ljava/util/zip/ZipEntry;",
			arg0.object()
		);
	}
	void ZipEntry::setMethod(jint arg0)
	{
		callMethod<void>(
			"setMethod",
			"(I)V",
			arg0
		);
	}
	void ZipEntry::setSize(jlong arg0)
	{
		callMethod<void>(
			"setSize",
			"(J)V",
			arg0
		);
	}
	void ZipEntry::setTime(jlong arg0)
	{
		callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	void ZipEntry::setTimeLocal(java::time::LocalDateTime arg0)
	{
		callMethod<void>(
			"setTimeLocal",
			"(Ljava/time/LocalDateTime;)V",
			arg0.object()
		);
	}
	jstring ZipEntry::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::zip

