#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class LocusId;
}
namespace android::os
{
	class Parcel;
}

namespace android::view::contentcapture
{
	class ContentCaptureCondition : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_IS_REGEX();
		
		ContentCaptureCondition(QAndroidJniObject obj);
		// Constructors
		ContentCaptureCondition(android::content::LocusId &arg0, jint &arg1);
		ContentCaptureCondition() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getFlags();
		QAndroidJniObject getLocusId();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::contentcapture

