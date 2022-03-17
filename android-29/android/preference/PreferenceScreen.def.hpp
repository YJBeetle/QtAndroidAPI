#pragma once

#include "./PreferenceGroup.def.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PreferenceScreen(const char *className, const char *sig, Ts...agv) : android::preference::PreferenceGroup(className, sig, std::forward<Ts>(agv)...) {}
		PreferenceScreen(QAndroidJniObject obj) : android::preference::PreferenceGroup(obj) {}
		
		// Constructors
		
		// Methods
		void bind(android::widget::ListView arg0) const;
		android::app::Dialog getDialog() const;
		JObject getRootAdapter() const;
		void onDismiss(JObject arg0) const;
		void onItemClick(android::widget::AdapterView arg0, android::view::View arg1, jint arg2, jlong arg3) const;
	};
} // namespace android::preference

