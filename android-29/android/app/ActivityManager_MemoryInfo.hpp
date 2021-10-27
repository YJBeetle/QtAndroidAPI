#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class ActivityManager_MemoryInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jlong availMem();
		jboolean lowMemory();
		jlong threshold();
		jlong totalMem();
		
		ActivityManager_MemoryInfo(QAndroidJniObject obj);
		// Constructors
		ActivityManager_MemoryInfo();
		
		// Methods
		jint describeContents();
		void readFromParcel(android::os::Parcel arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

