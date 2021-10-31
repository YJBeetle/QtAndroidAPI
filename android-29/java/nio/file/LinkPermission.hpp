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
		
		LinkPermission(QAndroidJniObject obj);
		// Constructors
		LinkPermission(jstring arg0);
		LinkPermission(jstring arg0, jstring arg1);
		LinkPermission() = default;
		
		// Methods
	};
} // namespace java::nio::file

