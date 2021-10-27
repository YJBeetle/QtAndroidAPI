#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TextClassifierEvent.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view::textclassifier
{
	class TextClassifierEvent_TextSelectionEvent_Builder;
}

namespace android::view::textclassifier
{
	class TextClassifierEvent_TextSelectionEvent : public android::view::textclassifier::TextClassifierEvent
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		TextClassifierEvent_TextSelectionEvent(QAndroidJniObject obj);
		// Constructors
		TextClassifierEvent_TextSelectionEvent() = default;
		
		// Methods
		jint getRelativeSuggestedWordEndIndex();
		jint getRelativeSuggestedWordStartIndex();
		jint getRelativeWordEndIndex();
		jint getRelativeWordStartIndex();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

