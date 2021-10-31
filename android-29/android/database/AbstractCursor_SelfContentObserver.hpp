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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractCursor_SelfContentObserver(const char *className, const char *sig, Ts...agv) : android::database::ContentObserver(className, sig, std::forward<Ts>(agv)...) {}
		AbstractCursor_SelfContentObserver(QAndroidJniObject obj);
		
		// Constructors
		AbstractCursor_SelfContentObserver(android::database::AbstractCursor arg0);
		
		// Methods
		jboolean deliverSelfNotifications();
		void onChange(jboolean arg0);
	};
} // namespace android::database

