#pragma once

#include "../../JObject.hpp"
#include "../view/ActionProvider.hpp"

namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::view
{
	class View;
}

namespace android::widget
{
	class ShareActionProvider : public android::view::ActionProvider
	{
	public:
		// Fields
		static jstring DEFAULT_SHARE_HISTORY_FILE_NAME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ShareActionProvider(const char *className, const char *sig, Ts...agv) : android::view::ActionProvider(className, sig, std::forward<Ts>(agv)...) {}
		ShareActionProvider(QAndroidJniObject obj);
		
		// Constructors
		ShareActionProvider(android::content::Context arg0);
		
		// Methods
		jboolean hasSubMenu();
		android::view::View onCreateActionView();
		void onPrepareSubMenu(JObject arg0);
		void setOnShareTargetSelectedListener(JObject arg0);
		void setShareHistoryFileName(jstring arg0);
		void setShareIntent(android::content::Intent arg0);
	};
} // namespace android::widget

