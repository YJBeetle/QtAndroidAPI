#include "../../JString.hpp"
#include "./RuntimePermission.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	RuntimePermission::RuntimePermission(JString arg0)
		: java::security::BasicPermission(
			"java.lang.RuntimePermission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	RuntimePermission::RuntimePermission(JString arg0, JString arg1)
		: java::security::BasicPermission(
			"java.lang.RuntimePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

