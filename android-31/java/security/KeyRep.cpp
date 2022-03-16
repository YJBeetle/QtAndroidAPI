#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./KeyRep_Type.hpp"
#include "./KeyRep.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	KeyRep::KeyRep(java::security::KeyRep_Type arg0, JString arg1, JString arg2, JByteArray arg3)
		: JObject(
			"java.security.KeyRep",
			"(Ljava/security/KeyRep$Type;Ljava/lang/String;Ljava/lang/String;[B)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jbyteArray>()
		) {}
	
	// Methods
} // namespace java::security

