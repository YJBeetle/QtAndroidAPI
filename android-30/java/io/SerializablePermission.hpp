#pragma once

#include "../../__JniBaseClass.hpp"
#include "../security/Permission.hpp"
#include "../security/BasicPermission.hpp"


namespace java::io
{
	class SerializablePermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SerializablePermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		SerializablePermission(QJniObject obj);
		
		// Constructors
		SerializablePermission(jstring arg0);
		SerializablePermission(jstring arg0, jstring arg1);
		
		// Methods
	};
} // namespace java::io

