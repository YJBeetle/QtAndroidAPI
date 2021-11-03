#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::telecom
{
	class PhoneAccountHandle;
}
class JObject;

namespace android::telecom
{
	class PhoneAccountSuggestion : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint REASON_FREQUENT();
		static jint REASON_INTRA_CARRIER();
		static jint REASON_NONE();
		static jint REASON_OTHER();
		static jint REASON_USER_SET();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PhoneAccountSuggestion(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PhoneAccountSuggestion(QAndroidJniObject obj);
		
		// Constructors
		PhoneAccountSuggestion(android::telecom::PhoneAccountHandle arg0, jint arg1, jboolean arg2);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::telecom::PhoneAccountHandle getPhoneAccountHandle() const;
		jint getReason() const;
		jint hashCode() const;
		jboolean shouldAutoSelect() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telecom

