#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::util
{
	class ArrayList;
}

namespace android::telephony
{
	class NetworkScanRequest : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint SCAN_TYPE_ONE_SHOT();
		static jint SCAN_TYPE_PERIODIC();
		
		NetworkScanRequest(QAndroidJniObject obj);
		// Constructors
		NetworkScanRequest(jint &arg0, jarray &arg1, jint &arg2, jint &arg3, jboolean &arg4, jint &arg5, java::util::ArrayList &arg6);
		NetworkScanRequest() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jboolean getIncrementalResults();
		jint getIncrementalResultsPeriodicity();
		jint getMaxSearchTime();
		QAndroidJniObject getPlmns();
		jint getScanType();
		jint getSearchPeriodicity();
		jarray getSpecifiers();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

