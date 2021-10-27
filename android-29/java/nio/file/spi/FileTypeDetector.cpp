#include "../../../lang/Void.hpp"
#include "./FileTypeDetector.hpp"

namespace java::nio::file::spi
{
	// Fields
	
	FileTypeDetector::FileTypeDetector(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring FileTypeDetector::probeContentType(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"probeContentType",
			"(Ljava/nio/file/Path;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
} // namespace java::nio::file::spi

