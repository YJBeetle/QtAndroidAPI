#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		CheckBoxPreference(QAndroidJniObject obj);
		// Constructors
		CheckBoxPreference(android::content::Context arg0);
		CheckBoxPreference(android::content::Context arg0, __JniBaseClass arg1);
		CheckBoxPreference(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		CheckBoxPreference(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		CheckBoxPreference() = default;
		
		// Methods
	};
} // namespace android::preference

