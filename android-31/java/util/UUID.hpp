#pragma once

#include "../../JObject.hpp"


namespace java::util
{
	class UUID : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UUID(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UUID(QAndroidJniObject obj);
		
		// Constructors
		UUID(jlong arg0, jlong arg1);
		
		// Methods
		static java::util::UUID fromString(jstring arg0);
		static java::util::UUID nameUUIDFromBytes(jbyteArray arg0);
		static java::util::UUID randomUUID();
		jint clockSequence();
		jint compareTo(jobject arg0);
		jint compareTo(java::util::UUID arg0);
		jboolean equals(jobject arg0);
		jlong getLeastSignificantBits();
		jlong getMostSignificantBits();
		jint hashCode();
		jlong node();
		jlong timestamp();
		jstring toString();
		jint variant();
		jint version();
	};
} // namespace java::util

