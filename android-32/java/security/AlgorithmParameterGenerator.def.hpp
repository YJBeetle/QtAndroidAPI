#pragma once

#include "../../JObject.hpp"

class JString;
namespace java::security
{
	class AlgorithmParameterGeneratorSpi;
}
namespace java::security
{
	class AlgorithmParameters;
}
namespace java::security
{
	class Provider;
}
namespace java::security
{
	class SecureRandom;
}

namespace java::security
{
	class AlgorithmParameterGenerator : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AlgorithmParameterGenerator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlgorithmParameterGenerator(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::security::AlgorithmParameterGenerator getInstance(JString arg0);
		static java::security::AlgorithmParameterGenerator getInstance(JString arg0, JString arg1);
		static java::security::AlgorithmParameterGenerator getInstance(JString arg0, java::security::Provider arg1);
		java::security::AlgorithmParameters generateParameters() const;
		JString getAlgorithm() const;
		java::security::Provider getProvider() const;
		void init(jint arg0) const;
		void init(JObject arg0) const;
		void init(jint arg0, java::security::SecureRandom arg1) const;
		void init(JObject arg0, java::security::SecureRandom arg1) const;
	};
} // namespace java::security

