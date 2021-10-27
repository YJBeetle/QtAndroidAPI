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
	class TextServicesManager;
}

namespace android::view::textservice
{
	class SpellCheckerSession : public __JniBaseClass
	{
	public:
		// Fields
		static jstring SERVICE_META_DATA();
		
		SpellCheckerSession(QAndroidJniObject obj);
		// Constructors
		SpellCheckerSession() = default;
		
		// Methods
		void cancel();
		void close();
		void getSentenceSuggestions(jarray arg0, jint arg1);
		QAndroidJniObject getSpellChecker();
		void getSuggestions(android::view::textservice::TextInfo arg0, jint arg1);
		void getSuggestions(jarray arg0, jint arg1, jboolean arg2);
		jboolean isSessionDisconnected();
	};
} // namespace android::view::textservice

