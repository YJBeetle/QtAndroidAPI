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
		
		SerializablePermission(QAndroidJniObject obj);
		// Constructors
		SerializablePermission(jstring arg0);
		SerializablePermission(jstring arg0, jstring arg1);
		SerializablePermission() = default;
		
		// Methods
	};
} // namespace java::io

