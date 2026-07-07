#pragma once

#include "./TwoStatePreference.def.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}
class JString;

namespace android::preference
{
	class SwitchPreference : public android::preference::TwoStatePreference
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SwitchPreference(const char *className, const char *sig, Ts...agv) : android::preference::TwoStatePreference(className, sig, std::forward<Ts>(agv)...) {}
		SwitchPreference(QJniObject obj) : android::preference::TwoStatePreference(obj) {}
		
		// Constructors
		SwitchPreference(android::content::Context arg0);
		SwitchPreference(android::content::Context arg0, JObject arg1);
		SwitchPreference(android::content::Context arg0, JObject arg1, jint arg2);
		SwitchPreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		JString getSwitchTextOff() const;
		JString getSwitchTextOn() const;
		void setSwitchTextOff(jint arg0) const;
		void setSwitchTextOff(JString arg0) const;
		void setSwitchTextOn(jint arg0) const;
		void setSwitchTextOn(JString arg0) const;
	};
} // namespace android::preference

