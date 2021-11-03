#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::service::autofill
{
	class FillResponse_Builder;
}

namespace android::service::autofill
{
	class FillResponse : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_DISABLE_ACTIVITY_ONLY();
		static jint FLAG_TRACK_CONTEXT_COMMITED();
		
		// QJniObject forward
		template<typename ...Ts> explicit FillResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FillResponse(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

