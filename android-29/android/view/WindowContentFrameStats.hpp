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
		
		WindowContentFrameStats(QAndroidJniObject obj);
		// Constructors
		WindowContentFrameStats() = default;
		
		// Methods
		jint describeContents();
		jlong getFramePostedTimeNano(jint arg0);
		jlong getFrameReadyTimeNano(jint arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

