#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::view::textservice
{
	class SpellCheckerSession_SpellCheckerSessionParams;
}
namespace java::util
{
	class Locale;
}

namespace android::view::textservice
{
	class SpellCheckerSession_SpellCheckerSessionParams_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SpellCheckerSession_SpellCheckerSessionParams_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SpellCheckerSession_SpellCheckerSessionParams_Builder(QAndroidJniObject obj);
		
		// Constructors
		SpellCheckerSession_SpellCheckerSessionParams_Builder();
		
		// Methods
		android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams build();
		android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder setExtras(android::os::Bundle arg0);
		android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder setLocale(java::util::Locale arg0);
		android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder setShouldReferToSpellCheckerLanguageSettings(jboolean arg0);
		android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder setSupportedAttributes(jint arg0);
	};
} // namespace android::view::textservice

