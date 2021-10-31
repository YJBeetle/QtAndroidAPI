#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../security/Permission.hpp"
#include "../../security/BasicPermission.hpp"


namespace java::lang::reflect
{
	class ReflectPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ReflectPermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		ReflectPermission(QAndroidJniObject obj);
		
		// Constructors
		ReflectPermission(jstring arg0);
		ReflectPermission(jstring arg0, jstring arg1);
		
		// Methods
	};
} // namespace java::lang::reflect

