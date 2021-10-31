#include "./RuntimePermission.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	RuntimePermission::RuntimePermission(QAndroidJniObject obj) : java::security::BasicPermission(obj) {}
	
	// Constructors
	RuntimePermission::RuntimePermission(jstring arg0)
		: java::security::BasicPermission(
			"java.lang.RuntimePermission",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	RuntimePermission::RuntimePermission(jstring arg0, jstring arg1)
		: java::security::BasicPermission(
			"java.lang.RuntimePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::lang

