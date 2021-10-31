#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../security/Permission.hpp"
#include "../../security/BasicPermission.hpp"


namespace java::util::logging
{
	class LoggingPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		LoggingPermission(QAndroidJniObject obj);
		// Constructors
		LoggingPermission(jstring arg0, jstring arg1);
		LoggingPermission() = default;
		
		// Methods
	};
} // namespace java::util::logging

