#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JObject;
class JString;
namespace java::nio
{
	class ByteBuffer;
}
namespace java::security
{
	class Provider;
}
namespace java::security
{
	class Provider_Service;
}
namespace javax::crypto
{
	class MacSpi;
}

namespace javax::crypto
{
	class Mac : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Mac(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Mac(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::crypto::Mac getInstance(JString arg0);
		static javax::crypto::Mac getInstance(JString arg0, JString arg1);
		static javax::crypto::Mac getInstance(JString arg0, java::security::Provider arg1);
		JObject clone();
		JByteArray doFinal();
		JByteArray doFinal(JByteArray arg0);
		void doFinal(JByteArray arg0, jint arg1);
		JString getAlgorithm();
		jint getMacLength();
		java::security::Provider getProvider();
		void init(JObject arg0);
		void init(JObject arg0, JObject arg1);
		void reset();
		void update(JByteArray arg0);
		void update(jbyte arg0);
		void update(java::nio::ByteBuffer arg0);
		void update(JByteArray arg0, jint arg1, jint arg2);
	};
} // namespace javax::crypto

