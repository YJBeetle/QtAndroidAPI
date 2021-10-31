#include "./ECGenParameterSpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QJniObject forward
	ECGenParameterSpec::ECGenParameterSpec(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ECGenParameterSpec::ECGenParameterSpec(jstring arg0)
		: __JniBaseClass(
			"java.security.spec.ECGenParameterSpec",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::security::spec

