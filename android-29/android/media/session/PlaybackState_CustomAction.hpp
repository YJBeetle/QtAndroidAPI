#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::media::session
{
	class PlaybackState_CustomAction : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		PlaybackState_CustomAction(QAndroidJniObject obj);
		// Constructors
		PlaybackState_CustomAction() = default;
		
		// Methods
		jint describeContents();
		jstring getAction();
		QAndroidJniObject getExtras();
		jint getIcon();
		jstring getName();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::session

