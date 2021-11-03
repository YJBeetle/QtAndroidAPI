#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class DateFormat;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::service::autofill
{
	class DateValueSanitizer : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit DateValueSanitizer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DateValueSanitizer(QJniObject obj);
		
		// Constructors
		DateValueSanitizer(android::icu::text::DateFormat arg0);
		
		// Methods
		jint describeContents();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

