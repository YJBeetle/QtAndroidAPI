#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JString;

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
		JByteArray crashData();
		JString longMsg();
		jint pid();
		JString processName();
		JString shortMsg();
		JString stackTrace();
		JString tag();
		jint uid();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ActivityManager_ProcessErrorStateInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActivityManager_ProcessErrorStateInfo(QAndroidJniObject obj);
		
		// Constructors
		ActivityManager_ProcessErrorStateInfo();
		
		// Methods
		jint describeContents() const;
		void readFromParcel(android::os::Parcel arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

