#include "../../JByteArray.hpp"
#include "../../java/io/File.hpp"
#include "../../java/io/FileInputStream.hpp"
#include "../../java/io/FileOutputStream.hpp"
#include "./AtomicFile.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	AtomicFile::AtomicFile(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AtomicFile::AtomicFile(java::io::File arg0)
		: JObject(
			"android.util.AtomicFile",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	
	// Methods
	void AtomicFile::_delete() const
	{
		callMethod<void>(
			"delete",
			"()V"
		);
	}
	void AtomicFile::failWrite(java::io::FileOutputStream arg0) const
	{
		callMethod<void>(
			"failWrite",
			"(Ljava/io/FileOutputStream;)V",
			arg0.object()
		);
	}
	void AtomicFile::finishWrite(java::io::FileOutputStream arg0) const
	{
		callMethod<void>(
			"finishWrite",
			"(Ljava/io/FileOutputStream;)V",
			arg0.object()
		);
	}
	java::io::File AtomicFile::getBaseFile() const
	{
		return callObjectMethod(
			"getBaseFile",
			"()Ljava/io/File;"
		);
	}
	java::io::FileInputStream AtomicFile::openRead() const
	{
		return callObjectMethod(
			"openRead",
			"()Ljava/io/FileInputStream;"
		);
	}
	JByteArray AtomicFile::readFully() const
	{
		return callObjectMethod(
			"readFully",
			"()[B"
		);
	}
	java::io::FileOutputStream AtomicFile::startWrite() const
	{
		return callObjectMethod(
			"startWrite",
			"()Ljava/io/FileOutputStream;"
		);
	}
} // namespace android::util

