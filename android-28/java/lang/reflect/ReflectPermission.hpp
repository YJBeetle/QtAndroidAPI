#pragma once

#include "../../security/BasicPermission.hpp"

class JString;

namespace java::lang::reflect
{
	class ReflectPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ReflectPermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		ReflectPermission(QAndroidJniObject obj) : java::security::BasicPermission(obj) {}
		
		// Constructors
		ReflectPermission(JString arg0);
		ReflectPermission(JString arg0, JString arg1);
		
		// Methods
	};
} // namespace java::lang::reflect

