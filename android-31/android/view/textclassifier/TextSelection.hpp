#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
namespace android::view::textclassifier
{
	class TextClassification;
}
class JString;

namespace android::view::textclassifier
{
	class TextSelection : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextSelection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextSelection(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jfloat getConfidenceScore(JString arg0) const;
		JString getEntity(jint arg0) const;
		jint getEntityCount() const;
		android::os::Bundle getExtras() const;
		JString getId() const;
		jint getSelectionEndIndex() const;
		jint getSelectionStartIndex() const;
		android::view::textclassifier::TextClassification getTextClassification() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::textclassifier

