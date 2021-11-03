#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::inputmethod
{
	class ExtractedTextRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		jint flags();
		jint hintMaxChars();
		jint hintMaxLines();
		jint token();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ExtractedTextRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExtractedTextRequest(QAndroidJniObject obj);
		
		// Constructors
		ExtractedTextRequest();
		
		// Methods
		jint describeContents();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

