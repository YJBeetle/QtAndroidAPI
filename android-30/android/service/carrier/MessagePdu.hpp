#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::service::carrier
{
	class MessagePdu : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MessagePdu(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MessagePdu(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		MessagePdu(JObject arg0);
		
		// Methods
		jint describeContents() const;
		JObject getPdus() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::carrier

