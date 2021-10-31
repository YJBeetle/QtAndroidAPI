#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./ServiceInfo.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony::mbms
{
	class StreamingServiceInfo : public android::telephony::mbms::ServiceInfo
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit StreamingServiceInfo(const char *className, const char *sig, Ts...agv) : android::telephony::mbms::ServiceInfo(className, sig, std::forward<Ts>(agv)...) {}
		StreamingServiceInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::mbms

