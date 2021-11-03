#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::app
{
	class SyncNotedAppOp : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SyncNotedAppOp(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SyncNotedAppOp(QAndroidJniObject obj);
		
		// Constructors
		SyncNotedAppOp(jint arg0, JString arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		JString getAttributionTag();
		JString getOp();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

