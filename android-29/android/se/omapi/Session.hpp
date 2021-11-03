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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Session(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Session(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close() const;
		void closeChannels() const;
		JByteArray getATR() const;
		android::se::omapi::Reader getReader() const;
		jboolean isClosed() const;
		android::se::omapi::Channel openBasicChannel(JByteArray arg0) const;
		android::se::omapi::Channel openBasicChannel(JByteArray arg0, jbyte arg1) const;
		android::se::omapi::Channel openLogicalChannel(JByteArray arg0) const;
		android::se::omapi::Channel openLogicalChannel(JByteArray arg0, jbyte arg1) const;
	};
} // namespace android::se::omapi

