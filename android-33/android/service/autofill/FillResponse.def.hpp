#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::service::autofill
{
	class FillResponse : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_DELAY_FILL();
		static jint FLAG_DISABLE_ACTIVITY_ONLY();
		static jint FLAG_TRACK_CONTEXT_COMMITED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FillResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FillResponse(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::autofill

