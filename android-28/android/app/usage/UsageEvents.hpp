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
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit UsageEvents(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UsageEvents(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean getNextEvent(android::app::usage::UsageEvents_Event arg0);
		jboolean hasNextEvent();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::usage

