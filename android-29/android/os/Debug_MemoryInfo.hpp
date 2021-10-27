#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::os
{
	class Debug_MemoryInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jint dalvikPrivateDirty();
		jint dalvikPss();
		jint dalvikSharedDirty();
		jint nativePrivateDirty();
		jint nativePss();
		jint nativeSharedDirty();
		jint otherPrivateDirty();
		jint otherPss();
		jint otherSharedDirty();
		
		Debug_MemoryInfo(QAndroidJniObject obj);
		// Constructors
		Debug_MemoryInfo();
		
		// Methods
		jint describeContents();
		jstring getMemoryStat(jstring arg0);
		jstring getMemoryStat(const QString &arg0);
		QAndroidJniObject getMemoryStats();
		jint getTotalPrivateClean();
		jint getTotalPrivateDirty();
		jint getTotalPss();
		jint getTotalSharedClean();
		jint getTotalSharedDirty();
		jint getTotalSwappablePss();
		void readFromParcel(android::os::Parcel arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

