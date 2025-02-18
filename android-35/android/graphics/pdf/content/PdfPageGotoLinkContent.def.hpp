#pragma once

#include "../../../../JObject.hpp"

namespace android::graphics::pdf::content
{
	class PdfPageGotoLinkContent_Destination;
}
namespace android::os
{
	class Parcel;
}

namespace android::graphics::pdf::content
{
	class PdfPageGotoLinkContent : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PdfPageGotoLinkContent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PdfPageGotoLinkContent(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PdfPageGotoLinkContent(JObject arg0, android::graphics::pdf::content::PdfPageGotoLinkContent_Destination arg1);
		
		// Methods
		jint describeContents() const;
		JObject getBounds() const;
		android::graphics::pdf::content::PdfPageGotoLinkContent_Destination getDestination() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics::pdf::content

