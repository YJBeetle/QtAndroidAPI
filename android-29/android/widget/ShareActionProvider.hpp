#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		ShareActionProvider(QAndroidJniObject obj);
		// Constructors
		ShareActionProvider(android::content::Context arg0);
		ShareActionProvider() = default;
		
		// Methods
		jboolean hasSubMenu();
		QAndroidJniObject onCreateActionView();
		void onPrepareSubMenu(__JniBaseClass arg0);
		void setOnShareTargetSelectedListener(__JniBaseClass arg0);
		void setShareHistoryFileName(jstring arg0);
		void setShareIntent(android::content::Intent arg0);
	};
} // namespace android::widget

