#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./PSource.hpp"


namespace __jni_impl::javax::crypto::spec
{
	class PSource_PSpecified : public __jni_impl::javax::crypto::spec::PSource
	{
	public:
		// Fields
		static QAndroidJniObject DEFAULT();
		
		// Constructors
		void __constructor(jbyteArray arg0);
		
		// Methods
		jbyteArray getValue();
	};
} // namespace __jni_impl::javax::crypto::spec


namespace __jni_impl::javax::crypto::spec
{
	// Fields
	QAndroidJniObject PSource_PSpecified::DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.crypto.spec.PSource$PSpecified",
			"DEFAULT",
			"Ljavax/crypto/spec/PSource$PSpecified;"
		);
	}
	
	// Constructors
	void PSource_PSpecified::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.PSource$PSpecified",
			"([B)V",
			arg0
		);
	}
	
	// Methods
	jbyteArray PSource_PSpecified::getValue()
	{
		return __thiz.callObjectMethod(
			"getValue",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace __jni_impl::javax::crypto::spec

namespace javax::crypto::spec
{
	class PSource_PSpecified : public __jni_impl::javax::crypto::spec::PSource_PSpecified
	{
	public:
		PSource_PSpecified(QAndroidJniObject obj) { __thiz = obj; }
		PSource_PSpecified(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::crypto::spec

