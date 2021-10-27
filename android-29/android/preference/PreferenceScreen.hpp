#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Preference.hpp"
#include "./PreferenceGroup.hpp"

namespace android::app
{
	class Dialog;
}
namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}
namespace android::widget
{
	class AdapterView;
}
namespace android::widget
{
	class ListView;
}

namespace android::preference
{
	class PreferenceScreen : public android::preference::PreferenceGroup
	{
	public:
		// Fields
		
		PreferenceScreen(QAndroidJniObject obj);
		// Constructors
		PreferenceScreen() = default;
		
		// Methods
		void bind(android::widget::ListView arg0);
		QAndroidJniObject getDialog();
		QAndroidJniObject getRootAdapter();
		void onDismiss(__JniBaseClass arg0);
		void onItemClick(android::widget::AdapterView arg0, android::view::View arg1, jint arg2, jlong arg3);
	};
} // namespace android::preference

