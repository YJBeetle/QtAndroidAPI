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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SpellCheckerSession_SpellCheckerSessionParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SpellCheckerSession_SpellCheckerSessionParams(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::os::Bundle getExtras() const;
		java::util::Locale getLocale() const;
		jint getSupportedAttributes() const;
		jboolean shouldReferToSpellCheckerLanguageSettings() const;
	};
} // namespace android::view::textservice

