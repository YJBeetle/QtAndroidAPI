#pragma once

#include "../../JObject.hpp"


namespace java::net
{
	class PasswordAuthentication : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PasswordAuthentication(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PasswordAuthentication(QJniObject obj);
		
		// Constructors
		PasswordAuthentication(jstring arg0, jcharArray arg1);
		
		// Methods
		jcharArray getPassword();
		jstring getUserName();
	};
} // namespace java::net

