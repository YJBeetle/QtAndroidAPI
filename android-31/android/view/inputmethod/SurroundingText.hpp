#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::inputmethod
{
	class SurroundingText : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SurroundingText(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SurroundingText(QJniObject obj);
		
		// Constructors
		SurroundingText(jstring arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		jint describeContents();
		jint getOffset();
		jint getSelectionEnd();
		jint getSelectionStart();
		jstring getText();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

