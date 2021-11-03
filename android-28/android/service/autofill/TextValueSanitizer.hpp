#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
namespace java::util::regex
{
	class Pattern;
}

namespace android::service::autofill
{
	class TextValueSanitizer : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextValueSanitizer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextValueSanitizer(QAndroidJniObject obj);
		
		// Constructors
		TextValueSanitizer(java::util::regex::Pattern arg0, JString arg1);
		
		// Methods
		jint describeContents() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::autofill

