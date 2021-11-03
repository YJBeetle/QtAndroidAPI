#pragma once

#include "./Preference.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class TypedArray;
}
class JString;
class JObject;

namespace android::preference
{
	class TwoStatePreference : public android::preference::Preference
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TwoStatePreference(const char *className, const char *sig, Ts...agv) : android::preference::Preference(className, sig, std::forward<Ts>(agv)...) {}
		TwoStatePreference(QJniObject obj);
		
		// Constructors
		TwoStatePreference(android::content::Context arg0);
		TwoStatePreference(android::content::Context arg0, JObject arg1);
		TwoStatePreference(android::content::Context arg0, JObject arg1, jint arg2);
		TwoStatePreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean getDisableDependentsState();
		JString getSummaryOff();
		JString getSummaryOn();
		jboolean isChecked();
		void setChecked(jboolean arg0);
		void setDisableDependentsState(jboolean arg0);
		void setSummaryOff(jint arg0);
		void setSummaryOff(JString arg0);
		void setSummaryOn(jint arg0);
		void setSummaryOn(JString arg0);
		jboolean shouldDisableDependents();
	};
} // namespace android::preference

