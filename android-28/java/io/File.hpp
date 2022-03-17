#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./ObjectInputStream.def.hpp"
#include "./ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../net/URI.def.hpp"
#include "../net/URL.def.hpp"
#include "./File.def.hpp"

namespace java::io
{
	// Fields
	inline JString File::pathSeparator()
	{
		return getStaticObjectField(
			"java.io.File",
			"pathSeparator",
			"Ljava/lang/String;"
		);
	}
	inline jchar File::pathSeparatorChar()
	{
		return getStaticField<jchar>(
			"java.io.File",
			"pathSeparatorChar"
		);
	}
	inline JString File::separator()
	{
		return getStaticObjectField(
			"java.io.File",
			"separator",
			"Ljava/lang/String;"
		);
	}
	inline jchar File::separatorChar()
	{
		return getStaticField<jchar>(
			"java.io.File",
			"separatorChar"
		);
	}
	
	// Constructors
	inline File::File(JString arg0)
		: JObject(
			"java.io.File",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline File::File(java::net::URI arg0)
		: JObject(
			"java.io.File",
			"(Ljava/net/URI;)V",
			arg0.object()
		) {}
	inline File::File(java::io::File &arg0, JString arg1)
		: JObject(
			"java.io.File",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline File::File(JString arg0, JString arg1)
		: JObject(
			"java.io.File",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline java::io::File File::createTempFile(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.io.File",
			"createTempFile",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline java::io::File File::createTempFile(JString arg0, JString arg1, java::io::File arg2)
	{
		return callStaticObjectMethod(
			"java.io.File",
			"createTempFile",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline JArray File::listRoots()
	{
		return callStaticObjectMethod(
			"java.io.File",
			"listRoots",
			"()[Ljava/io/File;"
		);
	}
	inline jboolean File::canExecute() const
	{
		return callMethod<jboolean>(
			"canExecute",
			"()Z"
		);
	}
	inline jboolean File::canRead() const
	{
		return callMethod<jboolean>(
			"canRead",
			"()Z"
		);
	}
	inline jboolean File::canWrite() const
	{
		return callMethod<jboolean>(
			"canWrite",
			"()Z"
		);
	}
	inline jint File::compareTo(java::io::File arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/io/File;)I",
			arg0.object()
		);
	}
	inline jint File::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean File::createNewFile() const
	{
		return callMethod<jboolean>(
			"createNewFile",
			"()Z"
		);
	}
	inline jboolean File::delete_() const
	{
		return callMethod<jboolean>(
			"delete",
			"()Z"
		);
	}
	inline void File::deleteOnExit() const
	{
		callMethod<void>(
			"deleteOnExit",
			"()V"
		);
	}
	inline jboolean File::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean File::exists() const
	{
		return callMethod<jboolean>(
			"exists",
			"()Z"
		);
	}
	inline java::io::File File::getAbsoluteFile() const
	{
		return callObjectMethod(
			"getAbsoluteFile",
			"()Ljava/io/File;"
		);
	}
	inline JString File::getAbsolutePath() const
	{
		return callObjectMethod(
			"getAbsolutePath",
			"()Ljava/lang/String;"
		);
	}
	inline java::io::File File::getCanonicalFile() const
	{
		return callObjectMethod(
			"getCanonicalFile",
			"()Ljava/io/File;"
		);
	}
	inline JString File::getCanonicalPath() const
	{
		return callObjectMethod(
			"getCanonicalPath",
			"()Ljava/lang/String;"
		);
	}
	inline jlong File::getFreeSpace() const
	{
		return callMethod<jlong>(
			"getFreeSpace",
			"()J"
		);
	}
	inline JString File::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JString File::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/lang/String;"
		);
	}
	inline java::io::File File::getParentFile() const
	{
		return callObjectMethod(
			"getParentFile",
			"()Ljava/io/File;"
		);
	}
	inline JString File::getPath() const
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		);
	}
	inline jlong File::getTotalSpace() const
	{
		return callMethod<jlong>(
			"getTotalSpace",
			"()J"
		);
	}
	inline jlong File::getUsableSpace() const
	{
		return callMethod<jlong>(
			"getUsableSpace",
			"()J"
		);
	}
	inline jint File::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean File::isAbsolute() const
	{
		return callMethod<jboolean>(
			"isAbsolute",
			"()Z"
		);
	}
	inline jboolean File::isDirectory() const
	{
		return callMethod<jboolean>(
			"isDirectory",
			"()Z"
		);
	}
	inline jboolean File::isFile() const
	{
		return callMethod<jboolean>(
			"isFile",
			"()Z"
		);
	}
	inline jboolean File::isHidden() const
	{
		return callMethod<jboolean>(
			"isHidden",
			"()Z"
		);
	}
	inline jlong File::lastModified() const
	{
		return callMethod<jlong>(
			"lastModified",
			"()J"
		);
	}
	inline jlong File::length() const
	{
		return callMethod<jlong>(
			"length",
			"()J"
		);
	}
	inline JArray File::list() const
	{
		return callObjectMethod(
			"list",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray File::list(JObject arg0) const
	{
		return callObjectMethod(
			"list",
			"(Ljava/io/FilenameFilter;)[Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JArray File::listFiles() const
	{
		return callObjectMethod(
			"listFiles",
			"()[Ljava/io/File;"
		);
	}
	inline JArray File::listFiles(JObject arg0) const
	{
		return callObjectMethod(
			"listFiles",
			"(Ljava/io/FileFilter;)[Ljava/io/File;",
			arg0.object()
		);
	}
	inline jboolean File::mkdir() const
	{
		return callMethod<jboolean>(
			"mkdir",
			"()Z"
		);
	}
	inline jboolean File::mkdirs() const
	{
		return callMethod<jboolean>(
			"mkdirs",
			"()Z"
		);
	}
	inline jboolean File::renameTo(java::io::File arg0) const
	{
		return callMethod<jboolean>(
			"renameTo",
			"(Ljava/io/File;)Z",
			arg0.object()
		);
	}
	inline jboolean File::setExecutable(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setExecutable",
			"(Z)Z",
			arg0
		);
	}
	inline jboolean File::setExecutable(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setExecutable",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	inline jboolean File::setLastModified(jlong arg0) const
	{
		return callMethod<jboolean>(
			"setLastModified",
			"(J)Z",
			arg0
		);
	}
	inline jboolean File::setReadOnly() const
	{
		return callMethod<jboolean>(
			"setReadOnly",
			"()Z"
		);
	}
	inline jboolean File::setReadable(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setReadable",
			"(Z)Z",
			arg0
		);
	}
	inline jboolean File::setReadable(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setReadable",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	inline jboolean File::setWritable(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setWritable",
			"(Z)Z",
			arg0
		);
	}
	inline jboolean File::setWritable(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setWritable",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	inline JObject File::toPath() const
	{
		return callObjectMethod(
			"toPath",
			"()Ljava/nio/file/Path;"
		);
	}
	inline JString File::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline java::net::URI File::toURI() const
	{
		return callObjectMethod(
			"toURI",
			"()Ljava/net/URI;"
		);
	}
	inline java::net::URL File::toURL() const
	{
		return callObjectMethod(
			"toURL",
			"()Ljava/net/URL;"
		);
	}
} // namespace java::io

// Base class headers

