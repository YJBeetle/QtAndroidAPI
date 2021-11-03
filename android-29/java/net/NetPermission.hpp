#pragma once

#include "../../JObject.hpp"
#include "../security/Permission.hpp"
#include "../security/BasicPermission.hpp"


namespace java::net
{
	class NetPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetPermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		NetPermission(QAndroidJniObject obj);
		
		// Constructors
		NetPermission(jstring arg0);
		NetPermission(jstring arg0, jstring arg1);
		
		// Methods
	};
} // namespace java::net

