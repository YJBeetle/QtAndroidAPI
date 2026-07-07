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
	class Credential : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString TYPE_PASSWORD_CREDENTIAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit Credential(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Credential(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Credential(JString arg0, android::os::Bundle arg1);
		
		// Methods
		jint describeContents() const;
		android::os::Bundle getData() const;
		JString getType() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::credentials

