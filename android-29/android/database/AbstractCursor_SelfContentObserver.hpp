#pragma once

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
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractCursor_SelfContentObserver(const char *className, const char *sig, Ts...agv) : android::database::ContentObserver(className, sig, std::forward<Ts>(agv)...) {}
		AbstractCursor_SelfContentObserver(QJniObject obj);
		
		// Constructors
		AbstractCursor_SelfContentObserver(android::database::AbstractCursor arg0);
		
		// Methods
		jboolean deliverSelfNotifications() const;
		void onChange(jboolean arg0) const;
	};
} // namespace android::database

