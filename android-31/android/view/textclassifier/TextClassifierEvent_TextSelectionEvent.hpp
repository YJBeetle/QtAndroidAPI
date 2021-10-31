#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TextClassifierEvent.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::textclassifier
{
	class TextClassifierEvent_TextSelectionEvent : public android::view::textclassifier::TextClassifierEvent
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassifierEvent_TextSelectionEvent(const char *className, const char *sig, Ts...agv) : android::view::textclassifier::TextClassifierEvent(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifierEvent_TextSelectionEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getRelativeSuggestedWordEndIndex();
		jint getRelativeSuggestedWordStartIndex();
		jint getRelativeWordEndIndex();
		jint getRelativeWordStartIndex();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier
