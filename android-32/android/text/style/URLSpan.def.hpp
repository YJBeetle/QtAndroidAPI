#pragma once

#include "./ClickableSpan.def.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view
{
	class View;
}
class JString;

namespace android::text::style
{
	class URLSpan : public android::text::style::ClickableSpan
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit URLSpan(const char *className, const char *sig, Ts...agv) : android::text::style::ClickableSpan(className, sig, std::forward<Ts>(agv)...) {}
		URLSpan(QJniObject obj) : android::text::style::ClickableSpan(obj) {}
		
		// Constructors
		URLSpan(android::os::Parcel arg0);
		URLSpan(JString arg0);
		
		// Methods
		jint describeContents() const;
		jint getSpanTypeId() const;
		JString getURL() const;
		void onClick(android::view::View arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::text::style

