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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LoggingPermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		LoggingPermission(QAndroidJniObject obj);
		
		// Constructors
		LoggingPermission(jstring arg0, jstring arg1);
		
		// Methods
	};
} // namespace java::util::logging

