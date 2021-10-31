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
		
		// QJniObject forward
		template<typename ...Ts> explicit URLSpan(const char *className, const char *sig, Ts...agv) : android::text::style::ClickableSpan(className, sig, std::forward<Ts>(agv)...) {}
		URLSpan(QJniObject obj);
		
		// Constructors
		URLSpan(android::os::Parcel arg0);
		URLSpan(jstring arg0);
		
		// Methods
		jint describeContents();
		jint getSpanTypeId();
		jstring getURL();
		void onClick(android::view::View arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

