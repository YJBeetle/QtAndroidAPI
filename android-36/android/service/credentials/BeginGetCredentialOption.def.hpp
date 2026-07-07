#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::service::credentials
{
	class BeginGetCredentialOption : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit BeginGetCredentialOption(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BeginGetCredentialOption(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BeginGetCredentialOption(JString arg0, JString arg1, android::os::Bundle arg2);
		
		// Methods
		jint describeContents() const;
		android::os::Bundle getCandidateQueryData() const;
		JString getId() const;
		JString getType() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::credentials

