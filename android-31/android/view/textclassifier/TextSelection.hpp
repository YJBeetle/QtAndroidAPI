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
		jint describeContents();
		jfloat getConfidenceScore(JString arg0);
		JString getEntity(jint arg0);
		jint getEntityCount();
		android::os::Bundle getExtras();
		JString getId();
		jint getSelectionEndIndex();
		jint getSelectionStartIndex();
		android::view::textclassifier::TextClassification getTextClassification();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

