#include "../../../JString.hpp"
#include "./ECGenParameterSpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QJniObject forward
	ECGenParameterSpec::ECGenParameterSpec(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ECGenParameterSpec::ECGenParameterSpec(JString arg0)
		: JObject(
			"java.security.spec.ECGenParameterSpec",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::security::spec

