#pragma once

#include "../../../java/security/spec/EncodedKeySpec.def.hpp"

class JByteArray;
class JObject;
class JString;

namespace android::crypto::hpke
{
	class XdhKeySpec : public java::security::spec::EncodedKeySpec
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit XdhKeySpec(const char *className, const char *sig, Ts...agv) : java::security::spec::EncodedKeySpec(className, sig, std::forward<Ts>(agv)...) {}
		XdhKeySpec(QJniObject obj) : java::security::spec::EncodedKeySpec(obj) {}
		
		// Constructors
		XdhKeySpec(JByteArray arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getFormat() const;
		JByteArray getKey() const;
		jint hashCode() const;
	};
} // namespace android::crypto::hpke

