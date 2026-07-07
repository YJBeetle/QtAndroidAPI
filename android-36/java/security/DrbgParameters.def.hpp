#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace java::security
{
	class DrbgParameters_Capability;
}
namespace java::security
{
	class DrbgParameters_Instantiation;
}
namespace java::security
{
	class DrbgParameters_NextBytes;
}
namespace java::security
{
	class DrbgParameters_Reseed;
}

namespace java::security
{
	class DrbgParameters : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DrbgParameters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrbgParameters(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::security::DrbgParameters_Instantiation instantiation(jint arg0, java::security::DrbgParameters_Capability arg1, JByteArray arg2);
		static java::security::DrbgParameters_NextBytes nextBytes(jint arg0, jboolean arg1, JByteArray arg2);
		static java::security::DrbgParameters_Reseed reseed(jboolean arg0, JByteArray arg1);
	};
} // namespace java::security

