#pragma once

#include "../../../JObject.hpp"

class JString;
namespace javax::crypto::spec
{
	class PSource;
}

namespace javax::crypto::spec
{
	class OAEPParameterSpec : public JObject
	{
	public:
		// Fields
		static javax::crypto::spec::OAEPParameterSpec DEFAULT();
		
		// QJniObject forward
		template<typename ...Ts> explicit OAEPParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OAEPParameterSpec(QJniObject obj);
		
		// Constructors
		OAEPParameterSpec(JString arg0, JString arg1, JObject arg2, javax::crypto::spec::PSource arg3);
		
		// Methods
		JString getDigestAlgorithm() const;
		JString getMGFAlgorithm() const;
		JObject getMGFParameters() const;
		javax::crypto::spec::PSource getPSource() const;
	};
} // namespace javax::crypto::spec

