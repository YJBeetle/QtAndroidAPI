#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JClass;
class JString;
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
		static java::security::AlgorithmParameters getInstance(JString arg0);
		static java::security::AlgorithmParameters getInstance(JString arg0, JString arg1);
		static java::security::AlgorithmParameters getInstance(JString arg0, java::security::Provider arg1);
		JString getAlgorithm();
		JByteArray getEncoded();
		JByteArray getEncoded(JString arg0);
		JObject getParameterSpec(JClass arg0);
		java::security::Provider getProvider();
		void init(JByteArray arg0);
		void init(JObject arg0);
		void init(JByteArray arg0, JString arg1);
		JString toString();
	};
} // namespace java::security

