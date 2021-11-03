#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JObject;
class JString;

namespace java::util
{
	class UUID : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UUID(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UUID(QJniObject obj);
		
		// Constructors
		UUID(jlong arg0, jlong arg1);
		
		// Methods
		static java::util::UUID fromString(JString arg0);
		static java::util::UUID nameUUIDFromBytes(JByteArray arg0);
		static java::util::UUID randomUUID();
		jint clockSequence() const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::util::UUID arg0) const;
		jboolean equals(JObject arg0) const;
		jlong getLeastSignificantBits() const;
		jlong getMostSignificantBits() const;
		jint hashCode() const;
		jlong node() const;
		jlong timestamp() const;
		JString toString() const;
		jint variant() const;
		jint version() const;
	};
} // namespace java::util

