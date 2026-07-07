#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::graphics::pdf::content
{
	class PdfPageTextContent : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PdfPageTextContent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PdfPageTextContent(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PdfPageTextContent(JString arg0);
		PdfPageTextContent(JString arg0, JObject arg1);
		
		// Methods
		jint describeContents() const;
		JObject getBounds() const;
		JString getText() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics::pdf::content

