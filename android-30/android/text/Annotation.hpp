#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::text
{
	class Annotation : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Annotation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Annotation(QAndroidJniObject obj);
		
		// Constructors
		Annotation(android::os::Parcel arg0);
		Annotation(JString arg0, JString arg1);
		
		// Methods
		jint describeContents();
		JString getKey();
		jint getSpanTypeId();
		JString getValue();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text

