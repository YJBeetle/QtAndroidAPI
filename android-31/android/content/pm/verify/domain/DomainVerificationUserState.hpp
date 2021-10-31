#pragma once

#include "../../../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class UserHandle;
}

namespace android::content::pm::verify::domain
{
	class DomainVerificationUserState : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint DOMAIN_STATE_NONE();
		static jint DOMAIN_STATE_SELECTED();
		static jint DOMAIN_STATE_VERIFIED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DomainVerificationUserState(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DomainVerificationUserState(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		__JniBaseClass getHostToStateMap();
		jstring getPackageName();
		android::os::UserHandle getUser();
		jint hashCode();
		jboolean isLinkHandlingAllowed();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm::verify::domain

