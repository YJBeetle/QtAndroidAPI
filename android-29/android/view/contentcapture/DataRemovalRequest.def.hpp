#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view::contentcapture
{
	class DataRemovalRequest_Builder;
}
class JString;

namespace android::view::contentcapture
{
	class DataRemovalRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_IS_PREFIX();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DataRemovalRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DataRemovalRequest(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JObject getLocusIdRequests() const;
		JString getPackageName() const;
		jboolean isForEverything() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::contentcapture

