#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi
{
	class WifiNetworkSuggestion : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiNetworkSuggestion(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiNetworkSuggestion(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

