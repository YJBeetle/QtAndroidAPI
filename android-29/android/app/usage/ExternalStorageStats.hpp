#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::usage
{
	class ExternalStorageStats : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		ExternalStorageStats(QAndroidJniObject obj);
		// Constructors
		ExternalStorageStats() = default;
		
		// Methods
		jint describeContents();
		jlong getAppBytes();
		jlong getAudioBytes();
		jlong getImageBytes();
		jlong getTotalBytes();
		jlong getVideoBytes();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::usage

