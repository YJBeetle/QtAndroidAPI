#pragma once

#include "../../__JniBaseClass.hpp"
#include "./FrameStats.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view
{
	class WindowAnimationFrameStats : public android::view::FrameStats
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		WindowAnimationFrameStats(QAndroidJniObject obj);
		// Constructors
		WindowAnimationFrameStats() = default;
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

