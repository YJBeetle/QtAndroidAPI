#include "../../java/io/File.hpp"
#include "../../java/io/FileInputStream.hpp"
#include "../../java/io/FileOutputStream.hpp"
#include "./AtomicFile.hpp"

namespace android::util
{
	// Fields
	
	AtomicFile::AtomicFile(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AtomicFile::AtomicFile(java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.AtomicFile",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void AtomicFile::_delete()
	{
		__thiz.callMethod<void>(
			"delete",
			"()V"
		);
	}
	void AtomicFile::failWrite(java::io::FileOutputStream arg0)
	{
		__thiz.callMethod<void>(
			"failWrite",
			"(Ljava/io/FileOutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void AtomicFile::finishWrite(java::io::FileOutputStream arg0)
	{
		__thiz.callMethod<void>(
			"finishWrite",
			"(Ljava/io/FileOutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AtomicFile::getBaseFile()
	{
		return __thiz.callObjectMethod(
			"getBaseFile",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject AtomicFile::openRead()
	{
		return __thiz.callObjectMethod(
			"openRead",
			"()Ljava/io/FileInputStream;"
		);
	}
	jbyteArray AtomicFile::readFully()
	{
		return __thiz.callObjectMethod(
			"readFully",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject AtomicFile::startWrite()
	{
		return __thiz.callObjectMethod(
			"startWrite",
			"()Ljava/io/FileOutputStream;"
		);
	}
} // namespace android::util

