#pragma once

#include "../../../JObject.hpp"

namespace android::app::usage
{
	class UsageEvents_Event;
}
namespace android::os
{
	class Parcel;
}

namespace android::app::usage
{
	class UsageEvents : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UsageEvents(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UsageEvents(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean getNextEvent(android::app::usage::UsageEvents_Event arg0) const;
		jboolean hasNextEvent() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::usage

