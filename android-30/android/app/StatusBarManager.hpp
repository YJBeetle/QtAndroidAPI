#pragma once

#include "../../JObject.hpp"


namespace android::app
{
	class StatusBarManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StatusBarManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StatusBarManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::app

