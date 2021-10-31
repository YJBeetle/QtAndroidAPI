#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Preference.hpp"
#include "./PreferenceGroup.hpp"

namespace android::app
{
	class Dialog;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit PreferenceScreen(const char *className, const char *sig, Ts...agv) : android::preference::PreferenceGroup(className, sig, std::forward<Ts>(agv)...) {}
		PreferenceScreen(QJniObject obj);
		
		// Constructors
		
		// Methods
		void bind(android::widget::ListView arg0);
		android::app::Dialog getDialog();
		__JniBaseClass getRootAdapter();
		void onDismiss(__JniBaseClass arg0);
		void onItemClick(android::widget::AdapterView arg0, android::view::View arg1, jint arg2, jlong arg3);
	};
} // namespace android::preference

