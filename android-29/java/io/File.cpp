#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./ObjectInputStream.hpp"
#include "./ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../net/URI.hpp"
#include "../net/URL.hpp"
#include "./File.hpp"

namespace java::io
{
	// Fields
	JString File::pathSeparator()
	{
		return getStaticObjectField(
			"java.io.File",
			"pathSeparator",
			"Ljava/lang/String;"
		);
	}
	jchar File::pathSeparatorChar()
	{
		return getStaticField<jchar>(
			"java.io.File",
			"pathSeparatorChar"
		);
	}
	JString File::separator()
	{
		return getStaticObjectField(
			"java.io.File",
			"separator",
			"Ljava/lang/String;"
		);
	}
	jchar File::separatorChar()
	{
		return getStaticField<jchar>(
			"java.io.File",
			"separatorChar"
		);
	}
	
	// Constructors
	File::File(JString arg0)
		: JObject(
			"java.io.File",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	File::File(java::net::URI arg0)
		: JObject(
			"java.io.File",
			"(Ljava/net/URI;)V",
			arg0.object()
		) {}
	File::File(java::io::File &arg0, JString arg1)
		: JObject(
			"java.io.File",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	File::File(JString arg0, JString arg1)
		: JObject(
			"java.io.File",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	java::io::File File::createTempFile(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.io.File",
			"createTempFile",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	java::io::File File::createTempFile(JString arg0, JString arg1, java::io::File arg2)
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
	JArray File::listRoots()
	{
		return callStaticObjectMethod(
			"java.io.File",
			"listRoots",
			"()[Ljava/io/File;"
		);
	}
	jboolean File::canExecute() const
	{
		return callMethod<jboolean>(
			"canExecute",
			"()Z"
		);
	}
	jboolean File::canRead() const
	{
		return callMethod<jboolean>(
			"canRead",
			"()Z"
		);
	}
	jboolean File::canWrite() const
	{
		return callMethod<jboolean>(
			"canWrite",
			"()Z"
		);
	}
	jint File::compareTo(java::io::File arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/io/File;)I",
			arg0.object()
		);
	}
	jint File::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jboolean File::createNewFile() const
	{
		return callMethod<jboolean>(
			"createNewFile",
			"()Z"
		);
	}
	jboolean File::delete_() const
	{
		return callMethod<jboolean>(
			"delete",
			"()Z"
		);
	}
	void File::deleteOnExit() const
	{
		callMethod<void>(
			"deleteOnExit",
			"()V"
		);
	}
	jboolean File::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean File::exists() const
	{
		return callMethod<jboolean>(
			"exists",
			"()Z"
		);
	}
	java::io::File File::getAbsoluteFile() const
	{
		return callObjectMethod(
			"getAbsoluteFile",
			"()Ljava/io/File;"
		);
	}
	JString File::getAbsolutePath() const
	{
		return callObjectMethod(
			"getAbsolutePath",
			"()Ljava/lang/String;"
		);
	}
	java::io::File File::getCanonicalFile() const
	{
		return callObjectMethod(
			"getCanonicalFile",
			"()Ljava/io/File;"
		);
	}
	JString File::getCanonicalPath() const
	{
		return callObjectMethod(
			"getCanonicalPath",
			"()Ljava/lang/String;"
		);
	}
	jlong File::getFreeSpace() const
	{
		return callMethod<jlong>(
			"getFreeSpace",
			"()J"
		);
	}
	JString File::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JString File::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/lang/String;"
		);
	}
	java::io::File File::getParentFile() const
	{
		return callObjectMethod(
			"getParentFile",
			"()Ljava/io/File;"
		);
	}
	JString File::getPath() const
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		);
	}
	jlong File::getTotalSpace() const
	{
		return callMethod<jlong>(
			"getTotalSpace",
			"()J"
		);
	}
	jlong File::getUsableSpace() const
	{
		return callMethod<jlong>(
			"getUsableSpace",
			"()J"
		);
	}
	jint File::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean File::isAbsolute() const
	{
		return callMethod<jboolean>(
			"isAbsolute",
			"()Z"
		);
	}
	jboolean File::isDirectory() const
	{
		return callMethod<jboolean>(
			"isDirectory",
			"()Z"
		);
	}
	jboolean File::isFile() const
	{
		return callMethod<jboolean>(
			"isFile",
			"()Z"
		);
	}
	jboolean File::isHidden() const
	{
		return callMethod<jboolean>(
			"isHidden",
			"()Z"
		);
	}
	jlong File::lastModified() const
	{
		return callMethod<jlong>(
			"lastModified",
			"()J"
		);
	}
	jlong File::length() const
	{
		return callMethod<jlong>(
			"length",
			"()J"
		);
	}
	JArray File::list() const
	{
		return callObjectMethod(
			"list",
			"()[Ljava/lang/String;"
		);
	}
	JArray File::list(JObject arg0) const
	{
		return callObjectMethod(
			"list",
			"(Ljava/io/FilenameFilter;)[Ljava/lang/String;",
			arg0.object()
		);
	}
	JArray File::listFiles() const
	{
		return callObjectMethod(
			"listFiles",
			"()[Ljava/io/File;"
		);
	}
	JArray File::listFiles(JObject arg0) const
	{
		return callObjectMethod(
			"listFiles",
			"(Ljava/io/FileFilter;)[Ljava/io/File;",
			arg0.object()
		);
	}
	jboolean File::mkdir() const
	{
		return callMethod<jboolean>(
			"mkdir",
			"()Z"
		);
	}
	jboolean File::mkdirs() const
	{
		return callMethod<jboolean>(
			"mkdirs",
			"()Z"
		);
	}
	jboolean File::renameTo(java::io::File arg0) const
	{
		return callMethod<jboolean>(
			"renameTo",
			"(Ljava/io/File;)Z",
			arg0.object()
		);
	}
	jboolean File::setExecutable(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setExecutable",
			"(Z)Z",
			arg0
		);
	}
	jboolean File::setExecutable(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setExecutable",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	jboolean File::setLastModified(jlong arg0) const
	{
		return callMethod<jboolean>(
			"setLastModified",
			"(J)Z",
			arg0
		);
	}
	jboolean File::setReadOnly() const
	{
		return callMethod<jboolean>(
			"setReadOnly",
			"()Z"
		);
	}
	jboolean File::setReadable(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setReadable",
			"(Z)Z",
			arg0
		);
	}
	jboolean File::setReadable(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setReadable",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	jboolean File::setWritable(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setWritable",
			"(Z)Z",
			arg0
		);
	}
	jboolean File::setWritable(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setWritable",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	JObject File::toPath() const
	{
		return callObjectMethod(
			"toPath",
			"()Ljava/nio/file/Path;"
		);
	}
	JString File::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	java::net::URI File::toURI() const
	{
		return callObjectMethod(
			"toURI",
			"()Ljava/net/URI;"
		);
	}
	java::net::URL File::toURL() const
	{
		return callObjectMethod(
			"toURL",
			"()Ljava/net/URL;"
		);
	}
} // namespace java::io

