#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::telecom
{
	class PhoneAccountHandle;
}

namespace android::telecom
{
	class PhoneAccountSuggestion : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint REASON_FREQUENT();
		static jint REASON_INTRA_CARRIER();
		static jint REASON_NONE();
		static jint REASON_OTHER();
		static jint REASON_USER_SET();
		
		// QJniObject forward
		template<typename ...Ts> explicit PhoneAccountSuggestion(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PhoneAccountSuggestion(QJniObject obj);
		
		// Constructors
		PhoneAccountSuggestion(android::telecom::PhoneAccountHandle arg0, jint arg1, jboolean arg2);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::telecom::PhoneAccountHandle getPhoneAccountHandle();
		jint getReason();
		jint hashCode();
		jboolean shouldAutoSelect();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telecom

