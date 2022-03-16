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
		Mac(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static javax::crypto::Mac getInstance(JString arg0);
		static javax::crypto::Mac getInstance(JString arg0, JString arg1);
		static javax::crypto::Mac getInstance(JString arg0, java::security::Provider arg1);
		JObject clone() const;
		JByteArray doFinal() const;
		JByteArray doFinal(JByteArray arg0) const;
		void doFinal(JByteArray arg0, jint arg1) const;
		JString getAlgorithm() const;
		jint getMacLength() const;
		java::security::Provider getProvider() const;
		void init(JObject arg0) const;
		void init(JObject arg0, JObject arg1) const;
		void reset() const;
		void update(JByteArray arg0) const;
		void update(jbyte arg0) const;
		void update(java::nio::ByteBuffer arg0) const;
		void update(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace javax::crypto

