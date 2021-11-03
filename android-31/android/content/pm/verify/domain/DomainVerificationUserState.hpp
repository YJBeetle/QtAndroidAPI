#pragma once

#include "../../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class UserHandle;
}
class JObject;
class JString;

namespace android::content::pm::verify::domain
{
	class DomainVerificationUserState : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint DOMAIN_STATE_NONE();
		static jint DOMAIN_STATE_SELECTED();
		static jint DOMAIN_STATE_VERIFIED();
		
		// QJniObject forward
		template<typename ...Ts> explicit DomainVerificationUserState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DomainVerificationUserState(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getHostToStateMap() const;
		JString getPackageName() const;
		android::os::UserHandle getUser() const;
		jint hashCode() const;
		jboolean isLinkHandlingAllowed() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm::verify::domain

