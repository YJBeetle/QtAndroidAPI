#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::view::textservice
{
	class SpellCheckerSession;
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
		
		TextServicesManager(QAndroidJniObject obj);
		// Constructors
		TextServicesManager() = default;
		
		// Methods
		QAndroidJniObject newSpellCheckerSession(android::os::Bundle arg0, java::util::Locale arg1, __JniBaseClass arg2, jboolean arg3);
	};
} // namespace android::view::textservice

