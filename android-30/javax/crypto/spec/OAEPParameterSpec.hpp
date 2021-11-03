#pragma once

#include "../../../JObject.hpp"

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
		OAEPParameterSpec(jstring arg0, jstring arg1, JObject arg2, javax::crypto::spec::PSource arg3);
		
		// Methods
		jstring getDigestAlgorithm();
		jstring getMGFAlgorithm();
		JObject getMGFParameters();
		javax::crypto::spec::PSource getPSource();
	};
} // namespace javax::crypto::spec

