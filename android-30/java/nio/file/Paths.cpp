#include "../../net/URI.hpp"
#include "./Paths.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	Paths::Paths(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass Paths::get(java::net::URI arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.Paths",
			"get",
			"(Ljava/net/URI;)Ljava/nio/file/Path;",
			arg0.object()
		);
	}
	__JniBaseClass Paths::get(jstring arg0, jarray arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Paths",
			"get",
			"(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;",
			arg0,
			arg1
		);
	}
} // namespace java::nio::file

