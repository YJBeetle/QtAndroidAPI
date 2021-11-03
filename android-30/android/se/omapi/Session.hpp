#pragma once

#include "../../../JObject.hpp"

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
	class Session : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Session(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Session(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		void closeChannels();
		jbyteArray getATR();
		android::se::omapi::Reader getReader();
		jboolean isClosed();
		android::se::omapi::Channel openBasicChannel(jbyteArray arg0);
		android::se::omapi::Channel openBasicChannel(jbyteArray arg0, jbyte arg1);
		android::se::omapi::Channel openLogicalChannel(jbyteArray arg0);
		android::se::omapi::Channel openLogicalChannel(jbyteArray arg0, jbyte arg1);
	};
} // namespace android::se::omapi

