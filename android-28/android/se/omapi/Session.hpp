#pragma once

#include "../../../JObject.hpp"

class JByteArray;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit Session(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Session(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		void closeChannels();
		JByteArray getATR();
		android::se::omapi::Reader getReader();
		jboolean isClosed();
		android::se::omapi::Channel openBasicChannel(JByteArray arg0);
		android::se::omapi::Channel openBasicChannel(JByteArray arg0, jbyte arg1);
		android::se::omapi::Channel openLogicalChannel(JByteArray arg0);
		android::se::omapi::Channel openLogicalChannel(JByteArray arg0, jbyte arg1);
	};
} // namespace android::se::omapi

