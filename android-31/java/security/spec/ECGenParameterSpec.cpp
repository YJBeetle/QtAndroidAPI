#include "./ECGenParameterSpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QAndroidJniObject forward
	ECGenParameterSpec::ECGenParameterSpec(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ECGenParameterSpec::ECGenParameterSpec(jstring arg0)
		: JObject(
			"java.security.spec.ECGenParameterSpec",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::security::spec

