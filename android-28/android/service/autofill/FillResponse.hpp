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
class JString;

namespace android::service::autofill
{
	class FillResponse : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_DISABLE_ACTIVITY_ONLY();
		static jint FLAG_TRACK_CONTEXT_COMMITED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FillResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FillResponse(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

