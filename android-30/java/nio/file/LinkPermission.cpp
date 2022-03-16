#include "../../../JString.hpp"
#include "./LinkPermission.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	LinkPermission::LinkPermission(JString arg0)
		: java::security::BasicPermission(
			"java.nio.file.LinkPermission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	LinkPermission::LinkPermission(JString arg0, JString arg1)
		: java::security::BasicPermission(
			"java.nio.file.LinkPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace java::nio::file

