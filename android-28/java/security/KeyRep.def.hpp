#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JObject;
class JString;
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
		KeyRep(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		KeyRep(java::security::KeyRep_Type arg0, JString arg1, JString arg2, JByteArray arg3);
		
		// Methods
	};
} // namespace java::security

