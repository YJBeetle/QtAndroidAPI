#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class LocusId;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
namespace android::view::contentcapture
{
	class ContentCaptureContext_Builder;
}

namespace android::view::contentcapture
{
	class ContentCaptureContext : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		ContentCaptureContext(QAndroidJniObject obj);
		// Constructors
		ContentCaptureContext() = default;
		
		// Methods
		static QAndroidJniObject forLocusId(jstring arg0);
		static QAndroidJniObject forLocusId(const QString &arg0);
		jint describeContents();
		QAndroidJniObject getExtras();
		QAndroidJniObject getLocusId();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::contentcapture

