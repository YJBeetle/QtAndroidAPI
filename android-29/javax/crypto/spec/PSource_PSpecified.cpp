#include "../../../JByteArray.hpp"
#include "./PSource_PSpecified.hpp"

namespace javax::crypto::spec
{
	// Fields
	javax::crypto::spec::PSource_PSpecified PSource_PSpecified::DEFAULT()
	{
		return getStaticObjectField(
			"javax.crypto.spec.PSource$PSpecified",
			"DEFAULT",
			"Ljavax/crypto/spec/PSource$PSpecified;"
		);
	}
	
	// QAndroidJniObject forward
	PSource_PSpecified::PSource_PSpecified(QAndroidJniObject obj) : javax::crypto::spec::PSource(obj) {}
	
	// Constructors
	PSource_PSpecified::PSource_PSpecified(JByteArray arg0)
		: javax::crypto::spec::PSource(
			"javax.crypto.spec.PSource$PSpecified",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	
	// Methods
	JByteArray PSource_PSpecified::getValue()
	{
		return callObjectMethod(
			"getValue",
			"()[B"
		);
	}
} // namespace javax::crypto::spec

