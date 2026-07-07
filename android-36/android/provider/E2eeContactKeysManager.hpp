#pragma once

#include "../../JByteArray.hpp"
#include "./E2eeContactKeysManager_E2eeContactKey.def.hpp"
#include "./E2eeContactKeysManager_E2eeSelfKey.def.hpp"
#include "../../JString.hpp"
#include "./E2eeContactKeysManager.def.hpp"

namespace android::provider
{
	// Fields
	inline jint E2eeContactKeysManager::VERIFICATION_STATE_UNVERIFIED()
	{
		return getStaticField<jint>(
			"android.provider.E2eeContactKeysManager",
			"VERIFICATION_STATE_UNVERIFIED"
		);
	}
	inline jint E2eeContactKeysManager::VERIFICATION_STATE_VERIFICATION_FAILED()
	{
		return getStaticField<jint>(
			"android.provider.E2eeContactKeysManager",
			"VERIFICATION_STATE_VERIFICATION_FAILED"
		);
	}
	inline jint E2eeContactKeysManager::VERIFICATION_STATE_VERIFIED()
	{
		return getStaticField<jint>(
			"android.provider.E2eeContactKeysManager",
			"VERIFICATION_STATE_VERIFIED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint E2eeContactKeysManager::getMaxKeySizeBytes()
	{
		return callStaticMethod<jint>(
			"android.provider.E2eeContactKeysManager",
			"getMaxKeySizeBytes",
			"()I"
		);
	}
	inline JObject E2eeContactKeysManager::getAllE2eeContactKeys(JString arg0) const
	{
		return callObjectMethod(
			"getAllE2eeContactKeys",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0.object<jstring>()
		);
	}
	inline JObject E2eeContactKeysManager::getAllE2eeSelfKeys() const
	{
		return callObjectMethod(
			"getAllE2eeSelfKeys",
			"()Ljava/util/List;"
		);
	}
	inline android::provider::E2eeContactKeysManager_E2eeContactKey E2eeContactKeysManager::getE2eeContactKey(JString arg0, JString arg1, JString arg2) const
	{
		return callObjectMethod(
			"getE2eeContactKey",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/provider/E2eeContactKeysManager$E2eeContactKey;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline android::provider::E2eeContactKeysManager_E2eeSelfKey E2eeContactKeysManager::getE2eeSelfKey(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getE2eeSelfKey",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/provider/E2eeContactKeysManager$E2eeSelfKey;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JObject E2eeContactKeysManager::getOwnerE2eeContactKeys(JString arg0) const
	{
		return callObjectMethod(
			"getOwnerE2eeContactKeys",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0.object<jstring>()
		);
	}
	inline JObject E2eeContactKeysManager::getOwnerE2eeSelfKeys() const
	{
		return callObjectMethod(
			"getOwnerE2eeSelfKeys",
			"()Ljava/util/List;"
		);
	}
	inline jboolean E2eeContactKeysManager::removeE2eeContactKey(JString arg0, JString arg1, JString arg2) const
	{
		return callMethod<jboolean>(
			"removeE2eeContactKey",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline jboolean E2eeContactKeysManager::removeE2eeSelfKey(JString arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"removeE2eeSelfKey",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jboolean E2eeContactKeysManager::updateE2eeContactKeyLocalVerificationState(JString arg0, JString arg1, JString arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"updateE2eeContactKeyLocalVerificationState",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3
		);
	}
	inline jboolean E2eeContactKeysManager::updateE2eeContactKeyRemoteVerificationState(JString arg0, JString arg1, JString arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"updateE2eeContactKeyRemoteVerificationState",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3
		);
	}
	inline jboolean E2eeContactKeysManager::updateE2eeSelfKeyRemoteVerificationState(JString arg0, JString arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"updateE2eeSelfKeyRemoteVerificationState",
			"(Ljava/lang/String;Ljava/lang/String;I)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void E2eeContactKeysManager::updateOrInsertE2eeContactKey(JString arg0, JString arg1, JString arg2, JByteArray arg3) const
	{
		callMethod<void>(
			"updateOrInsertE2eeContactKey",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jbyteArray>()
		);
	}
	inline jboolean E2eeContactKeysManager::updateOrInsertE2eeSelfKey(JString arg0, JString arg1, JByteArray arg2) const
	{
		return callMethod<jboolean>(
			"updateOrInsertE2eeSelfKey",
			"(Ljava/lang/String;Ljava/lang/String;[B)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jbyteArray>()
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
