#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class ApplicationErrorReport_RunningServiceInfo : public JObject
	{
	public:
		// Fields
		jlong durationMillis();
		jstring serviceDetails();
		
		// QJniObject forward
		template<typename ...Ts> explicit ApplicationErrorReport_RunningServiceInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationErrorReport_RunningServiceInfo(QJniObject obj);
		
		// Constructors
		ApplicationErrorReport_RunningServiceInfo();
		ApplicationErrorReport_RunningServiceInfo(android::os::Parcel arg0);
		
		// Methods
		void dump(JObject arg0, jstring arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

