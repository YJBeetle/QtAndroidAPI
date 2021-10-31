#pragma once

#include "../../../__JniBaseClass.hpp"

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

namespace android::view::textclassifier
{
	class TextSelection : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextSelection(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextSelection(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jfloat getConfidenceScore(jstring arg0);
		jstring getEntity(jint arg0);
		jint getEntityCount();
		android::os::Bundle getExtras();
		jstring getId();
		jint getSelectionEndIndex();
		jint getSelectionStartIndex();
		android::view::textclassifier::TextClassification getTextClassification();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

