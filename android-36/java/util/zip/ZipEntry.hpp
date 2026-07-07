#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../nio/file/attribute/FileTime.def.hpp"
#include "../../time/LocalDateTime.def.hpp"
#include "./ZipEntry.def.hpp"

namespace java::util::zip
{
	// Fields
	inline jint ZipEntry::DEFLATED()
	{
		return getStaticField<jint>(
			"java.util.zip.ZipEntry",
			"DEFLATED"
		);
	}
	inline jint ZipEntry::STORED()
	{
		return getStaticField<jint>(
			"java.util.zip.ZipEntry",
			"STORED"
		);
	}
	
	// Constructors
	inline ZipEntry::ZipEntry(JString arg0)
		: JObject(
			"java.util.zip.ZipEntry",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline ZipEntry::ZipEntry(java::util::zip::ZipEntry &arg0)
		: JObject(
			"java.util.zip.ZipEntry",
			"(Ljava/util/zip/ZipEntry;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JObject ZipEntry::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline JString ZipEntry::getComment() const
	{
		return callObjectMethod(
			"getComment",
			"()Ljava/lang/String;"
		);
	}
	inline jlong ZipEntry::getCompressedSize() const
	{
		return callMethod<jlong>(
			"getCompressedSize",
			"()J"
		);
	}
	inline jlong ZipEntry::getCrc() const
	{
		return callMethod<jlong>(
			"getCrc",
			"()J"
		);
	}
	inline java::nio::file::attribute::FileTime ZipEntry::getCreationTime() const
	{
		return callObjectMethod(
			"getCreationTime",
			"()Ljava/nio/file/attribute/FileTime;"
		);
	}
	inline JByteArray ZipEntry::getExtra() const
	{
		return callObjectMethod(
			"getExtra",
			"()[B"
		);
	}
	inline java::nio::file::attribute::FileTime ZipEntry::getLastAccessTime() const
	{
		return callObjectMethod(
			"getLastAccessTime",
			"()Ljava/nio/file/attribute/FileTime;"
		);
	}
	inline java::nio::file::attribute::FileTime ZipEntry::getLastModifiedTime() const
	{
		return callObjectMethod(
			"getLastModifiedTime",
			"()Ljava/nio/file/attribute/FileTime;"
		);
	}
	inline jint ZipEntry::getMethod() const
	{
		return callMethod<jint>(
			"getMethod",
			"()I"
		);
	}
	inline JString ZipEntry::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jlong ZipEntry::getSize() const
	{
		return callMethod<jlong>(
			"getSize",
			"()J"
		);
	}
	inline jlong ZipEntry::getTime() const
	{
		return callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	inline java::time::LocalDateTime ZipEntry::getTimeLocal() const
	{
		return callObjectMethod(
			"getTimeLocal",
			"()Ljava/time/LocalDateTime;"
		);
	}
	inline jint ZipEntry::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ZipEntry::isDirectory() const
	{
		return callMethod<jboolean>(
			"isDirectory",
			"()Z"
		);
	}
	inline void ZipEntry::setComment(JString arg0) const
	{
		callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void ZipEntry::setCompressedSize(jlong arg0) const
	{
		callMethod<void>(
			"setCompressedSize",
			"(J)V",
			arg0
		);
	}
	inline void ZipEntry::setCrc(jlong arg0) const
	{
		callMethod<void>(
			"setCrc",
			"(J)V",
			arg0
		);
	}
	inline java::util::zip::ZipEntry ZipEntry::setCreationTime(java::nio::file::attribute::FileTime arg0) const
	{
		return callObjectMethod(
			"setCreationTime",
			"(Ljava/nio/file/attribute/FileTime;)Ljava/util/zip/ZipEntry;",
			arg0.object()
		);
	}
	inline void ZipEntry::setExtra(JByteArray arg0) const
	{
		callMethod<void>(
			"setExtra",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline java::util::zip::ZipEntry ZipEntry::setLastAccessTime(java::nio::file::attribute::FileTime arg0) const
	{
		return callObjectMethod(
			"setLastAccessTime",
			"(Ljava/nio/file/attribute/FileTime;)Ljava/util/zip/ZipEntry;",
			arg0.object()
		);
	}
	inline java::util::zip::ZipEntry ZipEntry::setLastModifiedTime(java::nio::file::attribute::FileTime arg0) const
	{
		return callObjectMethod(
			"setLastModifiedTime",
			"(Ljava/nio/file/attribute/FileTime;)Ljava/util/zip/ZipEntry;",
			arg0.object()
		);
	}
	inline void ZipEntry::setMethod(jint arg0) const
	{
		callMethod<void>(
			"setMethod",
			"(I)V",
			arg0
		);
	}
	inline void ZipEntry::setSize(jlong arg0) const
	{
		callMethod<void>(
			"setSize",
			"(J)V",
			arg0
		);
	}
	inline void ZipEntry::setTime(jlong arg0) const
	{
		callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	inline void ZipEntry::setTimeLocal(java::time::LocalDateTime arg0) const
	{
		callMethod<void>(
			"setTimeLocal",
			"(Ljava/time/LocalDateTime;)V",
			arg0.object()
		);
	}
	inline JString ZipEntry::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::zip

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::zip;
#endif
