#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	
	// Constructors
	ZipEntry::ZipEntry(JString arg0)
		: JObject(
			"java.util.zip.ZipEntry",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	ZipEntry::ZipEntry(java::util::zip::ZipEntry &arg0)
		: JObject(
			"java.util.zip.ZipEntry",
			"(Ljava/util/zip/ZipEntry;)V",
			arg0.object()
		) {}
	
	// Methods
	JObject ZipEntry::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	JString ZipEntry::getComment() const
	{
		return callObjectMethod(
			"getComment",
			"()Ljava/lang/String;"
		);
	}
	jlong ZipEntry::getCompressedSize() const
	{
		return callMethod<jlong>(
			"getCompressedSize",
			"()J"
		);
	}
	jlong ZipEntry::getCrc() const
	{
		return callMethod<jlong>(
			"getCrc",
			"()J"
		);
	}
	java::nio::file::attribute::FileTime ZipEntry::getCreationTime() const
	{
		return callObjectMethod(
			"getCreationTime",
			"()Ljava/nio/file/attribute/FileTime;"
		);
	}
	JByteArray ZipEntry::getExtra() const
	{
		return callObjectMethod(
			"getExtra",
			"()[B"
		);
	}
	java::nio::file::attribute::FileTime ZipEntry::getLastAccessTime() const
	{
		return callObjectMethod(
			"getLastAccessTime",
			"()Ljava/nio/file/attribute/FileTime;"
		);
	}
	java::nio::file::attribute::FileTime ZipEntry::getLastModifiedTime() const
	{
		return callObjectMethod(
			"getLastModifiedTime",
			"()Ljava/nio/file/attribute/FileTime;"
		);
	}
	jint ZipEntry::getMethod() const
	{
		return callMethod<jint>(
			"getMethod",
			"()I"
		);
	}
	JString ZipEntry::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jlong ZipEntry::getSize() const
	{
		return callMethod<jlong>(
			"getSize",
			"()J"
		);
	}
	jlong ZipEntry::getTime() const
	{
		return callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	java::time::LocalDateTime ZipEntry::getTimeLocal() const
	{
		return callObjectMethod(
			"getTimeLocal",
			"()Ljava/time/LocalDateTime;"
		);
	}
	jint ZipEntry::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ZipEntry::isDirectory() const
	{
		return callMethod<jboolean>(
			"isDirectory",
			"()Z"
		);
	}
	void ZipEntry::setComment(JString arg0) const
	{
		callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void ZipEntry::setCompressedSize(jlong arg0) const
	{
		callMethod<void>(
			"setCompressedSize",
			"(J)V",
			arg0
		);
	}
	void ZipEntry::setCrc(jlong arg0) const
	{
		callMethod<void>(
			"setCrc",
			"(J)V",
			arg0
		);
	}
	java::util::zip::ZipEntry ZipEntry::setCreationTime(java::nio::file::attribute::FileTime arg0) const
	{
		return callObjectMethod(
			"setCreationTime",
			"(Ljava/nio/file/attribute/FileTime;)Ljava/util/zip/ZipEntry;",
			arg0.object()
		);
	}
	void ZipEntry::setExtra(JByteArray arg0) const
	{
		callMethod<void>(
			"setExtra",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	java::util::zip::ZipEntry ZipEntry::setLastAccessTime(java::nio::file::attribute::FileTime arg0) const
	{
		return callObjectMethod(
			"setLastAccessTime",
			"(Ljava/nio/file/attribute/FileTime;)Ljava/util/zip/ZipEntry;",
			arg0.object()
		);
	}
	java::util::zip::ZipEntry ZipEntry::setLastModifiedTime(java::nio::file::attribute::FileTime arg0) const
	{
		return callObjectMethod(
			"setLastModifiedTime",
			"(Ljava/nio/file/attribute/FileTime;)Ljava/util/zip/ZipEntry;",
			arg0.object()
		);
	}
	void ZipEntry::setMethod(jint arg0) const
	{
		callMethod<void>(
			"setMethod",
			"(I)V",
			arg0
		);
	}
	void ZipEntry::setSize(jlong arg0) const
	{
		callMethod<void>(
			"setSize",
			"(J)V",
			arg0
		);
	}
	void ZipEntry::setTime(jlong arg0) const
	{
		callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	void ZipEntry::setTimeLocal(java::time::LocalDateTime arg0) const
	{
		callMethod<void>(
			"setTimeLocal",
			"(Ljava/time/LocalDateTime;)V",
			arg0.object()
		);
	}
	JString ZipEntry::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::zip

