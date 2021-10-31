#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class TextServicesManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextServicesManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextServicesManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::view::textservice::SpellCheckerInfo getCurrentSpellCheckerInfo();
		__JniBaseClass getEnabledSpellCheckerInfos();
		jboolean isSpellCheckerEnabled();
		android::view::textservice::SpellCheckerSession newSpellCheckerSession(android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		android::view::textservice::SpellCheckerSession newSpellCheckerSession(android::os::Bundle arg0, java::util::Locale arg1, __JniBaseClass arg2, jboolean arg3);
	};
} // namespace android::view::textservice

