#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::inputmethod
{
	class ExtractedTextRequest : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		jint flags();
		jint hintMaxChars();
		jint hintMaxLines();
		jint token();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ExtractedTextRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ExtractedTextRequest(QAndroidJniObject obj);
		
		// Constructors
		ExtractedTextRequest();
		
		// Methods
		jint describeContents();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

