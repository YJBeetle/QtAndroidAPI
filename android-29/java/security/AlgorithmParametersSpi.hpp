#pragma once

#ifndef JAVA_SECURITY_ALGORITHMPARAMETERSSPI
#define JAVA_SECURITY_ALGORITHMPARAMETERSSPI

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::security
{
	class AlgorithmParametersSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::security


namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void AlgorithmParametersSpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.AlgorithmParametersSpi",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class AlgorithmParametersSpi : public __jni_impl::java::security::AlgorithmParametersSpi
	{
	public:
		AlgorithmParametersSpi(QAndroidJniObject obj) { __thiz = obj; }
		AlgorithmParametersSpi()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_ALGORITHMPARAMETERSSPI

