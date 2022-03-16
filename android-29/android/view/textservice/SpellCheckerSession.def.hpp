#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::view::textservice
{
	class SpellCheckerInfo;
}
namespace android::view::textservice
{
	class TextInfo;
}
namespace android::view::textservice
{
	class TextServicesManager;
}
class JString;

namespace android::view::textservice
{
	class SpellCheckerSession : public JObject
	{
	public:
		// Fields
		static JString SERVICE_META_DATA();
		
		// QJniObject forward
		template<typename ...Ts> explicit SpellCheckerSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SpellCheckerSession(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void cancel() const;
		void close() const;
		void getSentenceSuggestions(JArray arg0, jint arg1) const;
		android::view::textservice::SpellCheckerInfo getSpellChecker() const;
		void getSuggestions(android::view::textservice::TextInfo arg0, jint arg1) const;
		void getSuggestions(JArray arg0, jint arg1, jboolean arg2) const;
		jboolean isSessionDisconnected() const;
	};
} // namespace android::view::textservice

