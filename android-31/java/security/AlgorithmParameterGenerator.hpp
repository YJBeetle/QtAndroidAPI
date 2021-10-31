#pragma once

#include "../../__JniBaseClass.hpp"

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
	class AlgorithmParameterGenerator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlgorithmParameterGenerator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AlgorithmParameterGenerator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::AlgorithmParameterGenerator getInstance(jstring arg0);
		static java::security::AlgorithmParameterGenerator getInstance(jstring arg0, jstring arg1);
		static java::security::AlgorithmParameterGenerator getInstance(jstring arg0, java::security::Provider arg1);
		java::security::AlgorithmParameters generateParameters();
		jstring getAlgorithm();
		java::security::Provider getProvider();
		void init(jint arg0);
		void init(__JniBaseClass arg0);
		void init(jint arg0, java::security::SecureRandom arg1);
		void init(__JniBaseClass arg0, java::security::SecureRandom arg1);
	};
} // namespace java::security
