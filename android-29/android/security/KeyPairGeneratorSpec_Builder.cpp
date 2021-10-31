#include "../content/Context.hpp"
#include "./KeyPairGeneratorSpec.hpp"
#include "../../java/math/BigInteger.hpp"
#include "../../java/util/Date.hpp"
#include "../../javax/security/auth/x500/X500Principal.hpp"
#include "./KeyPairGeneratorSpec_Builder.hpp"

namespace android::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyPairGeneratorSpec_Builder::KeyPairGeneratorSpec_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyPairGeneratorSpec_Builder::KeyPairGeneratorSpec_Builder(android::content::Context arg0)
		: __JniBaseClass(
			"android.security.KeyPairGeneratorSpec$Builder",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject KeyPairGeneratorSpec_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/security/KeyPairGeneratorSpec;"
		);
	}
	QAndroidJniObject KeyPairGeneratorSpec_Builder::setAlgorithmParameterSpec(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setAlgorithmParameterSpec",
			"(Ljava/security/spec/AlgorithmParameterSpec;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject KeyPairGeneratorSpec_Builder::setAlias(jstring arg0)
	{
		return callObjectMethod(
			"setAlias",
			"(Ljava/lang/String;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyPairGeneratorSpec_Builder::setEncryptionRequired()
	{
		return callObjectMethod(
			"setEncryptionRequired",
			"()Landroid/security/KeyPairGeneratorSpec$Builder;"
		);
	}
	QAndroidJniObject KeyPairGeneratorSpec_Builder::setEndDate(java::util::Date arg0)
	{
		return callObjectMethod(
			"setEndDate",
			"(Ljava/util/Date;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject KeyPairGeneratorSpec_Builder::setKeySize(jint arg0)
	{
		return callObjectMethod(
			"setKeySize",
			"(I)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyPairGeneratorSpec_Builder::setKeyType(jstring arg0)
	{
		return callObjectMethod(
			"setKeyType",
			"(Ljava/lang/String;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0
		);
	}
	QAndroidJniObject KeyPairGeneratorSpec_Builder::setSerialNumber(java::math::BigInteger arg0)
	{
		return callObjectMethod(
			"setSerialNumber",
			"(Ljava/math/BigInteger;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject KeyPairGeneratorSpec_Builder::setStartDate(java::util::Date arg0)
	{
		return callObjectMethod(
			"setStartDate",
			"(Ljava/util/Date;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject KeyPairGeneratorSpec_Builder::setSubject(javax::security::auth::x500::X500Principal arg0)
	{
		return callObjectMethod(
			"setSubject",
			"(Ljavax/security/auth/x500/X500Principal;)Landroid/security/KeyPairGeneratorSpec$Builder;",
			arg0.object()
		);
	}
} // namespace android::security

