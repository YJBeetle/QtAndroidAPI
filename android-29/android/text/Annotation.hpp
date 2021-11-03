#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::text
{
	class Annotation : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Annotation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Annotation(QJniObject obj);
		
		// Constructors
		Annotation(android::os::Parcel arg0);
		Annotation(jstring arg0, jstring arg1);
		
		// Methods
		jint describeContents();
		jstring getKey();
		jint getSpanTypeId();
		jstring getValue();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text

