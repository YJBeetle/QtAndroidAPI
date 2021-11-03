#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
class JArray;
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
class JString;

namespace android::service::textservice
{
	class SpellCheckerService_Session : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SpellCheckerService_Session(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SpellCheckerService_Session(QAndroidJniObject obj);
		
		// Constructors
		SpellCheckerService_Session();
		
		// Methods
		android::os::Bundle getBundle();
		JString getLocale();
		jint getSupportedAttributes();
		void onCancel();
		void onClose();
		void onCreate();
		JArray onGetSentenceSuggestionsMultiple(JArray arg0, jint arg1);
		android::view::textservice::SuggestionsInfo onGetSuggestions(android::view::textservice::TextInfo arg0, jint arg1);
		JArray onGetSuggestionsMultiple(JArray arg0, jint arg1, jboolean arg2);
	};
} // namespace android::service::textservice

