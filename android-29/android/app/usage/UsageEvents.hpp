#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class UsageEvents : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		UsageEvents(QAndroidJniObject obj);
		// Constructors
		UsageEvents() = default;
		
		// Methods
		jint describeContents();
		jboolean getNextEvent(android::app::usage::UsageEvents_Event arg0);
		jboolean hasNextEvent();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::usage

