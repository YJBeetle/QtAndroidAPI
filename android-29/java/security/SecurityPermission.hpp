#pragma once

#include "../../JObject.hpp"
#include "./Permission.hpp"
#include "./BasicPermission.hpp"


namespace java::security
{
	class SecurityPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SecurityPermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		SecurityPermission(QAndroidJniObject obj);
		
		// Constructors
		SecurityPermission(jstring arg0);
		SecurityPermission(jstring arg0, jstring arg1);
		
		// Methods
	};
} // namespace java::security

