#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class ActivityManager_ProcessErrorStateInfo : public JObject
	{
	public:
		// Fields
		static jint CRASHED();
		static JObject CREATOR();
		static jint NOT_RESPONDING();
		static jint NO_ERROR();
		jint condition();
		jbyteArray crashData();
		jstring longMsg();
		jint pid();
		jstring processName();
		jstring shortMsg();
		jstring stackTrace();
		jstring tag();
		jint uid();
		
		// QJniObject forward
		template<typename ...Ts> explicit ActivityManager_ProcessErrorStateInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActivityManager_ProcessErrorStateInfo(QJniObject obj);
		
		// Constructors
		ActivityManager_ProcessErrorStateInfo();
		
		// Methods
		jint describeContents();
		void readFromParcel(android::os::Parcel arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

