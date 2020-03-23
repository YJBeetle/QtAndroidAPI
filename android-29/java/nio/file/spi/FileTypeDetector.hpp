#pragma once

#ifndef JAVA_NIO_FILE_SPI_FILETYPEDETECTOR
#define JAVA_NIO_FILE_SPI_FILETYPEDETECTOR

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Void;
}

namespace __jni_impl::java::nio::file::spi
{
	class FileTypeDetector : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject probeContentType(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::nio::file::spi

#include "../../../lang/Void.hpp"

namespace __jni_impl::java::nio::file::spi
{
	// Fields
	
	// Constructors
	void FileTypeDetector::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.spi.FileTypeDetector",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject FileTypeDetector::probeContentType(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"probeContentType",
			"(Ljava/nio/file/Path;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::java::nio::file::spi

namespace java::nio::file::spi
{
	class FileTypeDetector : public __jni_impl::java::nio::file::spi::FileTypeDetector
	{
	public:
		FileTypeDetector(QAndroidJniObject obj) { __thiz = obj; }
		FileTypeDetector()
		{
			__constructor();
		}
	};
} // namespace java::nio::file::spi

#endif // JAVA_NIO_FILE_SPI_FILETYPEDETECTOR

