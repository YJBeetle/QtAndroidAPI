#include "../../java/io/File.hpp"
#include "../../java/io/FileInputStream.hpp"
#include "../../java/io/FileOutputStream.hpp"
#include "./AtomicFile.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	AtomicFile::AtomicFile(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AtomicFile::AtomicFile(java::io::File arg0)
		: __JniBaseClass(
			"android.util.AtomicFile",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	
	// Methods
	void AtomicFile::_delete()
	{
		callMethod<void>(
			"delete",
			"()V"
		);
	}
	void AtomicFile::failWrite(java::io::FileOutputStream arg0)
	{
		callMethod<void>(
			"failWrite",
			"(Ljava/io/FileOutputStream;)V",
			arg0.object()
		);
	}
	void AtomicFile::finishWrite(java::io::FileOutputStream arg0)
	{
		callMethod<void>(
			"finishWrite",
			"(Ljava/io/FileOutputStream;)V",
			arg0.object()
		);
	}
	java::io::File AtomicFile::getBaseFile()
	{
		return callObjectMethod(
			"getBaseFile",
			"()Ljava/io/File;"
		);
	}
	jlong AtomicFile::getLastModifiedTime()
	{
		return callMethod<jlong>(
			"getLastModifiedTime",
			"()J"
		);
	}
	java::io::FileInputStream AtomicFile::openRead()
	{
		return callObjectMethod(
			"openRead",
			"()Ljava/io/FileInputStream;"
		);
	}
	jbyteArray AtomicFile::readFully()
	{
		return callObjectMethod(
			"readFully",
			"()[B"
		).object<jbyteArray>();
	}
	java::io::FileOutputStream AtomicFile::startWrite()
	{
		return callObjectMethod(
			"startWrite",
			"()Ljava/io/FileOutputStream;"
		);
	}
} // namespace android::util

