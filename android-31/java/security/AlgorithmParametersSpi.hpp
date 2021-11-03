#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JClass;
class JString;

namespace java::security
{
	class AlgorithmParametersSpi : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlgorithmParametersSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlgorithmParametersSpi(QAndroidJniObject obj);
		
		// Constructors
		AlgorithmParametersSpi();
		
		// Methods
	};
} // namespace java::security

