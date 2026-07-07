#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::provider
{
	class E2eeContactKeysManager_E2eeContactKey;
}
namespace android::provider
{
	class E2eeContactKeysManager_E2eeSelfKey;
}
class JString;

namespace android::provider
{
	class E2eeContactKeysManager : public JObject
	{
	public:
		// Fields
		static jint VERIFICATION_STATE_UNVERIFIED();
		static jint VERIFICATION_STATE_VERIFICATION_FAILED();
		static jint VERIFICATION_STATE_VERIFIED();
		
		// QJniObject forward
		template<typename ...Ts> explicit E2eeContactKeysManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		E2eeContactKeysManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jint getMaxKeySizeBytes();
		JObject getAllE2eeContactKeys(JString arg0) const;
		JObject getAllE2eeSelfKeys() const;
		android::provider::E2eeContactKeysManager_E2eeContactKey getE2eeContactKey(JString arg0, JString arg1, JString arg2) const;
		android::provider::E2eeContactKeysManager_E2eeSelfKey getE2eeSelfKey(JString arg0, JString arg1) const;
		JObject getOwnerE2eeContactKeys(JString arg0) const;
		JObject getOwnerE2eeSelfKeys() const;
		jboolean removeE2eeContactKey(JString arg0, JString arg1, JString arg2) const;
		jboolean removeE2eeSelfKey(JString arg0, JString arg1) const;
		jboolean updateE2eeContactKeyLocalVerificationState(JString arg0, JString arg1, JString arg2, jint arg3) const;
		jboolean updateE2eeContactKeyRemoteVerificationState(JString arg0, JString arg1, JString arg2, jint arg3) const;
		jboolean updateE2eeSelfKeyRemoteVerificationState(JString arg0, JString arg1, jint arg2) const;
		void updateOrInsertE2eeContactKey(JString arg0, JString arg1, JString arg2, JByteArray arg3) const;
		jboolean updateOrInsertE2eeSelfKey(JString arg0, JString arg1, JByteArray arg2) const;
	};
} // namespace android::provider

