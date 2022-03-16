#pragma once

#include "../security/BasicPermission.hpp"

class JString;

namespace java::io
{
	class SerializablePermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SerializablePermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		SerializablePermission(QAndroidJniObject obj) : java::security::BasicPermission(obj) {}
		
		// Constructors
		SerializablePermission(JString arg0);
		SerializablePermission(JString arg0, JString arg1);
		
		// Methods
	};
} // namespace java::io

