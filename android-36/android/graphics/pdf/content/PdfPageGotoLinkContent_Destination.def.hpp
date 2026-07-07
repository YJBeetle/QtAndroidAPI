#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::graphics::pdf::content
{
	class PdfPageGotoLinkContent_Destination : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PdfPageGotoLinkContent_Destination(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PdfPageGotoLinkContent_Destination(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PdfPageGotoLinkContent_Destination(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		
		// Methods
		jint describeContents() const;
		jint getPageNumber() const;
		jfloat getXCoordinate() const;
		jfloat getYCoordinate() const;
		jfloat getZoom() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics::pdf::content

