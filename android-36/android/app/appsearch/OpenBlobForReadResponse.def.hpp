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
	class OpenBlobForReadResponse : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit OpenBlobForReadResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OpenBlobForReadResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		OpenBlobForReadResponse(android::app::appsearch::AppSearchBatchResult arg0);
		
		// Methods
		void close() const;
		jint describeContents() const;
		android::app::appsearch::AppSearchBatchResult getResult() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::appsearch

