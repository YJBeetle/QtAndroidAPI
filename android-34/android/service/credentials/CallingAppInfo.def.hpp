#pragma once

#include "../../../JObject.hpp"

namespace android::content::pm
{
	class SigningInfo;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::service::credentials
{
	class CallingAppInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CallingAppInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CallingAppInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CallingAppInfo(JString arg0, android::content::pm::SigningInfo arg1);
		CallingAppInfo(JString arg0, android::content::pm::SigningInfo arg1, JString arg2);
		
		// Methods
		jint describeContents() const;
		JString getOrigin() const;
		JString getPackageName() const;
		android::content::pm::SigningInfo getSigningInfo() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::credentials

