#pragma once

#include "./Preference.def.hpp"

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
class JObject;

namespace android::preference
{
	class RingtonePreference : public android::preference::Preference
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RingtonePreference(const char *className, const char *sig, Ts...agv) : android::preference::Preference(className, sig, std::forward<Ts>(agv)...) {}
		RingtonePreference(QJniObject obj) : android::preference::Preference(obj) {}
		
		// Constructors
		RingtonePreference(android::content::Context arg0);
		RingtonePreference(android::content::Context arg0, JObject arg1);
		RingtonePreference(android::content::Context arg0, JObject arg1, jint arg2);
		RingtonePreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jint getRingtoneType() const;
		jboolean getShowDefault() const;
		jboolean getShowSilent() const;
		jboolean onActivityResult(jint arg0, jint arg1, android::content::Intent arg2) const;
		void setRingtoneType(jint arg0) const;
		void setShowDefault(jboolean arg0) const;
		void setShowSilent(jboolean arg0) const;
	};
} // namespace android::preference

