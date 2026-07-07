#pragma once

#include "../../../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}

namespace android::graphics::pdf::content
{
	class PdfPageLinkContent : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PdfPageLinkContent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PdfPageLinkContent(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PdfPageLinkContent(JObject arg0, android::net::Uri arg1);
		
		// Methods
		jint describeContents() const;
		JObject getBounds() const;
		android::net::Uri getUri() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics::pdf::content

