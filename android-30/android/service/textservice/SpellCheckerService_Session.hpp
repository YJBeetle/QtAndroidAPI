#pragma once

#include "../../../JObject.hpp"

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
	class SpellCheckerService_Session : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SpellCheckerService_Session(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SpellCheckerService_Session(QJniObject obj);
		
		// Constructors
		SpellCheckerService_Session();
		
		// Methods
		android::os::Bundle getBundle();
		jstring getLocale();
		void onCancel();
		void onClose();
		void onCreate();
		jarray onGetSentenceSuggestionsMultiple(jarray arg0, jint arg1);
		android::view::textservice::SuggestionsInfo onGetSuggestions(android::view::textservice::TextInfo arg0, jint arg1);
		jarray onGetSuggestionsMultiple(jarray arg0, jint arg1, jboolean arg2);
	};
} // namespace android::service::textservice

