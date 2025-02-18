#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::health::connect::changelog
{
	class ChangeLogsRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ChangeLogsRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ChangeLogsRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getPageSize() const;
		JString getToken() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::health::connect::changelog

