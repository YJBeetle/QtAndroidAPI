#include "./LinkPermission.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	LinkPermission::LinkPermission(QAndroidJniObject obj) : java::security::BasicPermission(obj) {}
	
	// Constructors
	LinkPermission::LinkPermission(jstring arg0)
		: java::security::BasicPermission(
			"java.nio.file.LinkPermission",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	LinkPermission::LinkPermission(jstring arg0, jstring arg1)
		: java::security::BasicPermission(
			"java.nio.file.LinkPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::nio::file

