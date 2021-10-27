#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::io
{
	class FileInputStream;
}
namespace __jni_impl::java::io
{
	class FileOutputStream;
}

namespace __jni_impl::android::util
{
	class AtomicFile : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::File arg0);
		
		// Methods
		void _delete();
		void failWrite(__jni_impl::java::io::FileOutputStream arg0);
		void finishWrite(__jni_impl::java::io::FileOutputStream arg0);
		QAndroidJniObject getBaseFile();
		QAndroidJniObject openRead();
		jbyteArray readFully();
		QAndroidJniObject startWrite();
	};
} // namespace __jni_impl::android::util

#include "../../java/io/File.hpp"
#include "../../java/io/FileInputStream.hpp"
#include "../../java/io/FileOutputStream.hpp"

namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void AtomicFile::__constructor(__jni_impl::java::io::File arg0)
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
	void AtomicFile::failWrite(__jni_impl::java::io::FileOutputStream arg0)
	{
		__thiz.callMethod<void>(
			"failWrite",
			"(Ljava/io/FileOutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void AtomicFile::finishWrite(__jni_impl::java::io::FileOutputStream arg0)
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
} // namespace __jni_impl::android::util

namespace android::util
{
	class AtomicFile : public __jni_impl::android::util::AtomicFile
	{
	public:
		AtomicFile(QAndroidJniObject obj) { __thiz = obj; }
		AtomicFile(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

