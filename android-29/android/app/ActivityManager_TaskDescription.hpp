#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class ActivityManager_TaskDescription : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		ActivityManager_TaskDescription(QAndroidJniObject obj);
		// Constructors
		ActivityManager_TaskDescription();
		ActivityManager_TaskDescription(android::app::ActivityManager_TaskDescription &arg0);
		ActivityManager_TaskDescription(jstring arg0);
		ActivityManager_TaskDescription(jstring arg0, android::graphics::Bitmap arg1);
		ActivityManager_TaskDescription(jstring arg0, jint arg1);
		ActivityManager_TaskDescription(jstring arg0, android::graphics::Bitmap arg1, jint arg2);
		ActivityManager_TaskDescription(jstring arg0, jint arg1, jint arg2);
		
		// Methods
		jint describeContents();
		QAndroidJniObject getIcon();
		jstring getLabel();
		jint getPrimaryColor();
		void readFromParcel(android::os::Parcel arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

