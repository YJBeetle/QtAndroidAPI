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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlgorithmParameters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlgorithmParameters(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::security::AlgorithmParameters getInstance(JString arg0);
		static java::security::AlgorithmParameters getInstance(JString arg0, JString arg1);
		static java::security::AlgorithmParameters getInstance(JString arg0, java::security::Provider arg1);
		JString getAlgorithm() const;
		JByteArray getEncoded() const;
		JByteArray getEncoded(JString arg0) const;
		JObject getParameterSpec(JClass arg0) const;
		java::security::Provider getProvider() const;
		void init(JByteArray arg0) const;
		void init(JObject arg0) const;
		void init(JByteArray arg0, JString arg1) const;
		JString toString() const;
	};
} // namespace java::security

