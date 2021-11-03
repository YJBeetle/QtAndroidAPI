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
		jint clockSequence();
		jint compareTo(JObject arg0);
		jint compareTo(java::util::UUID arg0);
		jboolean equals(JObject arg0);
		jlong getLeastSignificantBits();
		jlong getMostSignificantBits();
		jint hashCode();
		jlong node();
		jlong timestamp();
		JString toString();
		jint variant();
		jint version();
	};
} // namespace java::util

