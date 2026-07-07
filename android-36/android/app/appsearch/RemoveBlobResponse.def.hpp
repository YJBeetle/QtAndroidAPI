#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class AppSearchBatchResult;
}
namespace android::os
{
	class Parcel;
}

namespace android::app::appsearch
{
	class RemoveBlobResponse : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoveBlobResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoveBlobResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RemoveBlobResponse(android::app::appsearch::AppSearchBatchResult arg0);
		
		// Methods
		jint describeContents() const;
		android::app::appsearch::AppSearchBatchResult getResult() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::appsearch

