#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::view::textservice
{
	class SpellCheckerInfo;
}
namespace android::view::textservice
{
	class SpellCheckerSession;
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
	class TextServicesManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextServicesManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextServicesManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::view::textservice::SpellCheckerInfo getCurrentSpellCheckerInfo();
		JObject getEnabledSpellCheckerInfos();
		jboolean isSpellCheckerEnabled();
		android::view::textservice::SpellCheckerSession newSpellCheckerSession(android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams arg0, JObject arg1, JObject arg2);
		android::view::textservice::SpellCheckerSession newSpellCheckerSession(android::os::Bundle arg0, java::util::Locale arg1, JObject arg2, jboolean arg3);
	};
} // namespace android::view::textservice

