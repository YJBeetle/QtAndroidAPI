#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Handler;
}

namespace android::database
{
	class ContentObserver : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentObserver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentObserver(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ContentObserver(android::os::Handler arg0);
		
		// Methods
		jboolean deliverSelfNotifications() const;
		void dispatchChange(jboolean arg0) const;
		void dispatchChange(jboolean arg0, android::net::Uri arg1) const;
		void onChange(jboolean arg0) const;
		void onChange(jboolean arg0, android::net::Uri arg1) const;
	};
} // namespace android::database

