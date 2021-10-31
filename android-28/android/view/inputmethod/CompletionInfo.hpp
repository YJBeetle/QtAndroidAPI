#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::inputmethod
{
	class CompletionInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CompletionInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CompletionInfo(QAndroidJniObject obj);
		
		// Constructors
		CompletionInfo(jlong arg0, jint arg1, jstring arg2);
		CompletionInfo(jlong arg0, jint arg1, jstring arg2, jstring arg3);
		
		// Methods
		jint describeContents();
		jlong getId();
		jstring getLabel();
		jint getPosition();
		jstring getText();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

