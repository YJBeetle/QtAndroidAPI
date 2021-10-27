#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::net
{
	class URI;
}

namespace java::net
{
	class CookieHandler : public __JniBaseClass
	{
	public:
		// Fields
		
		CookieHandler(QAndroidJniObject obj);
		// Constructors
		CookieHandler();
		
		// Methods
		static QAndroidJniObject getDefault();
		static void setDefault(java::net::CookieHandler arg0);
		QAndroidJniObject get(java::net::URI arg0, __JniBaseClass arg1);
		void put(java::net::URI arg0, __JniBaseClass arg1);
	};
} // namespace java::net

