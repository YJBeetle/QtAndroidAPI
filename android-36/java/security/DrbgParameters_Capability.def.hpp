#pragma once

#include "../lang/Enum.def.hpp"

class JArray;
class JString;

namespace java::security
{
	class DrbgParameters_Capability : public java::lang::Enum
	{
	public:
		// Fields
		static java::security::DrbgParameters_Capability NONE();
		static java::security::DrbgParameters_Capability PR_AND_RESEED();
		static java::security::DrbgParameters_Capability RESEED_ONLY();
		
		// QJniObject forward
		template<typename ...Ts> explicit DrbgParameters_Capability(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		DrbgParameters_Capability(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::security::DrbgParameters_Capability valueOf(JString arg0);
		static JArray values();
		jboolean supportsPredictionResistance() const;
		jboolean supportsReseeding() const;
		JString toString() const;
	};
} // namespace java::security

