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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TwoStatePreference(const char *className, const char *sig, Ts...agv) : android::preference::Preference(className, sig, std::forward<Ts>(agv)...) {}
		TwoStatePreference(QAndroidJniObject obj) : android::preference::Preference(obj) {}
		
		// Constructors
		TwoStatePreference(android::content::Context arg0);
		TwoStatePreference(android::content::Context arg0, JObject arg1);
		TwoStatePreference(android::content::Context arg0, JObject arg1, jint arg2);
		TwoStatePreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean getDisableDependentsState() const;
		JString getSummaryOff() const;
		JString getSummaryOn() const;
		jboolean isChecked() const;
		void setChecked(jboolean arg0) const;
		void setDisableDependentsState(jboolean arg0) const;
		void setSummaryOff(jint arg0) const;
		void setSummaryOff(JString arg0) const;
		void setSummaryOn(jint arg0) const;
		void setSummaryOn(JString arg0) const;
		jboolean shouldDisableDependents() const;
	};
} // namespace android::preference

