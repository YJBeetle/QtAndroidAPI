#include "./ObjectInputStream.hpp"
#include "./ObjectOutputStream.hpp"
#include "../net/URI.hpp"
#include "../net/URL.hpp"
#include "./File.hpp"

namespace java::io
{
	// Fields
	jstring File::pathSeparator()
	{
		return getStaticObjectField(
			"java.io.File",
			"pathSeparator",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jchar File::pathSeparatorChar()
	{
		return getStaticField<jchar>(
			"java.io.File",
			"pathSeparatorChar"
		);
	}
	jstring File::separator()
	{
		return getStaticObjectField(
			"java.io.File",
			"separator",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jchar File::separatorChar()
	{
		return getStaticField<jchar>(
			"java.io.File",
			"separatorChar"
		);
	}
	
	// QAndroidJniObject forward
	File::File(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	File::File(jstring arg0)
		: JObject(
			"java.io.File",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	File::File(java::net::URI arg0)
		: JObject(
			"java.io.File",
			"(Ljava/net/URI;)V",
			arg0.object()
		) {}
	File::File(java::io::File &arg0, jstring arg1)
		: JObject(
			"java.io.File",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	File::File(jstring arg0, jstring arg1)
		: JObject(
			"java.io.File",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	java::io::File File::createTempFile(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"java.io.File",
			"createTempFile",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;",
			arg0,
			arg1
		);
	}
	java::io::File File::createTempFile(jstring arg0, jstring arg1, java::io::File arg2)
	{
		return callStaticObjectMethod(
			"java.io.File",
			"createTempFile",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jarray File::listRoots()
	{
		return callStaticObjectMethod(
			"java.io.File",
			"listRoots",
			"()[Ljava/io/File;"
		).object<jarray>();
	}
	jboolean File::canExecute()
	{
		return callMethod<jboolean>(
			"canExecute",
			"()Z"
		);
	}
	jboolean File::canRead()
	{
		return callMethod<jboolean>(
			"canRead",
			"()Z"
		);
	}
	jboolean File::canWrite()
	{
		return callMethod<jboolean>(
			"canWrite",
			"()Z"
		);
	}
	jint File::compareTo(java::io::File arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/io/File;)I",
			arg0.object()
		);
	}
	jint File::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jboolean File::createNewFile()
	{
		return callMethod<jboolean>(
			"createNewFile",
			"()Z"
		);
	}
	jboolean File::_delete()
	{
		return callMethod<jboolean>(
			"delete",
			"()Z"
		);
	}
	void File::deleteOnExit()
	{
		callMethod<void>(
			"deleteOnExit",
			"()V"
		);
	}
	jboolean File::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean File::exists()
	{
		return callMethod<jboolean>(
			"exists",
			"()Z"
		);
	}
	java::io::File File::getAbsoluteFile()
	{
		return callObjectMethod(
			"getAbsoluteFile",
			"()Ljava/io/File;"
		);
	}
	jstring File::getAbsolutePath()
	{
		return callObjectMethod(
			"getAbsolutePath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::io::File File::getCanonicalFile()
	{
		return callObjectMethod(
			"getCanonicalFile",
			"()Ljava/io/File;"
		);
	}
	jstring File::getCanonicalPath()
	{
		return callObjectMethod(
			"getCanonicalPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong File::getFreeSpace()
	{
		return callMethod<jlong>(
			"getFreeSpace",
			"()J"
		);
	}
	jstring File::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring File::getParent()
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::io::File File::getParentFile()
	{
		return callObjectMethod(
			"getParentFile",
			"()Ljava/io/File;"
		);
	}
	jstring File::getPath()
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong File::getTotalSpace()
	{
		return callMethod<jlong>(
			"getTotalSpace",
			"()J"
		);
	}
	jlong File::getUsableSpace()
	{
		return callMethod<jlong>(
			"getUsableSpace",
			"()J"
		);
	}
	jint File::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean File::isAbsolute()
	{
		return callMethod<jboolean>(
			"isAbsolute",
			"()Z"
		);
	}
	jboolean File::isDirectory()
	{
		return callMethod<jboolean>(
			"isDirectory",
			"()Z"
		);
	}
	jboolean File::isFile()
	{
		return callMethod<jboolean>(
			"isFile",
			"()Z"
		);
	}
	jboolean File::isHidden()
	{
		return callMethod<jboolean>(
			"isHidden",
			"()Z"
		);
	}
	jlong File::lastModified()
	{
		return callMethod<jlong>(
			"lastModified",
			"()J"
		);
	}
	jlong File::length()
	{
		return callMethod<jlong>(
			"length",
			"()J"
		);
	}
	jarray File::list()
	{
		return callObjectMethod(
			"list",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray File::list(JObject arg0)
	{
		return callObjectMethod(
			"list",
			"(Ljava/io/FilenameFilter;)[Ljava/lang/String;",
			arg0.object()
		).object<jarray>();
	}
	jarray File::listFiles()
	{
		return callObjectMethod(
			"listFiles",
			"()[Ljava/io/File;"
		).object<jarray>();
	}
	jarray File::listFiles(JObject arg0)
	{
		return callObjectMethod(
			"listFiles",
			"(Ljava/io/FileFilter;)[Ljava/io/File;",
			arg0.object()
		).object<jarray>();
	}
	jboolean File::mkdir()
	{
		return callMethod<jboolean>(
			"mkdir",
			"()Z"
		);
	}
	jboolean File::mkdirs()
	{
		return callMethod<jboolean>(
			"mkdirs",
			"()Z"
		);
	}
	jboolean File::renameTo(java::io::File arg0)
	{
		return callMethod<jboolean>(
			"renameTo",
			"(Ljava/io/File;)Z",
			arg0.object()
		);
	}
	jboolean File::setExecutable(jboolean arg0)
	{
		return callMethod<jboolean>(
			"setExecutable",
			"(Z)Z",
			arg0
		);
	}
	jboolean File::setExecutable(jboolean arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"setExecutable",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	jboolean File::setLastModified(jlong arg0)
	{
		return callMethod<jboolean>(
			"setLastModified",
			"(J)Z",
			arg0
		);
	}
	jboolean File::setReadOnly()
	{
		return callMethod<jboolean>(
			"setReadOnly",
			"()Z"
		);
	}
	jboolean File::setReadable(jboolean arg0)
	{
		return callMethod<jboolean>(
			"setReadable",
			"(Z)Z",
			arg0
		);
	}
	jboolean File::setReadable(jboolean arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"setReadable",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	jboolean File::setWritable(jboolean arg0)
	{
		return callMethod<jboolean>(
			"setWritable",
			"(Z)Z",
			arg0
		);
	}
	jboolean File::setWritable(jboolean arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"setWritable",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	JObject File::toPath()
	{
		return callObjectMethod(
			"toPath",
			"()Ljava/nio/file/Path;"
		);
	}
	jstring File::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::net::URI File::toURI()
	{
		return callObjectMethod(
			"toURI",
			"()Ljava/net/URI;"
		);
	}
	java::net::URL File::toURL()
	{
		return callObjectMethod(
			"toURL",
			"()Ljava/net/URL;"
		);
	}
} // namespace java::io

