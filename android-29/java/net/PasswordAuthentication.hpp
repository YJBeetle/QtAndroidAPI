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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PasswordAuthentication(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PasswordAuthentication(QAndroidJniObject obj);
		
		// Constructors
		PasswordAuthentication(JString arg0, JCharArray arg1);
		
		// Methods
		JCharArray getPassword() const;
		JString getUserName() const;
	};
} // namespace java::net

