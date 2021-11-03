#include "../../../JString.hpp"
#include "./NotLinkException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	NotLinkException::NotLinkException(QAndroidJniObject obj) : java::nio::file::FileSystemException(obj) {}
	
	// Constructors
	NotLinkException::NotLinkException(JString arg0)
		: java::nio::file::FileSystemException(
			"java.nio.file.NotLinkException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	NotLinkException::NotLinkException(JString arg0, JString arg1, JString arg2)
		: java::nio::file::FileSystemException(
			"java.nio.file.NotLinkException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
} // namespace java::nio::file

