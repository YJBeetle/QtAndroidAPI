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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DataRemovalRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DataRemovalRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		QAndroidJniObject getLocusIdRequests();
		jstring getPackageName();
		jboolean isForEverything();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::contentcapture

