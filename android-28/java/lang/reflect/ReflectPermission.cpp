#include "../../../JString.hpp"
#include "./ReflectPermission.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QJniObject forward
	ReflectPermission::ReflectPermission(QJniObject obj) : java::security::BasicPermission(obj) {}
	
	// Constructors
	ReflectPermission::ReflectPermission(JString arg0)
		: java::security::BasicPermission(
			"java.lang.reflect.ReflectPermission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	ReflectPermission::ReflectPermission(JString arg0, JString arg1)
		: java::security::BasicPermission(
			"java.lang.reflect.ReflectPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang::reflect

