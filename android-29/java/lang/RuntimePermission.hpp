#pragma once

#include "../security/BasicPermission.hpp"

class JString;

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
		RuntimePermission(JString arg0);
		RuntimePermission(JString arg0, JString arg1);
		
		// Methods
	};
} // namespace java::lang

