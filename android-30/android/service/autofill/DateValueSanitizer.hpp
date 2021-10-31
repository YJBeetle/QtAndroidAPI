#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class DateFormat;
}
namespace android::os
{
	class Parcel;
}

namespace android::service::autofill
{
	class DateValueSanitizer : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit DateValueSanitizer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DateValueSanitizer(QJniObject obj);
		
		// Constructors
		DateValueSanitizer(android::icu::text::DateFormat arg0);
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

