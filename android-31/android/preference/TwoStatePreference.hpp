#pragma once

#include "../../JObject.hpp"
#include "./Preference.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class TypedArray;
}

namespace android::preference
{
	class TwoStatePreference : public android::preference::Preference
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TwoStatePreference(const char *className, const char *sig, Ts...agv) : android::preference::Preference(className, sig, std::forward<Ts>(agv)...) {}
		TwoStatePreference(QAndroidJniObject obj);
		
		// Constructors
		TwoStatePreference(android::content::Context arg0);
		TwoStatePreference(android::content::Context arg0, JObject arg1);
		TwoStatePreference(android::content::Context arg0, JObject arg1, jint arg2);
		TwoStatePreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean getDisableDependentsState();
		jstring getSummaryOff();
		jstring getSummaryOn();
		jboolean isChecked();
		void setChecked(jboolean arg0);
		void setDisableDependentsState(jboolean arg0);
		void setSummaryOff(jint arg0);
		void setSummaryOff(jstring arg0);
		void setSummaryOn(jint arg0);
		void setSummaryOn(jstring arg0);
		jboolean shouldDisableDependents();
	};
} // namespace android::preference

