#pragma once

#include "../../JObject.hpp"
#include "./Preference.hpp"

namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::content::res
{
	class TypedArray;
}
namespace android::net
{
	class Uri;
}
namespace android::preference
{
	class PreferenceManager;
}

namespace android::preference
{
	class RingtonePreference : public android::preference::Preference
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RingtonePreference(const char *className, const char *sig, Ts...agv) : android::preference::Preference(className, sig, std::forward<Ts>(agv)...) {}
		RingtonePreference(QJniObject obj);
		
		// Constructors
		RingtonePreference(android::content::Context arg0);
		RingtonePreference(android::content::Context arg0, JObject arg1);
		RingtonePreference(android::content::Context arg0, JObject arg1, jint arg2);
		RingtonePreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jint getRingtoneType();
		jboolean getShowDefault();
		jboolean getShowSilent();
		jboolean onActivityResult(jint arg0, jint arg1, android::content::Intent arg2);
		void setRingtoneType(jint arg0);
		void setShowDefault(jboolean arg0);
		void setShowSilent(jboolean arg0);
	};
} // namespace android::preference

