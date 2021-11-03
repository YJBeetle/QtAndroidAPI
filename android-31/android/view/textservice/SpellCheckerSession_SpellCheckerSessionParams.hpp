#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace java::util
{
	class Locale;
}

namespace android::view::textservice
{
	class SpellCheckerSession_SpellCheckerSessionParams : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SpellCheckerSession_SpellCheckerSessionParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SpellCheckerSession_SpellCheckerSessionParams(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::os::Bundle getExtras();
		java::util::Locale getLocale();
		jint getSupportedAttributes();
		jboolean shouldReferToSpellCheckerLanguageSettings();
	};
} // namespace android::view::textservice

