#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::se::omapi
{
	class Channel;
}
namespace android::se::omapi
{
	class Reader;
}

namespace android::se::omapi
{
	class Session : public __JniBaseClass
	{
	public:
		// Fields
		
		Session(QAndroidJniObject obj);
		// Constructors
		Session() = default;
		
		// Methods
		void close();
		void closeChannels();
		jbyteArray getATR();
		QAndroidJniObject getReader();
		jboolean isClosed();
		QAndroidJniObject openBasicChannel(jbyteArray arg0);
		QAndroidJniObject openBasicChannel(jbyteArray arg0, jbyte arg1);
		QAndroidJniObject openLogicalChannel(jbyteArray arg0);
		QAndroidJniObject openLogicalChannel(jbyteArray arg0, jbyte arg1);
	};
} // namespace android::se::omapi

