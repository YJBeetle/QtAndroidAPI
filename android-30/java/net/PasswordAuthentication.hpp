#pragma once

#include "../../JObject.hpp"


namespace java::net
{
	class PasswordAuthentication : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PasswordAuthentication(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PasswordAuthentication(QAndroidJniObject obj);
		
		// Constructors
		PasswordAuthentication(jstring arg0, jcharArray arg1);
		
		// Methods
		jcharArray getPassword();
		jstring getUserName();
	};
} // namespace java::net

