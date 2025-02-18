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
	class Action : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit Action(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Action(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Action(android::app::slice::Slice arg0);
		
		// Methods
		jint describeContents() const;
		android::app::slice::Slice getSlice() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::credentials

