#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::credentials
{
	class CreateCredentialResponse : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CreateCredentialResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CreateCredentialResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CreateCredentialResponse(android::os::Bundle arg0);
		
		// Methods
		jint describeContents() const;
		android::os::Bundle getData() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::credentials

