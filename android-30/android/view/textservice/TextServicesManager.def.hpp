#pragma once

#include "../../../JObject.hpp"

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
	class TextServicesManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextServicesManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextServicesManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::view::textservice::SpellCheckerSession newSpellCheckerSession(android::os::Bundle arg0, java::util::Locale arg1, JObject arg2, jboolean arg3) const;
	};
} // namespace android::view::textservice

