#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app::job
{
	class JobWorkItem : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit JobWorkItem(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JobWorkItem(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		JobWorkItem(android::content::Intent arg0);
		JobWorkItem(android::content::Intent arg0, jlong arg1, jlong arg2);
		
		// Methods
		jint describeContents() const;
		jint getDeliveryCount() const;
		jlong getEstimatedNetworkDownloadBytes() const;
		jlong getEstimatedNetworkUploadBytes() const;
		android::content::Intent getIntent() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::job

