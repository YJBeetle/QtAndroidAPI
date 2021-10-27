#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class AlgorithmParameters;
}

namespace __jni_impl::javax::crypto
{
	class ExemptionMechanismSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::javax::crypto

#include "../../java/security/AlgorithmParameters.hpp"

namespace __jni_impl::javax::crypto
{
	// Fields
	
	// Constructors
	void ExemptionMechanismSpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.ExemptionMechanismSpi",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class ExemptionMechanismSpi : public __jni_impl::javax::crypto::ExemptionMechanismSpi
	{
	public:
		ExemptionMechanismSpi(QAndroidJniObject obj) { __thiz = obj; }
		ExemptionMechanismSpi()
		{
			__constructor();
		}
	};
} // namespace javax::crypto

