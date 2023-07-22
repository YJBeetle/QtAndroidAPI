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
		
		// QJniObject forward
		template<typename ...Ts> explicit SpellCheckerService_Session(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SpellCheckerService_Session(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SpellCheckerService_Session();
		
		// Methods
		android::os::Bundle getBundle() const;
		JString getLocale() const;
		jint getSupportedAttributes() const;
		void onCancel() const;
		void onClose() const;
		void onCreate() const;
		JArray onGetSentenceSuggestionsMultiple(JArray arg0, jint arg1) const;
		android::view::textservice::SuggestionsInfo onGetSuggestions(android::view::textservice::TextInfo arg0, jint arg1) const;
		JArray onGetSuggestionsMultiple(JArray arg0, jint arg1, jboolean arg2) const;
	};
} // namespace android::service::textservice

