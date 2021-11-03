#pragma once

#include "../../JObject.hpp"

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
		static javax::crypto::Mac getInstance(jstring arg0);
		static javax::crypto::Mac getInstance(jstring arg0, jstring arg1);
		static javax::crypto::Mac getInstance(jstring arg0, java::security::Provider arg1);
		jobject clone();
		jbyteArray doFinal();
		jbyteArray doFinal(jbyteArray arg0);
		void doFinal(jbyteArray arg0, jint arg1);
		jstring getAlgorithm();
		jint getMacLength();
		java::security::Provider getProvider();
		void init(JObject arg0);
		void init(JObject arg0, JObject arg1);
		void reset();
		void update(jbyteArray arg0);
		void update(jbyte arg0);
		void update(java::nio::ByteBuffer arg0);
		void update(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace javax::crypto

