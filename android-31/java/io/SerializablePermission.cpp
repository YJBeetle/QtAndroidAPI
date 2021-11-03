#include "../../JString.hpp"
#include "./SerializablePermission.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	SerializablePermission::SerializablePermission(QAndroidJniObject obj) : java::security::BasicPermission(obj) {}
	
	// Constructors
	SerializablePermission::SerializablePermission(JString arg0)
		: java::security::BasicPermission(
			"java.io.SerializablePermission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SerializablePermission::SerializablePermission(JString arg0, JString arg1)
		: java::security::BasicPermission(
			"java.io.SerializablePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

