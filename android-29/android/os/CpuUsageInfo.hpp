#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::os
{
	class CpuUsageInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		CpuUsageInfo(QAndroidJniObject obj);
		// Constructors
		CpuUsageInfo() = default;
		
		// Methods
		jint describeContents();
		jlong getActive();
		jlong getTotal();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

