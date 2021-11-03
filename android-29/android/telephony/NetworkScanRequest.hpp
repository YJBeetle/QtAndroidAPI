#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::os
{
	class Parcel;
}
class JObject;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkScanRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkScanRequest(QJniObject obj);
		
		// Constructors
		NetworkScanRequest(jint arg0, JArray arg1, jint arg2, jint arg3, jboolean arg4, jint arg5, java::util::ArrayList arg6);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jboolean getIncrementalResults() const;
		jint getIncrementalResultsPeriodicity() const;
		jint getMaxSearchTime() const;
		java::util::ArrayList getPlmns() const;
		jint getScanType() const;
		jint getSearchPeriodicity() const;
		JArray getSpecifiers() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

