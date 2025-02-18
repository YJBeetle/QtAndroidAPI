#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::graphics::pdf::content
{
	class PdfPageImageContent : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PdfPageImageContent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PdfPageImageContent(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PdfPageImageContent(JString arg0);
		
		// Methods
		jint describeContents() const;
		JString getAltText() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics::pdf::content

