#include "./SerializablePermission.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	SerializablePermission::SerializablePermission(QJniObject obj) : java::security::BasicPermission(obj) {}
	
	// Constructors
	SerializablePermission::SerializablePermission(jstring arg0)
		: java::security::BasicPermission(
			"java.io.SerializablePermission",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SerializablePermission::SerializablePermission(jstring arg0, jstring arg1)
		: java::security::BasicPermission(
			"java.io.SerializablePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::io

