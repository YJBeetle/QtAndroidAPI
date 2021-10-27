#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CharacterStyle.hpp"
#include "./ClickableSpan.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view
{
	class View;
}

namespace android::text::style
{
	class URLSpan : public android::text::style::ClickableSpan
	{
	public:
		// Fields
		
		URLSpan(QAndroidJniObject obj);
		// Constructors
		URLSpan(android::os::Parcel &arg0);
		URLSpan(jstring &arg0);
		URLSpan(const QString &arg0);
		URLSpan() = default;
		
		// Methods
		jint describeContents();
		jint getSpanTypeId();
		jstring getURL();
		void onClick(android::view::View arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

