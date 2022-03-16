#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app::usage
{
	class UsageStats : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit UsageStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UsageStats(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		UsageStats(android::app::usage::UsageStats &arg0);
		
		// Methods
		void add(android::app::usage::UsageStats arg0) const;
		jint describeContents() const;
		jlong getFirstTimeStamp() const;
		jlong getLastTimeForegroundServiceUsed() const;
		jlong getLastTimeStamp() const;
		jlong getLastTimeUsed() const;
		jlong getLastTimeVisible() const;
		JString getPackageName() const;
		jlong getTotalTimeForegroundServiceUsed() const;
		jlong getTotalTimeInForeground() const;
		jlong getTotalTimeVisible() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::usage

