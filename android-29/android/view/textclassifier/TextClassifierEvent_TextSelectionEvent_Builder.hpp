#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TextClassifierEvent_Builder.hpp"

namespace android::view::textclassifier
{
	class TextClassifierEvent_TextSelectionEvent;
}

namespace android::view::textclassifier
{
	class TextClassifierEvent_TextSelectionEvent_Builder : public android::view::textclassifier::TextClassifierEvent_Builder
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassifierEvent_TextSelectionEvent_Builder(const char *className, const char *sig, Ts...agv) : android::view::textclassifier::TextClassifierEvent_Builder(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifierEvent_TextSelectionEvent_Builder(QAndroidJniObject obj);
		
		// Constructors
		TextClassifierEvent_TextSelectionEvent_Builder(jint arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setRelativeSuggestedWordEndIndex(jint arg0);
		QAndroidJniObject setRelativeSuggestedWordStartIndex(jint arg0);
		QAndroidJniObject setRelativeWordEndIndex(jint arg0);
		QAndroidJniObject setRelativeWordStartIndex(jint arg0);
	};
} // namespace android::view::textclassifier

