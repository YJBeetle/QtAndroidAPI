#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view::contentcapture
{
	class DataRemovalRequest_Builder;
}

namespace android::view::contentcapture
{
	class DataRemovalRequest : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_IS_PREFIX();
		
		DataRemovalRequest(QAndroidJniObject obj);
		// Constructors
		DataRemovalRequest() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getLocusIdRequests();
		jstring getPackageName();
		jboolean isForEverything();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::contentcapture

