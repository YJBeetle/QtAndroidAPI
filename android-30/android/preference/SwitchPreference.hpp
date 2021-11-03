#pragma once

#include "../../JObject.hpp"
#include "./Preference.hpp"
#include "./TwoStatePreference.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}

namespace android::preference
{
	class SwitchPreference : public android::preference::TwoStatePreference
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SwitchPreference(const char *className, const char *sig, Ts...agv) : android::preference::TwoStatePreference(className, sig, std::forward<Ts>(agv)...) {}
		SwitchPreference(QAndroidJniObject obj);
		
		// Constructors
		SwitchPreference(android::content::Context arg0);
		SwitchPreference(android::content::Context arg0, JObject arg1);
		SwitchPreference(android::content::Context arg0, JObject arg1, jint arg2);
		SwitchPreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jstring getSwitchTextOff();
		jstring getSwitchTextOn();
		void setSwitchTextOff(jint arg0);
		void setSwitchTextOff(jstring arg0);
		void setSwitchTextOn(jint arg0);
		void setSwitchTextOn(jstring arg0);
	};
} // namespace android::preference

