#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net
{
	class CaptivePortal : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CaptivePortal(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CaptivePortal(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		void ignoreNetwork();
		void reportCaptivePortalDismissed();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

