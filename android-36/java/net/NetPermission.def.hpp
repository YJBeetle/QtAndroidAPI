#pragma once

#include "../security/BasicPermission.def.hpp"

class JString;

namespace java::net
{
	class NetPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NetPermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		NetPermission(QJniObject obj) : java::security::BasicPermission(obj) {}
		
		// Constructors
		NetPermission(JString arg0);
		NetPermission(JString arg0, JString arg1);
		
		// Methods
	};
} // namespace java::net

