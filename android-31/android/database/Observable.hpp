#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util
{
	class ArrayList;
}

namespace android::database
{
	class Observable : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Observable(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Observable(QAndroidJniObject obj);
		
		// Constructors
		Observable();
		
		// Methods
		void registerObserver(jobject arg0);
		void unregisterAll();
		void unregisterObserver(jobject arg0);
	};
} // namespace android::database

