#include "./PSource_PSpecified.hpp"

namespace javax::crypto::spec
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
	
	PSource_PSpecified::PSource_PSpecified(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PSource_PSpecified::PSource_PSpecified(jbyteArray &arg0)
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
} // namespace javax::crypto::spec

