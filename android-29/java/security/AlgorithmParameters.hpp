#pragma once

#include "../../JObject.hpp"

namespace java::security
{
	class AlgorithmParametersSpi;
}
namespace java::security
{
	class Provider;
}

namespace java::security
{
	class AlgorithmParameters : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AlgorithmParameters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlgorithmParameters(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::AlgorithmParameters getInstance(jstring arg0);
		static java::security::AlgorithmParameters getInstance(jstring arg0, jstring arg1);
		static java::security::AlgorithmParameters getInstance(jstring arg0, java::security::Provider arg1);
		jstring getAlgorithm();
		jbyteArray getEncoded();
		jbyteArray getEncoded(jstring arg0);
		JObject getParameterSpec(jclass arg0);
		java::security::Provider getProvider();
		void init(jbyteArray arg0);
		void init(JObject arg0);
		void init(jbyteArray arg0, jstring arg1);
		jstring toString();
	};
} // namespace java::security

