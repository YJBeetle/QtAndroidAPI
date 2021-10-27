#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::crypto::spec
{
	class PSource : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getAlgorithm();
	};
} // namespace __jni_impl::javax::crypto::spec


namespace __jni_impl::javax::crypto::spec
{
	// Fields
	
	// Constructors
	void PSource::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.PSource",
			"(V)V");
	}
	
	// Methods
	jstring PSource::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::javax::crypto::spec

namespace javax::crypto::spec
{
	class PSource : public __jni_impl::javax::crypto::spec::PSource
	{
	public:
		PSource(QAndroidJniObject obj) { __thiz = obj; }
		PSource()
		{
			__constructor();
		}
	};
} // namespace javax::crypto::spec

