#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::provider
{
	class ContactsContract_SimAccount : public JObject
	{
	public:
		// Fields
		static jint ADN_EF_TYPE();
		static JObject CREATOR();
		static jint FDN_EF_TYPE();
		static jint SDN_EF_TYPE();
		static jint UNKNOWN_EF_TYPE();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_SimAccount(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_SimAccount(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getAccountName() const;
		JString getAccountType() const;
		jint getEfType() const;
		jint getSimSlotIndex() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::provider

