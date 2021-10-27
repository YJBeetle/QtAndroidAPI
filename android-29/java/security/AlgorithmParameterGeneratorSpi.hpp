#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class AlgorithmParameters;
}
namespace __jni_impl::java::security
{
	class SecureRandom;
}

namespace __jni_impl::java::security
{
	class AlgorithmParameterGeneratorSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::security

#include "AlgorithmParameters.hpp"
#include "SecureRandom.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void AlgorithmParameterGeneratorSpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.AlgorithmParameterGeneratorSpi",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class AlgorithmParameterGeneratorSpi : public __jni_impl::java::security::AlgorithmParameterGeneratorSpi
	{
	public:
		AlgorithmParameterGeneratorSpi(QAndroidJniObject obj) { __thiz = obj; }
		AlgorithmParameterGeneratorSpi()
		{
			__constructor();
		}
	};
} // namespace java::security

