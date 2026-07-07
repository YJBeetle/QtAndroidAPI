#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::provider
{
	class E2eeContactKeysManager_E2eeContactKey : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit E2eeContactKeysManager_E2eeContactKey(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		E2eeContactKeysManager_E2eeContactKey(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getAccountId() const;
		JString getDeviceId() const;
		JString getDisplayName() const;
		JString getEmailAddress() const;
		JByteArray getKeyValue() const;
		jint getLocalVerificationState() const;
		JString getOwnerPackageName() const;
		JString getPhoneNumber() const;
		jint getRemoteVerificationState() const;
		jlong getTimeUpdated() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::provider

