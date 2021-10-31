#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../security/Permission.hpp"
#include "../../security/BasicPermission.hpp"


namespace java::nio::file
{
	class LinkPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LinkPermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		LinkPermission(QAndroidJniObject obj);
		
		// Constructors
		LinkPermission(jstring arg0);
		LinkPermission(jstring arg0, jstring arg1);
		
		// Methods
	};
} // namespace java::nio::file
