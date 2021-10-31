#pragma once

#include "../../__JniBaseClass.hpp"
#include "../security/Permission.hpp"
#include "../security/BasicPermission.hpp"


namespace java::lang
{
	class RuntimePermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RuntimePermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		RuntimePermission(QAndroidJniObject obj);
		
		// Constructors
		RuntimePermission(jstring arg0);
		RuntimePermission(jstring arg0, jstring arg1);
		
		// Methods
	};
} // namespace java::lang

