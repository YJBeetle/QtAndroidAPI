#pragma once

#include "../../JObject.hpp"

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
	class NetworkScanRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint SCAN_TYPE_ONE_SHOT();
		static jint SCAN_TYPE_PERIODIC();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkScanRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkScanRequest(QAndroidJniObject obj);
		
		// Constructors
		NetworkScanRequest(jint arg0, jarray arg1, jint arg2, jint arg3, jboolean arg4, jint arg5, java::util::ArrayList arg6);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jboolean getIncrementalResults();
		jint getIncrementalResultsPeriodicity();
		jint getMaxSearchTime();
		java::util::ArrayList getPlmns();
		jint getScanType();
		jint getSearchPeriodicity();
		jarray getSpecifiers();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

