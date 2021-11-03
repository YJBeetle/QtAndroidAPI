#pragma once

#include "../../security/BasicPermission.hpp"

class JString;

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
		LinkPermission(JString arg0);
		LinkPermission(JString arg0, JString arg1);
		
		// Methods
	};
} // namespace java::nio::file

