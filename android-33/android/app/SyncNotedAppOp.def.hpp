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
		SyncNotedAppOp(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		SyncNotedAppOp(jint arg0, JString arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getAttributionTag() const;
		JString getOp() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

