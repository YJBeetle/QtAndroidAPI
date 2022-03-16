#pragma once

#include "../../../JArray.hpp"
#include "./KeyProtection.def.hpp"
#include "../../../java/util/Date.def.hpp"
#include "./KeyProtection_Builder.def.hpp"

namespace android::security::keystore
{
	// Fields
	
	// Constructors
	inline KeyProtection_Builder::KeyProtection_Builder(jint arg0)
		: JObject(
			"android.security.keystore.KeyProtection$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::security::keystore::KeyProtection KeyProtection_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/security/keystore/KeyProtection;"
		);
	}
	inline android::security::keystore::KeyProtection_Builder KeyProtection_Builder::setBlockModes(JArray arg0) const
	{
		return callObjectMethod(
			"setBlockModes",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::security::keystore::KeyProtection_Builder KeyProtection_Builder::setDigests(JArray arg0) const
	{
		return callObjectMethod(
			"setDigests",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::security::keystore::KeyProtection_Builder KeyProtection_Builder::setEncryptionPaddings(JArray arg0) const
	{
		return callObjectMethod(
			"setEncryptionPaddings",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::security::keystore::KeyProtection_Builder KeyProtection_Builder::setInvalidatedByBiometricEnrollment(jboolean arg0) const
	{
		return callObjectMethod(
			"setInvalidatedByBiometricEnrollment",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	inline android::security::keystore::KeyProtection_Builder KeyProtection_Builder::setKeyValidityEnd(java::util::Date arg0) const
	{
		return callObjectMethod(
			"setKeyValidityEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0.object()
		);
	}
	inline android::security::keystore::KeyProtection_Builder KeyProtection_Builder::setKeyValidityForConsumptionEnd(java::util::Date arg0) const
	{
		return callObjectMethod(
			"setKeyValidityForConsumptionEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0.object()
		);
	}
	inline android::security::keystore::KeyProtection_Builder KeyProtection_Builder::setKeyValidityForOriginationEnd(java::util::Date arg0) const
	{
		return callObjectMethod(
			"setKeyValidityForOriginationEnd",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0.object()
		);
	}
	inline android::security::keystore::KeyProtection_Builder KeyProtection_Builder::setKeyValidityStart(java::util::Date arg0) const
	{
		return callObjectMethod(
			"setKeyValidityStart",
			"(Ljava/util/Date;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0.object()
		);
	}
	inline android::security::keystore::KeyProtection_Builder KeyProtection_Builder::setRandomizedEncryptionRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setRandomizedEncryptionRequired",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	inline android::security::keystore::KeyProtection_Builder KeyProtection_Builder::setSignaturePaddings(JArray arg0) const
	{
		return callObjectMethod(
			"setSignaturePaddings",
			"([Ljava/lang/String;)Landroid/security/keystore/KeyProtection$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::security::keystore::KeyProtection_Builder KeyProtection_Builder::setUnlockedDeviceRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setUnlockedDeviceRequired",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	inline android::security::keystore::KeyProtection_Builder KeyProtection_Builder::setUserAuthenticationParameters(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setUserAuthenticationParameters",
			"(II)Landroid/security/keystore/KeyProtection$Builder;",
			arg0,
			arg1
		);
	}
	inline android::security::keystore::KeyProtection_Builder KeyProtection_Builder::setUserAuthenticationRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setUserAuthenticationRequired",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	inline android::security::keystore::KeyProtection_Builder KeyProtection_Builder::setUserAuthenticationValidWhileOnBody(jboolean arg0) const
	{
		return callObjectMethod(
			"setUserAuthenticationValidWhileOnBody",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	inline android::security::keystore::KeyProtection_Builder KeyProtection_Builder::setUserAuthenticationValidityDurationSeconds(jint arg0) const
	{
		return callObjectMethod(
			"setUserAuthenticationValidityDurationSeconds",
			"(I)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	inline android::security::keystore::KeyProtection_Builder KeyProtection_Builder::setUserConfirmationRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setUserConfirmationRequired",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
	inline android::security::keystore::KeyProtection_Builder KeyProtection_Builder::setUserPresenceRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setUserPresenceRequired",
			"(Z)Landroid/security/keystore/KeyProtection$Builder;",
			arg0
		);
	}
} // namespace android::security::keystore

// Base class headers

