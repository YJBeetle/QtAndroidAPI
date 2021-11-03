#pragma once

#include "../../JObject.hpp"

class JCharArray;
class JString;

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
		PasswordAuthentication(JString arg0, JCharArray arg1);
		
		// Methods
		JCharArray getPassword();
		JString getUserName();
	};
} // namespace java::net

