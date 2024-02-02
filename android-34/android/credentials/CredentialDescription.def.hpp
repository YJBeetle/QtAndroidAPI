#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::credentials
{
	class CredentialDescription : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CredentialDescription(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CredentialDescription(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CredentialDescription(JString arg0, JObject arg1, JObject arg2);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getCredentialEntries() const;
		JObject getSupportedElementKeys() const;
		JString getType() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::credentials

