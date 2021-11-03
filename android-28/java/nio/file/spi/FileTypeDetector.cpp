#include "../../../lang/Void.hpp"
#include "./FileTypeDetector.hpp"

namespace java::nio::file::spi
{
	// Fields
	
	// QAndroidJniObject forward
	FileTypeDetector::FileTypeDetector(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring FileTypeDetector::probeContentType(JObject arg0)
	{
		return callObjectMethod(
			"probeContentType",
			"(Ljava/nio/file/Path;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
} // namespace java::nio::file::spi

