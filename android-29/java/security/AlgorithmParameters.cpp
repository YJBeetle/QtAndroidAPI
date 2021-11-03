#include "../../JByteArray.hpp"
#include "../../JClass.hpp"
#include "../../JString.hpp"
#include "./AlgorithmParametersSpi.hpp"
#include "./Provider.hpp"
#include "./AlgorithmParameters.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	AlgorithmParameters::AlgorithmParameters(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::security::AlgorithmParameters AlgorithmParameters::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.AlgorithmParameters",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/AlgorithmParameters;",
			arg0.object<jstring>()
		);
	}
	java::security::AlgorithmParameters AlgorithmParameters::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.security.AlgorithmParameters",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/AlgorithmParameters;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	java::security::AlgorithmParameters AlgorithmParameters::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.AlgorithmParameters",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/AlgorithmParameters;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString AlgorithmParameters::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	JByteArray AlgorithmParameters::getEncoded() const
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	JByteArray AlgorithmParameters::getEncoded(JString arg0) const
	{
		return callObjectMethod(
			"getEncoded",
			"(Ljava/lang/String;)[B",
			arg0.object<jstring>()
		);
	}
	JObject AlgorithmParameters::getParameterSpec(JClass arg0) const
	{
		return callObjectMethod(
			"getParameterSpec",
			"(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;",
			arg0.object<jclass>()
		);
	}
	java::security::Provider AlgorithmParameters::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void AlgorithmParameters::init(JByteArray arg0) const
	{
		callMethod<void>(
			"init",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void AlgorithmParameters::init(JObject arg0) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object()
		);
	}
	void AlgorithmParameters::init(JByteArray arg0, JString arg1) const
	{
		callMethod<void>(
			"init",
			"([BLjava/lang/String;)V",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>()
		);
	}
	JString AlgorithmParameters::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

