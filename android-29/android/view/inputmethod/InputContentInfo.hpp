#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class ClipDescription;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}

namespace android::view::inputmethod
{
	class InputContentInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputContentInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InputContentInfo(QAndroidJniObject obj);
		
		// Constructors
		InputContentInfo(android::net::Uri arg0, android::content::ClipDescription arg1);
		InputContentInfo(android::net::Uri arg0, android::content::ClipDescription arg1, android::net::Uri arg2);
		
		// Methods
		jint describeContents();
		QAndroidJniObject getContentUri();
		QAndroidJniObject getDescription();
		QAndroidJniObject getLinkUri();
		void releasePermission();
		void requestPermission();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

