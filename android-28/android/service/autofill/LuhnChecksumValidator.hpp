#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::service::autofill
{
	class LuhnChecksumValidator : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit LuhnChecksumValidator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LuhnChecksumValidator(QJniObject obj);
		
		// Constructors
		LuhnChecksumValidator(JArray arg0);
		
		// Methods
		jint describeContents();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

