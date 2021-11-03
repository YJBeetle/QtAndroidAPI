#pragma once

#include "../../JObject.hpp"

class JObjectArray;
class JObject;
class JString;

namespace java::util
{
	class Objects : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Objects(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Objects(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jint checkFromIndexSize(jint arg0, jint arg1, jint arg2);
		static jlong checkFromIndexSize(jlong arg0, jlong arg1, jlong arg2);
		static jint checkFromToIndex(jint arg0, jint arg1, jint arg2);
		static jlong checkFromToIndex(jlong arg0, jlong arg1, jlong arg2);
		static jint checkIndex(jint arg0, jint arg1);
		static jlong checkIndex(jlong arg0, jlong arg1);
		static jint compare(JObject arg0, JObject arg1, JObject arg2);
		static jboolean deepEquals(JObject arg0, JObject arg1);
		static jboolean equals(JObject arg0, JObject arg1);
		static jint hash(JObjectArray arg0);
		static jint hashCode(JObject arg0);
		static jboolean isNull(JObject arg0);
		static jboolean nonNull(JObject arg0);
		static JObject requireNonNull(JObject arg0);
		static JObject requireNonNull(JObject arg0, JString arg1);
		static JObject requireNonNull(JObject arg0, JObject arg1);
		static JObject requireNonNullElse(JObject arg0, JObject arg1);
		static JObject requireNonNullElseGet(JObject arg0, JObject arg1);
		static JString toString(JObject arg0);
		static JString toString(JObject arg0, JString arg1);
	};
} // namespace java::util

