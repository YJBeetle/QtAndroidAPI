#include "./ReflectPermission.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QJniObject forward
	ReflectPermission::ReflectPermission(QJniObject obj) : java::security::BasicPermission(obj) {}
	
	// Constructors
	ReflectPermission::ReflectPermission(jstring arg0)
		: java::security::BasicPermission(
			"java.lang.reflect.ReflectPermission",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	ReflectPermission::ReflectPermission(jstring arg0, jstring arg1)
		: java::security::BasicPermission(
			"java.lang.reflect.ReflectPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::lang::reflect

