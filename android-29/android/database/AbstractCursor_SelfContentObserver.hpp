#pragma once

#include "../../__JniBaseClass.hpp"
#include "./ContentObserver.hpp"

namespace android::database
{
	class AbstractCursor;
}

namespace android::database
{
	class AbstractCursor_SelfContentObserver : public android::database::ContentObserver
	{
	public:
		// Fields
		
		AbstractCursor_SelfContentObserver(QAndroidJniObject obj);
		// Constructors
		AbstractCursor_SelfContentObserver(android::database::AbstractCursor &arg0);
		AbstractCursor_SelfContentObserver() = default;
		
		// Methods
		jboolean deliverSelfNotifications();
		void onChange(jboolean arg0);
	};
} // namespace android::database

