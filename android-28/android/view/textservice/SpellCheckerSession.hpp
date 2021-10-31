#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class SpellCheckerSession : public __JniBaseClass
	{
	public:
		// Fields
		static jstring SERVICE_META_DATA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SpellCheckerSession(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SpellCheckerSession(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void cancel();
		void close();
		void getSentenceSuggestions(jarray arg0, jint arg1);
		android::view::textservice::SpellCheckerInfo getSpellChecker();
		void getSuggestions(android::view::textservice::TextInfo arg0, jint arg1);
		void getSuggestions(jarray arg0, jint arg1, jboolean arg2);
		jboolean isSessionDisconnected();
	};
} // namespace android::view::textservice

