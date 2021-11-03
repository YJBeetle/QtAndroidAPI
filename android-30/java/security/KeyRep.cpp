#include "./KeyRep_Type.hpp"
#include "./KeyRep.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyRep::KeyRep(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyRep::KeyRep(java::security::KeyRep_Type arg0, jstring arg1, jstring arg2, jbyteArray arg3)
		: JObject(
			"java.security.KeyRep",
			"(Ljava/security/KeyRep$Type;Ljava/lang/String;Ljava/lang/String;[B)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace java::security

