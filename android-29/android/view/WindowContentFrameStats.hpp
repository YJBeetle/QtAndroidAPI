#pragma once

#include "../../__JniBaseClass.hpp"
#include "./FrameStats.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view
{
	class WindowContentFrameStats : public android::view::FrameStats
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WindowContentFrameStats(const char *className, const char *sig, Ts...agv) : android::view::FrameStats(className, sig, std::forward<Ts>(agv)...) {}
		WindowContentFrameStats(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jlong getFramePostedTimeNano(jint arg0);
		jlong getFrameReadyTimeNano(jint arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

