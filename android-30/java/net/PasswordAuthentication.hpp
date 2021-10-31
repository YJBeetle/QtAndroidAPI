#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::net
{
	class PasswordAuthentication : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PasswordAuthentication(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PasswordAuthentication(QJniObject obj);
		
		// Constructors
		PasswordAuthentication(jstring arg0, jcharArray arg1);
		
		// Methods
		jcharArray getPassword();
		jstring getUserName();
	};
} // namespace java::net

