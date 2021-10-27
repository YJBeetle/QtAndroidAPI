#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::se::omapi
{
	class Session;
}

namespace android::se::omapi
{
	class Channel : public __JniBaseClass
	{
	public:
		// Fields
		
		Channel(QAndroidJniObject obj);
		// Constructors
		Channel() = default;
		
		// Methods
		void close();
		jbyteArray getSelectResponse();
		QAndroidJniObject getSession();
		jboolean isBasicChannel();
		jboolean isOpen();
		jboolean selectNext();
		jbyteArray transmit(jbyteArray arg0);
	};
} // namespace android::se::omapi

