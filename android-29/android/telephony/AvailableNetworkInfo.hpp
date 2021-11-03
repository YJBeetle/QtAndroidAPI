#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class AvailableNetworkInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint PRIORITY_HIGH();
		static jint PRIORITY_LOW();
		static jint PRIORITY_MED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AvailableNetworkInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AvailableNetworkInfo(QAndroidJniObject obj);
		
		// Constructors
		AvailableNetworkInfo(jint arg0, jint arg1, JObject arg2, JObject arg3);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		JObject getBands();
		JObject getMccMncs();
		jint getPriority();
		jint getSubId();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

