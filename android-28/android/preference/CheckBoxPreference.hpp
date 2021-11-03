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
	class CheckBoxPreference : public android::preference::TwoStatePreference
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CheckBoxPreference(const char *className, const char *sig, Ts...agv) : android::preference::TwoStatePreference(className, sig, std::forward<Ts>(agv)...) {}
		CheckBoxPreference(QJniObject obj);
		
		// Constructors
		CheckBoxPreference(android::content::Context arg0);
		CheckBoxPreference(android::content::Context arg0, JObject arg1);
		CheckBoxPreference(android::content::Context arg0, JObject arg1, jint arg2);
		CheckBoxPreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
	};
} // namespace android::preference

