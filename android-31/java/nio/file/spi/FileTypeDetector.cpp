#include "../../../lang/Void.hpp"
#include "./FileTypeDetector.hpp"

namespace java::nio::file::spi
{
	// Fields
	
	// QAndroidJniObject forward
	FileTypeDetector::FileTypeDetector(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring FileTypeDetector::probeContentType(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"probeContentType",
			"(Ljava/nio/file/Path;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
} // namespace java::nio::file::spi

