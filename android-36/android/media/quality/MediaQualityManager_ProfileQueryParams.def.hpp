#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media::quality
{
	class MediaQualityManager_ProfileQueryParams : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaQualityManager_ProfileQueryParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaQualityManager_ProfileQueryParams(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean areParametersIncluded() const;
		jint describeContents() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::quality

