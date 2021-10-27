#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::view::textservice
{
	class SuggestionsInfo;
}
namespace android::view::textservice
{
	class TextInfo;
}

namespace android::service::textservice
{
	class SpellCheckerService_Session : public __JniBaseClass
	{
	public:
		// Fields
		
		SpellCheckerService_Session(QAndroidJniObject obj);
		// Constructors
		SpellCheckerService_Session();
		
		// Methods
		QAndroidJniObject getBundle();
		jstring getLocale();
		void onCancel();
		void onClose();
		void onCreate();
		jarray onGetSentenceSuggestionsMultiple(jarray arg0, jint arg1);
		QAndroidJniObject onGetSuggestions(android::view::textservice::TextInfo arg0, jint arg1);
		jarray onGetSuggestionsMultiple(jarray arg0, jint arg1, jboolean arg2);
	};
} // namespace android::service::textservice

