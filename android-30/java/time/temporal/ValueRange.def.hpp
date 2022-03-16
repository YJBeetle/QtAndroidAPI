#pragma once

#include "../../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;

namespace java::time::temporal
{
	class ValueRange : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ValueRange(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ValueRange(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::time::temporal::ValueRange of(jlong arg0, jlong arg1);
		static java::time::temporal::ValueRange of(jlong arg0, jlong arg1, jlong arg2);
		static java::time::temporal::ValueRange of(jlong arg0, jlong arg1, jlong arg2, jlong arg3);
		jint checkValidIntValue(jlong arg0, JObject arg1) const;
		jlong checkValidValue(jlong arg0, JObject arg1) const;
		jboolean equals(JObject arg0) const;
		jlong getLargestMinimum() const;
		jlong getMaximum() const;
		jlong getMinimum() const;
		jlong getSmallestMaximum() const;
		jint hashCode() const;
		jboolean isFixed() const;
		jboolean isIntValue() const;
		jboolean isValidIntValue(jlong arg0) const;
		jboolean isValidValue(jlong arg0) const;
		JString toString() const;
	};
} // namespace java::time::temporal

