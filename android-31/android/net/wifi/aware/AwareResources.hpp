#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::aware
{
	class AwareResources : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AwareResources(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AwareResources(QJniObject obj);
		
		// Constructors
		AwareResources(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jint describeContents();
		jint getAvailableDataPathsCount();
		jint getAvailablePublishSessionsCount();
		jint getAvailableSubscribeSessionsCount();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::aware

