#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Parcel;
}

namespace android::app::job
{
	class JobWorkItem : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		JobWorkItem(QAndroidJniObject obj);
		// Constructors
		JobWorkItem(android::content::Intent &arg0);
		JobWorkItem(android::content::Intent &arg0, jlong &arg1, jlong &arg2);
		JobWorkItem() = default;
		
		// Methods
		jint describeContents();
		jint getDeliveryCount();
		jlong getEstimatedNetworkDownloadBytes();
		jlong getEstimatedNetworkUploadBytes();
		QAndroidJniObject getIntent();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::job

