#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::usage
{
	class StorageStats : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		StorageStats(QAndroidJniObject obj);
		// Constructors
		StorageStats() = default;
		
		// Methods
		jint describeContents();
		jlong getAppBytes();
		jlong getCacheBytes();
		jlong getDataBytes();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::usage

