#pragma once

#include "../../__JniBaseClass.hpp"
#include "../database/ContentObserver.hpp"

namespace android::content
{
	class Loader;
}

namespace android::content
{
	class Loader_ForceLoadContentObserver : public android::database::ContentObserver
	{
	public:
		// Fields
		
		Loader_ForceLoadContentObserver(QAndroidJniObject obj);
		// Constructors
		Loader_ForceLoadContentObserver(android::content::Loader arg0);
		Loader_ForceLoadContentObserver() = default;
		
		// Methods
		jboolean deliverSelfNotifications();
		void onChange(jboolean arg0);
	};
} // namespace android::content

