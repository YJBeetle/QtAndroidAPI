#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::health::connect::changelog
{
	class ChangeLogTokenRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ChangeLogTokenRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ChangeLogTokenRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JObject getDataOriginFilters() const;
		JObject getRecordTypes() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::health::connect::changelog

