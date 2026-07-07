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
	class OpenBlobForWriteResponse : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit OpenBlobForWriteResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OpenBlobForWriteResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		OpenBlobForWriteResponse(android::app::appsearch::AppSearchBatchResult arg0);
		
		// Methods
		void close() const;
		jint describeContents() const;
		android::app::appsearch::AppSearchBatchResult getResult() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::appsearch

