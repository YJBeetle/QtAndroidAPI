#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		TwoStatePreference(QAndroidJniObject obj);
		// Constructors
		TwoStatePreference(android::content::Context &arg0);
		TwoStatePreference(android::content::Context &arg0, __JniBaseClass &arg1);
		TwoStatePreference(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		TwoStatePreference(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3);
		TwoStatePreference() = default;
		
		// Methods
		jboolean getDisableDependentsState();
		jstring getSummaryOff();
		jstring getSummaryOn();
		jboolean isChecked();
		void setChecked(jboolean arg0);
		void setDisableDependentsState(jboolean arg0);
		void setSummaryOff(jint arg0);
		void setSummaryOff(jstring arg0);
		void setSummaryOff(const QString &arg0);
		void setSummaryOn(jint arg0);
		void setSummaryOn(jstring arg0);
		void setSummaryOn(const QString &arg0);
		jboolean shouldDisableDependents();
	};
} // namespace android::preference

