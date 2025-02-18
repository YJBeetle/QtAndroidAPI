#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JString;
namespace java::security
{
	class DrbgParameters_Capability;
}

namespace java::security
{
	class DrbgParameters_Instantiation : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DrbgParameters_Instantiation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrbgParameters_Instantiation(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		java::security::DrbgParameters_Capability getCapability() const;
		JByteArray getPersonalizationString() const;
		jint getStrength() const;
		JString toString() const;
	};
} // namespace java::security

