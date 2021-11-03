#pragma once

#include "../../JObject.hpp"
#include "../security/Permission.hpp"
#include "../security/BasicPermission.hpp"


namespace java::lang
{
	class RuntimePermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RuntimePermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		RuntimePermission(QJniObject obj);
		
		// Constructors
		RuntimePermission(jstring arg0);
		RuntimePermission(jstring arg0, jstring arg1);
		
		// Methods
	};
} // namespace java::lang

