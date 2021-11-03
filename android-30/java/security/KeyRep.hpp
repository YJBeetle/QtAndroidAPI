#pragma once

#include "../../JObject.hpp"

namespace java::security
{
	class KeyRep_Type;
}

namespace java::security
{
	class KeyRep : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyRep(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyRep(QJniObject obj);
		
		// Constructors
		KeyRep(java::security::KeyRep_Type arg0, jstring arg1, jstring arg2, jbyteArray arg3);
		
		// Methods
	};
} // namespace java::security

