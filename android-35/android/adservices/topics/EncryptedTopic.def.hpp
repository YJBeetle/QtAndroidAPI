#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JObject;
class JString;

namespace android::adservices::topics
{
	class EncryptedTopic : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EncryptedTopic(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EncryptedTopic(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		EncryptedTopic(JByteArray arg0, JString arg1, JByteArray arg2);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JByteArray getEncapsulatedKey() const;
		JByteArray getEncryptedTopic() const;
		JString getKeyIdentifier() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::adservices::topics

