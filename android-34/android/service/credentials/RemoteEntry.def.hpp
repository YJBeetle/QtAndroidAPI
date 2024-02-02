#pragma once

#include "../../../JObject.hpp"

namespace android::app::slice
{
	class Slice;
}
namespace android::os
{
	class Parcel;
}

namespace android::service::credentials
{
	class RemoteEntry : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteEntry(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteEntry(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RemoteEntry(android::app::slice::Slice arg0);
		
		// Methods
		jint describeContents() const;
		android::app::slice::Slice getSlice() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::credentials

