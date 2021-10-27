#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "./Activity.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::app
{
	class AliasActivity : public android::app::Activity
	{
	public:
		// Fields
		
		AliasActivity(QAndroidJniObject obj);
		// Constructors
		AliasActivity();
		
		// Methods
	};
} // namespace android::app

